
//import <iostream>;
//import <format>;
//import <limits>;
#include "format"
            using namespace std;
//;
#include "limits"
#include "iostream"

void initVariables();

void dataTypeLimits();

void castingExamples();


int main()
{
	// initVariables();
    initVariables();

    // dataTypeLimits();
    dataTypeLimits();

    // castingExamples();
    castingExamples();

    return 0;
}



// NOTE: Most compilers will issue a warning or an error
// when code is using uninitialized variables. Some compilers
// will generate code that will report an error at run time.
void initVariables() {
    int uninitializedInt;
    int initializedInt{ 7 };
    const char* printvar = " some text";
    printf(printvar);
    cout << format("{} is a random value", uninitializedInt) << endl;
    cout << format("{} was assigned an initial value", initializedInt) << endl;
}

void dataTypeLimits() {
    	cout << "int:\n";
	cout << format("Max int value: {}\n", numeric_limits<int>::max());
	cout << format("Min int value: {}\n", numeric_limits<int>::min());
	cout << format("Lowest int value: {}\n", numeric_limits<int>::lowest());

	cout << "\ndouble:\n";
	cout << format("Max double value: {}\n", numeric_limits<double>::max());
	cout << format("Min double value: {}\n", numeric_limits<double>::min());
	cout << format("Lowest double value: {}\n", numeric_limits<double>::lowest());
}


void castingExamples() {
    float myFloat{ 3.14f };
	int i1{ (int)myFloat };                // method 1
	int i2{ int(myFloat) };                // method 2
	int i3{ static_cast<int>(myFloat) };   // method 3

    cout << format("myFloat: {}, \t i1: {}, \t i2: {}, \t i3: {}\n", myFloat, i1, i2, i3);
	
    short someShort{ 16 };
	long someLong{ someShort };          // no explicit cast needed
    // NOTE: someLong is not printed
    cout << format("someShort: {}, \t someLong: {}\n", someShort, someLong);

}