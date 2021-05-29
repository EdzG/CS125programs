#include "tools.h"


using namespace std;


void mainMenu()
{
	int menuchoice = 0;
	cout << "***************Alive*****************" << endl;
	cout << endl << endl;
	cout << " --------------Main Menu--------------" << endl;
	cout << "---------------New Game (1)-----------" << endl;
	cout << "---------------About    (2)-----------" << endl;
	cout << "---------------Quit     (3)-----------" << endl;
	cout << endl << endl;

	cout << "Choose the number of the option you wish to select. " << endl;
	cin >> menuchoice;
	system("cls");

	switch (menuchoice)
	{
	case 1:
		playgame();
		break;
	case 2:
		about();
		break;
	case 3:
		cout << "Thank you for playing!" << endl;
		break;
	default:
		cout << "Invalid Option" << endl;
		cout << "Try again" << endl;
		
	}
	return;
}

void about()
{
	cout << "*************************************Alive*********************************************" << endl;
	cout << endl;
	cout << "Alive is adventure game that takes you ";
	cout << "300 years into the future." << endl;
	cout << "After being placed in cryosleep you awake to ";
	cout << "a world filled with aliens who invaded earth." << endl;
	cout << "After reading a messaged left for you in a ";
	cout << "computer you embark in a mission ensure the ";
	cout << "survival of humanity." << endl;
	cout << endl;
	cout << "Alive is a c++ game created by **** as part of a ";
	cout << "challenge issued by a friend." << endl;
	cout << "Regardless, I hope you enjoy the game." << endl;
	cout << "For feedback contact: 660-7252 " << endl;
	cout << endl << endl;
	system("pause");
	system("cls");
	mainMenu();
}

void intro(string& name)
{
	cout << "You slowly open your eyes. The room is dark and dusty. It looks like nobody has been there in years." << endl;
	cout << "You climb out of the machine you were in and start walking around. Your head is hurting and you have no idea\n";
	cout << "how you got there. After walking for some minutes you find a computer. You press the power button and to your\n";
	cout << "surprise, it is still working." << endl << endl;
	cout << "Computer: Enter your name: "; cin >> name;
	cin.ignore(200, ' ');
	cin.clear();
	cout << "Computer: Welcome " << name << ", you are humanities last hope of survival." << endl << endl;
	cout << "Before the aliens landed on earth, the nations around the world united to ensure our victory. " << endl;
	cout << "The world's best scientist and engineers came together and formulated a plan. " << endl;
	cout << "The scientist claimed that in 200 years an astroid would collid with the planet and wipe out 99 percent of the aliens" << endl;
	cout << "However, it would bring along toxic gas. This toxic gas would remain in the atomosphere for 50 years. For this reason, ";
	cout << "you were placed in cryosleep for 300 years. The engineers build the strongest bunker possible and equipped it with ";
	cout << "weapons for your journey. \n " << endl;
	system("pause");
}

void classMenu()
{
			cout << "Choose Your Class: " << endl << endl;

			cout << "1.) " << "Gunner" << endl;
			cout << "2.) " << "Assassin" << endl;
			cout << "3.) " << "Sniper" << endl << endl;
	
}

void playGameClass(int classchoice)
{
	cin >> classchoice;

		switch (classchoice)
		{
		case 1:
			gunner();
			break;
		case 2:
			assassin();
			break;
		case 3:
			sniper();
			break;
		}

}
