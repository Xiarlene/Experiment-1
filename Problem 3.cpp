#include<iostream>
#include<iomanip>
#include<conio.h>

using namespace std;

int main()
{
	int d1, d2;
	double Net_Balance, Payment;

	cout << fixed << showpoint << setprecision(3);

	cout << "Enter Payment made: ";
	cin >> Payment;

	cout << endl << "Enter Net Balance: ";
	cin >> Net_Balance;

	cout << endl << "Enter Number of Days payment is made before the billing cycle: ";
	cin >> d2;

	cout << endl << "Enter Number of Days in the Billing Cycle: ";
	cin >> d1;

	cout << endl << endl << "Average Daily Balance is: " << Net_Balance*d1 - Payment*d2/d1 << endl;

	cout << endl << "Interest: " << Net_Balance*d1 - Payment*d2/d1 * 0.0097 << endl;

	getch();
	return 0;
}