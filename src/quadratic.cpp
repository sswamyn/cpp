#include <iostream> 
	using namespace std;
#include <cmath>

// quadratic.cpp


int main() {

	// define input variables 
	double a, b, c; 
	cout << " Enter the coefficients of a quadratic equation: " << endl;
	cout << " \ta: "; cin >> a; cout << endl;
	cout << " \tb: "; cin >> b; cout << endl;
	cout << " \tc: "; cin >> c; cout << endl;

	cout << "THe equation is: " << a << "*x*x + " << b << "*x + " << c << " = 0 " << endl;

	double d = b*b - 4*a*c;
	if (d < 0)
	{
		cout << "The discriminant, d = " << d << endl;
		cout << "\t < 0, so there is no real soultions. \n";
		cout << "***************************************************\n";
		cout << "** You are more than welcome to 'imagine' one :) **\n";
		cout << "***************************************************\n";

		return 0;
	} // now the else part d => 0 
	double sqrtd = sqrt(d);
	double x1 = (-b + sqrtd) / (2*a);
	double x2 = (-b - sqrtd) / (2*a);

	cout << "*** Tada *** \n\tthe solutions are:\n";
	cout << "\tx1 : " << x1 << endl;
	cout << "\tx2 : " << x2 << "\n\n";

	cout << "Check: \n";
	cout << "\ta*x1*x1 + b*x1 + c = " << a*x1*x1 + b*x1 + c << endl ;
	cout << "\ta*x2*x2 + b*x2 + c = " << a*x2*x2 + b*x2 + c << endl ;
	cout << "***************** bye, see you soon. ******************\n";

	return 0;
}