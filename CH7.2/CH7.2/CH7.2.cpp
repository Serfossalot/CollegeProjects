/*Monkey Business
A local zoo wants to keep track of how many pounds of food each of its monkeys eats each day during a typical
week. Write a program that stores this information in a two-dimensional
3×5 array, where each row represents a different monkey, and each column represents a different day of the week.
The program should first have the user input the data for each monkey. Then it should create a report that
includes the following information:
Average amount of food eaten per day by the whole family of monkeys.
The least amount of food eaten during the week by any one monkey.
The greatest amount of food eaten during the week by any one monkey.
Input Validation: Do not accept negative numbers for pounds of food eaten.

*/
#include <iostream>
using namespace std;

int main()
{
	float monkey[3][5];
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cout << "How much food (in pounds) did monkey " << i + 1 << " eat on day " << j + 1 << " of this week?" << endl;
			cin >> monkey[i][j];
			while (monkey[i][j] < 0)
			{
				cout << "ERROR! Please enter a positive value for the food." << endl;
				cin >> monkey[i][j];
			}
				

		}
	}
	for (int j = 0; j < 5; j++)
	{
		float dayTotal = 0.0;
		for (int i = 0; i < 3; i++)
		{
			dayTotal += monkey[i][j];
		}
		float dayAverage = dayTotal / 3;
		cout << "The food average on day " << j + 1 << " is " << dayAverage << " pounds." << endl;
		cout << endl;
	}
	int greatest = -1;
	int maxRow = -1;
	int maxColumn = -1;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (monkey[i][j] > greatest)
			{
				greatest = monkey[i][j];
				maxRow = i;
				maxColumn = j;
			}
				
		}
	}
	cout << "The greatest amount of food eaten is " << greatest << " pounds." << endl;
	cout << "The monkey that ate the most food was monkey #" << maxRow + 1 << endl;
	cout << "He ate all of that food on the " << maxColumn + 1 << " day of the week." << endl;
	int lowest = monkey[0][0];
	int minRow = -1;
	int minColumn = -1;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (monkey[i][j] < lowest)
			{
				lowest = monkey[i][j];
				minRow = i;
				minColumn = j;
			}
				
		}
	}
	cout << "The least amount of food eaten is " << lowest << " pounds." << endl;
	cout << "The monkey that ate the least amount of food was monkey #" << minRow + 1 << endl;
	cout << "He was not hungry on day #" << minColumn + 1 << " day of the week." << endl;
	return 0;
	}
		