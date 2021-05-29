#include "tools.h"

using namespace std;

int playgame()
{
	string name;
	int classchoice = 0;
	intro(name);
	classMenu();
	playGameClass(classchoice);
	return 0;
}