//testPercentage.cpp
//This program will determine the grades in percentage a student got on different tests.
//Eder Guerrero

#include <iostream>
#include <iomanip> 
#include <string>
using namespace std;

int main()
{
	string name;
	int totalScoreEnglish, scoreEarnedEnglish, totalScoreMath, scoreEarnedMath;
	double percentageEnglish, percentageMath;
	
	//Get student's test data
	cout << "Enter student's name: " << endl;
	cin >> name;
	
	cout << "Total score of the English test: " << endl;
	cin >> totalScoreEnglish;
	cout << "Score the student got: " << endl;
	cin >> scoreEarnedEnglish;

	cout << "Total scores of the Math test: " << endl;
	cin >> totalScoreMath;
	cout << "Score the student got: " << endl;
	cin >> scoreEarnedMath;

	percentageEnglish = ((double)scoreEarnedEnglish / (double)totalScoreEnglish) * 100;
	percentageMath = ((double)scoreEarnedMath / (double)totalScoreMath) * 100;
	cout << fixed;

	cout << setprecision(1) << percentageEnglish << "% is the English percentage." << endl;
	cout << setprecision(1) << percentageMath << "% is the Math percentage." << endl;
	cout << name << endl;
	cout << setw(10) << "English " << setw(10) << scoreEarnedEnglish << "/" << totalScoreEnglish << setw(10) << setprecision(1) << percentageEnglish << "%" << endl;
	cout << setw(10) << "Math " << setw(10) << scoreEarnedMath << "/" << totalScoreMath << setw(10) << setprecision(1) << percentageMath << "%" << endl;
	return 0;
}