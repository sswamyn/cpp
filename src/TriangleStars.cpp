#include <iostream>
   using namespace std;

// DiamondShapedStars

int main() {
	const int N=10;
	for(int i=0; i<=N; i++) 
	{
		for (int j=0; j<=2*N; j++)
			if (i<=N)
				if (j<N-i || j>N+i) 
					cout << " ";
				else 
					cout <<"*";
			cout << "\n";
	}
}