#include <iostream>
	using namespace std;

int main() {
	// string has = and += 
    const string str1 = "Peace-porridge ";
    string nurseryRhyme = str1 + "hot, " + str1 + "cold, \n";
    nurseryRhyme += str1 + "sweet, " + str1 + "sour, \n";
    nurseryRhyme += str1 + "hot, " + str1 + "cold, \n";
    nurseryRhyme += str1 + "in the pot, nine days old.\n";
    
    cout << nurseryRhyme << endl;
}