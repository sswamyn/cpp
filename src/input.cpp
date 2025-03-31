#include <iostream>
	using namespace std;

int main() {
    string word;
    while (cin >> word) {
        cout << "\t word = [" << word << "]" ;// << endl;
        cout << "\t word.length() = " << word.length() << endl;
    }
}