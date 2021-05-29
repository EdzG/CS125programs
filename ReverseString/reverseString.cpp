#include <cstring>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;
    cout << "Input a string: ";
    cin >> str;
    string answer = "";
    int stringSize = str.size();

    //creates an array to store the string
    char stringArr[10000];

    //copies the characters from the string and enters them into the array
    strcpy_s(stringArr, str.c_str());

    //For loop to covert an array of characters into a string
    //Decrements starting from the last character in the array.
    for (int i = stringSize-1; i >= 0; i--)
    {
        //Adds the chracters to the previously empty string.
        answer = answer + stringArr[i];
    }
    cout << answer << endl;
    cout << stringSize << endl;
    cout << stringSize + 1 << " " << stringSize - 1 << endl;

    return 0;
}