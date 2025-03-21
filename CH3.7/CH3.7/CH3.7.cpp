/*
Write a program that converts Celsius temperatures to Fahrenheit temperatures.
The formula is:

    F = (9 / 5) * C + 32

F is the Fahrenheit temperature, and C is the Celsius temperature.
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float fheit = 0.0;
    float celcius = 0.0;
    cout << "What temperature in celcius would you like to convert?" << endl;
    cin >> celcius;
    fheit = (9.0 / 5.0) * celcius + 32;
    cout << celcius << "degrees celcius is " << fheit << "degrees farenheit" << endl;
    return 0;
}