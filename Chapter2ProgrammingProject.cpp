//This is the Ocean Levels portion of the Chapter 2 Programming Project

#include <iostream>
using namespace std;

int main()
{
    double oceanRisePerYear;
    oceanRisePerYear = 1.5;

    cout << "At it's current rate, the Ocean is deepening by 1.5 millimeters per year \n" << endl;
    cout << "In 5 years, the Ocean will be " << oceanRisePerYear * 5.0 << " millimeters deeper/taller" << endl;
    cout << "In 7 years, the Ocean will be " << oceanRisePerYear * 7.0 << " millimeters deeper/taller" << endl;
    cout << "In 10 years, the Ocean will be " << oceanRisePerYear * 10.0 << " millimeters deeper/taller" << endl;

    return 0;
}
