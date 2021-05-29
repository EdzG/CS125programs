/* Name: Eder Guerrero
   Date: 08 Feb 2021
   Program: Allows user input of daily temperatures
            and creates a table displaying day, avg temp. and 
            whether the temp. is above or below average.
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    const int TEMP = 31;
    int temperatures[TEMP], total = 0, average = 0, days = 0;
    string status[TEMP];
   
    cout << "Please enter the temperature of the day in degrees celsius. " << endl;
    cout << "For any extra day, place the temperature as 0." << endl;

    //Allows the user to enter the temperature for each day.
    for (int i = 0; i < TEMP; i++)
    {
        cout << "Day " << i + 1 << ": ";
        cin >> temperatures[i];
        cout << endl;
        total += temperatures[i];

        //Does not count the days where the temperature is zero.
        if (temperatures[i] != 0)
        {
            days += 1;
        }
    }
   
    average = total / days;
 
    cout << "The average temperature for the month is " << average << " degrees celsius" << endl << endl;

    for (int i = 0; i < days; i++)
    {
        if (i == 0)
        {
            cout << "Day \t \t \t Temperature \t \t Status" << endl;
        }
        //Determines wheather the temperature is average, above average, or below average.
        if (temperatures[i] < average)
        {
            status[i] = "Below Average";
        }
        else if (temperatures[i] > average)
        {
            status[i] = "Above Average";
        }
        else if (temperatures[i] == average)
        {
            status[i] = "Average";
        }

        cout << i + 1 << "\t \t \t " << temperatures[i] << "\t \t \t " << status[i] << endl;
    }
    

    return 0;
}