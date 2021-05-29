//Programmers: Eder Guerrero, Amrit Mukhi
#include <iostream>
#include "Functions.h" 
#include <iomanip>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	const double stan = 0.96, Fair = 0.76, gap = 0.70, dens = 1.23; //values for drag coefficent pertaining to different types of trucks and density of the air.
	double starting_speed = 0, final_speed = 0, area = 0;
	string name;

	banner();

	
	cout << "*Note: The ending speed needs to be greater than the starting speed and";
	cout << "all inputted numbers must be non-negative" << endl;

	cout << "Please enter the name of the file: ";
	getline(cin, name);
	
	
	
	cout << "Please enter the frontal area of the truck in square meters: ";
	cin >> area;
	cout << "Please enter the starting speed in m/s: ";
	cin >> starting_speed;
	cout << "Please enter the ending speed in m/s: ";
	cin >> final_speed;
	cout << endl;
	
	meets_criteria(area, starting_speed, final_speed);
	cout << area << starting_speed <<final_speed << endl;

	/*while (starting_speed <= final_speed || area <= 0 || starting_speed <= 0 || final_speed < 0)
	{
		cout << "Invalid Inputs, try again" << endl;
		cout << "Please enter the frontal area of the truck in square meters: ";
		cin >> area;
		cout << "Please enter the starting speed in m/s: ";
		cin >> starting_speed;
		cout << "Please enter the ending speed in m/s: ";
		cin >> final_speed;

		cout << endl;
	}

	/*(meets_criteria(area, starting_speed, final_speed) == false);*/

		name += ".txt"; //Add .txt to the file name so that it can be open and saved. 

		cout << "The name of the file is " << name << endl;

		printtable(area, stan, dens, starting_speed, final_speed, Fair, gap); //Calls upon the function to print the table illustrating drag force to the screen. 
		storetable(area, stan, dens, starting_speed, final_speed, Fair, gap, name); //Calls upon the function to store the table that is being displayed in the screen.


	return 0;
}