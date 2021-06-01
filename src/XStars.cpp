#include <iostream>
	using namespace	std;
int main() {
	const int N=5;
	for (int i=0; i<=2*N; i++) {
		for (int j=0; j<=2*N; j++)
		{
			if (i<=2*N)
				if (j==2*N-i) 
					cout << "*";
				else 
					cout << " ";
			
				if (j==i )    
					cout << "*";
				else
					cout << " ";
		}	
		cout <<"\n";
	}

}