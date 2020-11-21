#include <iostream>
#include "Functions.h"
#include <iomanip>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	const double stan = 0.96, Fair = 0.76, gap = 0.70, dens = 1.23;
	 double sts, fs, area, placeholder;
	 string name;
	 double printtable1;

	banner();

	cout << "Please enter the name of the file: "; getline(cin,name);
	cout << "Please enter the frontal area of the truck in square meters: ";
	cin >> area;
	cout << "Please enter the starting speed in m/s: ";
	cin >> sts;
	cout << "Please enter the ending speed in m/s: ";
	cin >> fs;
	cout << endl;

	name += ".txt";
	cout << name << endl;

	printtable(area, stan, dens, sts, fs, Fair, gap);
	storetable(area, stan, dens, sts, fs, Fair, gap, name);

	return 0;
}