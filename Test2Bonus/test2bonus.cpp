#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

void printMenu()
{
	cout << "Staion Reporting data:" << endl;
	cout << "0. Belize City" << endl;
	cout << "1. Corozal " << endl;
	cout << "2. Orange Walk" << endl;
	cout << "3. San Ignacio " << endl;
	cout << "4. Dangriga " << endl;
	cout << "5. Exit" << endl;
	cout << endl;

}
string getsOption()
{
	int item = 0;
	string location;
	cout << "Enter the number of desired item: ";
	cin >> item;

	switch (item) {
	case 0:
		location = "Belize City";
		break;
	case 1:
		location = "Corozal";
		break;
	case 2:
		location = "Orange Walk";
		break;
	case 3:
		location = "San Ignacio";
		break;
	case 4:
		location = "Dangriga ";
		break;
	case 5:
		cout << "The program is ending. " << endl;
		exit(0);
	}
	cout << endl;

	return location;
}

/*void printReport(double weatherReadings[][3], int row, double speed[], int row1)
{
	cout << "Wind Speeds at Reporting Weather Stations: ";
	for (int i = 0; i < 6; i++)
	{

		for (int j = 0; j < 3; j++)
		{
			cout << "(" << weatherReadings[i][j] << " ";
		}
		cout << "Speed: " << speed[i] << endl;
	}
}*/


int main()
{
	double weatherReadings[6][3];
	double add;
	double speed[6];
	
	printMenu();


	for (int i = 0; i < 6; i++)
	{
	
		cout << "Wing Comonents for " << getsOption() << ": " << endl;
		add = 0;

		for (int j = 0; j < 3; j++)
		{
			cin >> weatherReadings[i][j];
			add += pow(weatherReadings[i][j], 2);
		}
		speed[i] = sqrt(add);
		cout << "Wind Speed is " << fixed << setprecision(2) << speed[i] << endl;
		cout << endl;

	}
	
	//printReport(weatherReadings, 6, speed, 6);

	cout << "Wind Speeds at Reporting Weather Stations: ";
	for (int i = 0; i < 6; i++)
	{

		for (int j = 0; j < 3; j++)
		{
			if (j == 0)
			{
				cout << "(";
			}
			cout << weatherReadings[i][j] << " ";
			if (j == 2)
			{
				cout << ")";
			}
		}
		cout << "Speed: " << speed[i] << endl;
	}

	return 0;
}