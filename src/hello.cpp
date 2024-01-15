// c++ 20 // #import <iostream>;
#include <iostream>
using namespace std;

int main() {
	// std::cout is needed without 'using namespace std;'  
	//std::cout << "Hello World" << std::endl;

	// Similarly, with 'using namespace std;' we can skip "std::"
	cout << " Hello World" << endl;

	// Literals & Variables 
	int large_num = 23456789;
	cout << large_num << endl; 
	large_num = 23'456'789;  // can be written with separator ' 
//	cout << "redefineed with separator as 23'456'789 \t " << large_num << endl; 

	return 0;
}
