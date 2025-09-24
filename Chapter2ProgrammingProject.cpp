// This is the Energy Drink portion of the Chapter 2 Programming Project

#include <iostream>
#include <cmath>
using namespace std;


int main()
{
    const int SOFT_DRINK_CUSTOMERS = 16500;
    double energyDrinkApostates = 16500 * 0.15;
    int citrusEnjoyers = round(energyDrinkApostates * 0.58);
    cout << "Of the " << SOFT_DRINK_CUSTOMERS << " customers of the Soft Drink Company, " << energyDrinkApostates << " buy their energy drinks\n" << endl;
    cout << "Of those, " << citrusEnjoyers << " prefer the citrus flavored energy drink" << endl;

    return 0;
}
