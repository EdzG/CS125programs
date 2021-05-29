#include "Functions.h"

using namespace std;
void banner()
{
	cout << "******************************************************************************************" << endl;
	cout << "Programmers: Eder Guerrero, Amrit Mukhi" << endl;
	cout << "November 19, 2020" << endl;
	cout << "This program calculates and makes a table displaying drag force for different trucks" << endl;
	cout << "******************************************************************************************" << endl;
}

void meets_criteria(double& starting_speed, double& final_speed, double& area)
{
	do
	{
		cout << "Invalid Inputs, try again" << endl;
		cout << "Please enter the frontal area of the truck in square meters: ";
		cin >> area;
		cout << "Please enter the starting speed in m/s: ";
		cin >> starting_speed;
		cout << "Please enter the ending speed in m/s: ";
		cin >> final_speed;
		
		cout << endl;

	} while (starting_speed <= final_speed || area < 0 || starting_speed < 0 || final_speed < 0);

}

double calculateDragForce(double area, double c, double dens, double starting_speed)
{
	double dragf;

		dragf = c * ((dens * area * starting_speed * starting_speed) / 2);
	
		return dragf;
}

void printtable(double area, double stan, double dens, double starting_speed, double final_speed, double Fair, double gap)
{
	cout << setw(15) << left << "Speed (m/s) " << setw(15) << left << "Standard (N)" << setw(15) << left << "With Fair (N) " << setw(15) << left << "Gap (N)" << endl;
	for (;starting_speed <= final_speed; starting_speed++)
	{
		cout << fixed << setprecision(2) << setw(15) << left << starting_speed << " ";
		cout << fixed << setprecision(2) << setw(15) << left << calculateDragForce(area, stan, dens, starting_speed) << " ";
		cout << fixed << setprecision(2) << setw(15) << left << calculateDragForce(area, Fair, dens, starting_speed) << " ";
		cout << fixed << setprecision(2) << setw(15) << left << calculateDragForce(area, gap, dens, starting_speed) << " ";
		cout << endl;
	}
}

void storetable(double area, double stan, double dens, double starting_speed, double final_speed, double Fair, double gap, std::string name)
{
	ofstream outfile(name);
	outfile << setw(15) << left << "Speed (m/s) " << setw(15) << left << "Standard (N)" << setw(15) << "With Fair (N) " << setw(15) << "Gap (N)" << endl;
	for (;starting_speed <= final_speed; starting_speed++)
	{
		outfile << fixed << setprecision(2) << setw(15) << left << starting_speed;
		outfile << fixed << setprecision(2) << setw(15) << left << calculateDragForce(area, stan, dens, starting_speed);
		outfile << fixed << setprecision(2) << setw(15) << left << calculateDragForce(area, Fair, dens, starting_speed);
		outfile << fixed << setprecision(2) << setw(15) << left << calculateDragForce(area, gap, dens, starting_speed);
		outfile << endl;

	}
	outfile.close();
}

