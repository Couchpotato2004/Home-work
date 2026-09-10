#include <iostream>
using namespace std;

int main()
{
    int gasTank;
    gasTank = 20;
    float milesPerGallonInTown = 23.5;
    double milesPerGallonOnHighway = 28.9;
    double TotalDistanceInTown = gasTank * milesPerGallonInTown;
    double TotalDistanceOnHighway = gasTank * milesPerGallonOnHighway;
    cout << " Your tank can hold 20 gallons of gas.\n";
    cout << " On one full tank of gas, you can go a total of " << TotalDistanceInTown << " In town.\n ";
    cout << "On the Highway you can go a total of " << TotalDistanceOnHighway << ". You're welcome.\n ";
    return 0;
}