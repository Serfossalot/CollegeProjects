#include <iostream>
using namespace std;

int main()
{

    int number = 0;
    int needsSafetyCheck = 0;

    cout << "Please enter a number 1-4";
    cin >> number;
    switch (number)
    {
    case 1: cout << "Kiddie Rides\n";
        break;
    case 2: cout << "Family Rides\n";
        break;
    case 3: cout << "Thrill Rides\n";
        needsSafetyCheck += 1;
        break;
    case 4: cout << "Extreme Rides\n";
        needsSafetyCheck += 1;
        break;
    default: cout << "Unknown Category\n";
    }
}