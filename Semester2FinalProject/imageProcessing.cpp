/**************************
  Eder Guerrero 
  26/May/2021
  Image processing program
**************************/
#include <iostream> 
#include "Function.h"

using namespace std;

int main()
{
	int option;
	string fileName = "";
	string savingName = "";

	cout << "Enter the file name: ";
	cin >> fileName;
	cout << endl;
	Image firstImage(fileName);
	firstImage.readFile();
	//firstImage.flip_horizontally();
	do {
	firstImage.printMenu();
	cin >> option;
	if (option == 6) {
		cout << "Enter new file name: ";
		cin >> savingName;
		firstImage.setNewFileName(savingName);
	}
	firstImage.executeOption(option);
	}while (option != 7);


	return 0;
}