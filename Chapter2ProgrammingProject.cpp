// This is the Gas Mileage portion of the Chapter 2 Programming Project

#include <iostream>
using namespace std;

int main()
{
    const int TANK = 20;
    double townDriving = 23.5;
    double highwayDriving = 28.9;

    cout << "While driving in town with a full tank, you can travel " << townDriving*TANK << " miles" << endl;
    cout << "While driving on the highway with a full tank, you can travel " << highwayDriving * TANK << " miles" << endl;

    return 0;
}
