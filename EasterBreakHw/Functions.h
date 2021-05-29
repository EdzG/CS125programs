#pragma once
//Libraries needed for the program.
#include <iostream>
#include <cmath>
#include <iomanip>

//Needed so that the main can use the different functions.
void calc(double, double, double, int, int);
int** creates2DArr(int, int);
void populatesArr(int**, int, int);
double toRad(double);
double toDegree(double);
void deAllocatesArr(int**, int, int);
void printAns(int**, int, int, int, int, double);