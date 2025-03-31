#include <iostream>
    using namespace std;

    // find() method in string

int main() {
    string str ="Mississippi";
    // find() method returns the first occurrence of the specified character
    cout << "The first occurrence of 's' is at index \n " ;
    cout << " str.find('s')       = " << str.find('s') << endl;
    string substr = "issi";
    cout << "The first occurrence of 'issi' is at index " << endl;
    cout << " str.find(substr)    = " << str.find(substr) << endl << endl;
    
    cout << " str.find(substr, 2) = " << str.find(substr, 2) << endl;
    cout << " str.find(substr, 8) = " << str.find(substr, 8) << endl;
    cout << "            UINT_MAX = " << UINT_MAX << endl;

}