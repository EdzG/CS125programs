#include <iostream>
#include <string>

using namespace std;

int main()
{
 
	/*int const rows =25;
	int phoneNo[rows];
	char scholarship[rows];
	
	for (int i = 0; i < rows; i++)
	{
		cout << "PhoneNo Row " << i + 1 << ": ";
		cin >> phoneNo[i];
		cout << endl;
		cout << "Scholarship Row " << i + 1 << ": ";
		cin >> scholarship[i];

	}
	for (int i = 0; i < rows; i++)
	{
		cout << "('" << phoneNo[i] << "', '" << scholarship[i] << "')" << endl;
	}*/


	int const rows = 10;
	int ssb[rows];
	string fName[rows], lName[rows], gender[rows], dob[rows];
	char mI[rows];
	double contribution[rows];

	for (int i = 0; i < rows; i++)
	{
		if (i == 0)
		{
			cout << "Enter the first name, mi, lname, gender, dob, and monthly contribution: " << endl;
		}

		cout << "Row " << i + 1 <<": ";
		cin >> fName[i] >> mI[i] >> lName[i] >> gender[i] >> dob[i] >> contribution[i];
	}

	for (int i = 0; i < rows; i++)
	{
		cout << "('" << fName[i] << "', '" << mI[i] << "', '" << lName[i] << "', '" << gender[i] << "', '" << dob[i] << "', '" << contribution[i] << "')" << endl;
	}

	return 0;
}