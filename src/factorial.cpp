#include <iostream>
	using namespace std;
int factorial(int);
int main() {
	for (int n=0; n<12; n++)
		cout << n << "\t" << factorial(n) << endl;
	return 0;
}
int factorial(int n) {
	int f=1;
	for (int i=2; i<=n; i++)
		f *= i;
	return f;
}
