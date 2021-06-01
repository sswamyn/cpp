#include <iostream>
#include <string>
using namespace std;

void addNum();
void source();
void fileProcess();

int main() {
	std::cout << "Hello World!\n\n";
	fileProcess();
	source();

	// addNum(); // didn't work! 

	float f1 = 35e3;
	double d1 = 12E4;
	cout << f1 << "\n";
	cout << d1 << "\n\n\t";

	char a = 65, b = 66, c = 67;
	cout << a << " a \n";
	cout << b << " b \n";
	cout << c << "c \n";

	// String concatination 
	string firstName = "John ";
	string lastName = "Doe";
	string fullName = firstName + lastName;
	cout << fullName;
	string fullName2 = firstName.append(lastName);
	cout << fullName2;

	string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	cout << "\n\n The length of the txt string is: " << txt.length();
	/*
	string myString = "\n\nHello\n";
	cout << myString[0];
	cout << "\n\n"; 
	myString[0] = 'J';
	cout <<" where is Jello?? " << myString << "\n\n";

	//	When input from user has space .. better to use 
	string fullNameAnother;
	cout << "Type your full name: ";
	getline(cin, fullNameAnother);  // cin is passed as the first parameter for getline()
	cout << "Your name is: " << fullNameAnother;
	*/
	source();

	return 0;
}


void  addNum() {
	int x, y;
	int sum;
	cout << "Type a number: ";
	cin >> x;
	cout << "Type another number: ";
	cin >> y;
	sum = x + y;
	cout << "Sum is: " << sum;

}