#include<iostream>
#include "tools.h"

using namespace std;

class character
{
private:
	//class members
	int maxHp = 100;
	int Hp = 100;
	int Exp = 0;
	int maxExp = 10;

public:
	//Accessors
	int getMaxHp()
	{
		return maxHp;
	}
	int getHp()
	{
		return Hp;
	}
	int getExp()
	{
		return Exp;
	}
	int getMaxExp()
	{
		return maxExp;
	}
	//Mutator

};

int main()
{
	mainMenu();
	
}
