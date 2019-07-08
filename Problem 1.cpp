#include<iostream>
#include<iomanip>
#include<conio.h>

using namespace std;

int main()
{
	double box_tix , sideline_tix , premium_tix , genad_tix;

	cout << fixed << showpoint << setprecision(2);

	cout << "Ticket Prices: " << endl;
	cout << "Gen admission Ticket = $ 25 " << endl;
	cout << "Box Ticket = $ 50 " << endl;
	cout << "Sideline Ticket = $ 100" << endl;
	cout << "Premium Ticket = $ 250" << endl << endl;

	cout << "Enter number of Gen ad tickets purchased: ";
	cin >> genad_tix;

	cout << endl << "Enter number of Box tickets purchased: ";
	cin >> box_tix;

	cout << endl << "Enter number of Sideline tickets purchased: ";
	cin >> sideline_tix;

	cout << endl << "Enter number of Premium tickets purchased: ";
	cin >> premium_tix;

	cout << endl <<  "Total sale amount of tickets: " << endl;
	cout << "General Admission tickets: " << genad_tix*25 << endl;
	cout << "Box tickets: " << box_tix*50 << endl;
	cout << "Sideline tickets: " << sideline_tix*100 << endl;
	cout << "Premium tickets: " << premium_tix*250 << endl;

	getch();
	return 0;
}