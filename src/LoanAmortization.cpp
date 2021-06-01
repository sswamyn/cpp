#include <iomanip> // defines setw() funciton 
#include <iostream> //cin & cout
  using namespace std;

// LoanAmortization.cpp

int main() {
	double amount, payment, rate, interest;
	cout << "\n\t Enter Loan amount in dollars : "; cin >> amount;
	cout << "\n\t Enter Monthly payment amount : "; cin >> payment;
	cout << "\n\t Enter Interest Rate as a percent : "; cin >> rate; 

	rate /= 100; // rate = rate / 100; to convert percentage to decimal number 
	rate /= 12 ; // convert the annual rate in decimals to monthly rate 

	cout << setw(10) << "\n\n Month   Interest   Amount \n";
	cout << setw(10) <<     " -----   --------   ------ \n";
	cout << setiosflags(ios::fixed|ios::showpoint) << setprecision(2);
	cout << setw(2) << 0 << setw(25) << amount << "\n" ;
	int year = 0;
	for (int month=1; amount>0; month++)
	{   if (month > 12) {year++; month=1;}
		interest = rate*amount; 
		amount += interest;
		amount -= payment;
		cout << setw(2) << year << "Y " << month << "m"
		      << setiosflags(ios::fixed|ios::showpoint)
		      << setprecision(2)
		      << setw(8) << interest 
		      << setw(13) << (amount>0?amount:0) << "\n";
	}
	cout << setw(2) <<     " -----   --------   ------ \n";
}









