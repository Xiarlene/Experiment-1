#include<iostream>
#include<iomanip>
#include<conio.h>

using namespace std;

int main()
{
	double mass, density, volume;

	cout << fixed << showpoint << setprecision(2);

	cout << "Enter Mass of the object: ";
	cin >> mass;
	cout << endl << "Mass is = " << mass << " grams";

	cout << endl << endl << "Enter Density of the object: ";
	cin >> density;
	cout << endl << "Density is = " << density << " grams per cubic cm";

	cout << endl << endl << "Volume of the object is = " << mass*4/density << " per cubic cm";

	getch();
	return 0;
}

