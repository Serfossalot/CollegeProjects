/*4. Safest Driving Area
Write a program that determines which of five geographic regions within a major city (north, south, east, west,
and central) had the fewest reported automobile accidents last year. It should have the following two functions,
which are called by main:

int getNumAccidents()
is passed the name of a region. It asks the user for the number of automobile accidents reported in that region
during the last year, validates the input, then returns it. It should be called once for each city region.

void findLowest()
is passed the five accident totals. It determines which is the smallest and prints the name of the region,
along with its accident figure.

Input Validation: Do not accept an accident number that is less than 0.*/
#include <iostream>
#include <string>
using namespace std;
int getNumAccidents(string);
void findLowest(int, int, int, int, int);

int main()
{
	int north, south, east, west, central;
	north = getNumAccidents("north");
	south = getNumAccidents("south");
	east = getNumAccidents("east");
	west = getNumAccidents("west");
	central = getNumAccidents("central");

	findLowest(north, south, east, west, central);

}
int getNumAccidents (string area)
{
	int accidents;
	cout << "Please enter the number of accidents for the " << area << " region." << endl;
	cin >> accidents;
	while (accidents < 0)
	{
		cout << "ERROR! You have entered a negative value. Please enter a positive value for accidents" << endl;
		cin >> accidents;
	}

	return accidents;
}
void findLowest(int area1, int area2, int area3, int area4, int area5)
{
	string lowRegion;
	int lowest; 
		lowest = area1;
		lowRegion = "north";
	
		
	if (area2 < lowest) {
		lowest = area2;
		lowRegion = "south";
	}
		
	if (area3 < lowest) {
		lowest = area3;
		lowRegion = "east";
	}
		
	if (area4 < lowest) {
		lowest = area4;
		lowRegion = "west";
	}
		
	if (area5 < lowest) {
		lowest = area5;
		lowRegion = "central";
	}
		
	cout << "The region with the fewest accidents is the " << lowRegion << " region." << endl;
 }