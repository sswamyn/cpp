#include <iostream>
  using namespace std;

int main() {

    for (int i = 0; i < 129; i++) {

        //cout << " 2^" << i << " \t = " << power << endl;
        printf(" 2^%d \t = %.0f \n", i, pow(2, i));
        i = i *2 + 1;
    }


}