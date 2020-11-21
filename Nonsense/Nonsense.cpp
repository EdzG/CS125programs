#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double princ, mon, intrst; //input variables
    double instrstmon;

    cout << "****************************************************************************************" << endl;
    cout << "Programmer: Eder Guerrero" << endl;
    cout << "Program: Calculates and displays the interest and total of a loan by month. " << endl;
    cout << "*****************************************************************************************" << endl;

    cout << "Please enter the amount of money being loaned in dollars: ";
    cin >> princ;
    cout << "Now enter the amount of months you are loaning the money for: ";
    cin >> mon;
    cout << "Finally enter the annual interest rate: ";
    cin >> intrst;

    intrst = (intrst / 100) / 12;// Divide by 100 to convert to decimal and by 12 to get monthly rate.
    for (int i = 1; i <= mon; i++) // For loop that calculates compound interest for the inputted number of months.
    {
        if (i == 1)//Displays only once, at the start of the table. 
        {
            cout << setw(5) << "Month" << setw(15) << " Interest" << setw(15) << "Total" << endl;
        }
        instrstmon = intrst * princ; //Calculates the interest amount for one month.
        princ = princ + instrstmon; //Adds the interest to principal getting the total for the month. 
        cout << fixed << setw(5) << i << setprecision(2) << setw(10) << "$" << instrstmon << setprecision(2) << setw(10) << "$" << princ << endl;
    }
    return 0;
}
