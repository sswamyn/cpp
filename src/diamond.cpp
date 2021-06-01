#include <iostream>
	using namespace std;

int main() {
	
	int numStars=5;
	cout << " Enter the maximum number of stars in your diamond: " << endl;
	cout << " \tNo: of stars: "; cin >> numStars; cout << endl;

	// TRIANGLE
	//for (int i=0; i<= numStars; i++)
	// Diamond 
	for (int i=0; i<= 2*numStars; i++)
		{for (int j=0; j<=2*numStars; j++)
			if (i<=numStars)
				if (j<numStars-i || j>numStars+i) cout << " ";
				else cout <<"*";
			else 
				if (j < i-numStars || j > 3* numStars-i) cout << " ";
				else cout <<"*";
		 cout << endl ;
		}
}