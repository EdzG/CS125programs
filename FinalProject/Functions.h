#include <iostream>
#include <iomanip>
#include <fstream>

void banner();
double calculateDragForce(double, double, double, double);
void meets_criteria(double&, double&, double&);
void storetable(double, double, double, double, double, double, double, std::string);
void printtable(double, double, double, double, double, double, double);