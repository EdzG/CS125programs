#include "Functions.h"

using namespace std;

double calculateDragForce(double area, double c, double dens, double sts)
{
	double dragf;

	
		dragf = c * ((dens * area * sts * sts) / 2);
	
		return dragf;
}

void storetable(double area, double stan, double dens, double sts, double fs, double Fair, double gap, std::string name)
{
	ofstream outfile(name);
	outfile << setw(15) << left << "Speed (m/s) " << setw(15) << left << "Standard (N)" << setw(15) << "With Fair (N) " << setw(15) << "Gap (N)" << endl;
	for (;sts <= fs; sts++)
	{
		outfile << fixed << setprecision(2) << setw(15) << left << sts;
		outfile << fixed << setprecision(2) << setw(15) << left << calculateDragForce(area, stan, dens, sts);
		outfile << fixed << setprecision(2) << setw(15) << left << calculateDragForce(area, Fair, dens, sts);
		outfile << fixed << setprecision(2) << setw(15) << left << calculateDragForce(area, gap, dens, sts);
		outfile << endl;

	}
	outfile.close();
}

void printtable(double area, double stan, double dens, double sts, double fs, double Fair, double gap)
{
	cout << setw(15) << left << "Speed (m/s) " << setw(15) << left << "Standard (N)" << setw(15) << left << "With Fair (N) " << setw(15) << left << "Gap (N)" << endl;
	for (;sts <= fs; sts++)
	{
		cout << fixed << setprecision(2) << setw(15) << left << sts << " ";
		cout << fixed << setprecision(2) << setw(15) << left << calculateDragForce(area, stan, dens, sts) << " ";
		cout << fixed << setprecision(2) << setw(15) << left << calculateDragForce(area, Fair, dens, sts) << " ";
		cout << fixed << setprecision(2) << setw(15) << left << calculateDragForce(area, gap, dens, sts) << " ";
		cout << endl;
	}
}

void banner()
{
	cout << "******************************************************************************************" << endl;
	cout << "Programmers: Eder Guerrero, Amrit Mukhi" << endl;
	cout << "November 19, 2020" << endl;
	cout << "This program calculates and makes a table displaying drag force for different trucks" << endl;
	cout << "******************************************************************************************" << endl;
}