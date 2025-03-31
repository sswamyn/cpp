#include <iostream>
	using namespace std;

int main() {

    string s = "ABCEFGH";
    cout << "s = [" << s << "]" << endl;
    cout << "s[0] = " << s[0] << endl;

    cout << "s.length() = " << s.length() << endl;
    // substr(k, length); 
    //   k is the starting index and length is the number of characters to extract
    cout << "s.substr(0, 3) = " << s.substr(0, 3) << endl;
    cout << "s.substr(2, 4) = " << s.substr(2, 4) << endl;

    // Intentionally causing an out_of_range exception
    cout << "s.substr(22, 40) = " << s.substr(22, 40) << endl;
    
    /* g++ string.cpp -o string
    ** ./string
    ** Output
    s = [ABCEFGH]
    s[0] = A
    s.length() = 7
    s.substr(0, 3) = ABC
    s.substr(2, 4) = CEFG
    libc++abi: terminating due to uncaught exception of type std::out_of_range: basic_string
    s.substr(22, 40) = [1]    39051 abort      ./string
    */
}