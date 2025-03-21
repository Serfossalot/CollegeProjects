//This Program is for Project 2
//Programmer: Joel Serfoss


using namespace std;
#include <iostream>
int main()
{	
	//This is the destination menu 
	const int bahamas = 1;
	const int hawaii = 2;
	const double UNDERAGE_DISCOUNT = .75;
	double airfare = 0;
	int choice1;
	int choice2;
	string destination;

	cout << "Where would you like to go?\n"
		<< "1. Bahamas\n"
		<< "2. Hawaii\n"
		<< "Enter Your Choice: ";
	cin >> choice1;
	if (choice1 == 1)
	    destination = "Bahamas";
			
	else if (choice1 == 2)
		destination = "Hawaii";
		
	else
		cout << "Rerun the program and choose either 1 or 2 to figure out where you are flying" << endl;
	switch (choice1)
	{
	case bahamas:
		cout << "You will be flying via US Air to the Bahamas";
		break;
	case hawaii:
		cout << "You will be flying via Delta to Hawaii";
		break;
	default:
		cout << "Your choices are Bahamas (Option 1) or Hawaii (Option 2)" << endl;


	}
	switch (choice1)

	{

	case bahamas:
		cout << "" << endl;
		cout << "What is the expected air fare per one adult for a round trip?" << endl;
		cin >> airfare;
		if (airfare <= 0 || airfare > 1000)
			cout << "Please enter a number in between 1 and 1000" << endl;
		break;
	case hawaii:
		cout << "" << endl;
		cout << "What is the expected expected air fare per one adult?" << endl;

		cin >> airfare;
		if (airfare <= 0 || airfare > 1000)
			cout << "Please enter a number in between 1 and 1000" << endl;
		break;



	}
		//Menu for how many people
	  cout << "How many people will be taking this trip? \n\n";
	  cout  << "" << endl;
	  cout	<< "1. One Person\n"
			<< "2. Two People\n"
			<< "3. Three People\n"
			<< "4. Four People\n"
			<< "Please enter your choice: ";
		cin >> choice2;
		int num_underage;
		double total_adult_cost = 0, total_child_cost = 0, total_cost = 0;

		switch (choice2)
		{
		case 1:
			cout << "Enter the number of passengers who are underage of 18: ";
			cin >> num_underage;
			total_adult_cost = airfare;
			total_child_cost = airfare * UNDERAGE_DISCOUNT;
			total_cost = total_child_cost + total_adult_cost;
			if (num_underage == 0)
				total_cost = airfare;

			else if (num_underage == 1)
				total_cost = 75;
			else
				cout << "Please input one or zero for underage passengers" << endl;
			break;
		case 2:
			cout << "Enter the number of passengers who are underage of 18: ";
			cin >> num_underage;
			total_child_cost = airfare * UNDERAGE_DISCOUNT * num_underage;
			if (num_underage == 0)
				total_cost = airfare * 2;
			else if (num_underage == 1)
			{
				total_adult_cost = airfare;
				total_cost = total_adult_cost + total_child_cost;
			}
			else
				cout << "Please enter a zero, one, or two" << endl;
			break;
		case 3:
			cout << "Enter the number of passengers who are underage of 18: ";
			cin >> num_underage;
			total_adult_cost = airfare * 3;
			total_child_cost = airfare * UNDERAGE_DISCOUNT * num_underage;
			if (num_underage == 0)
				total_cost = airfare * 3;
			else if (num_underage == 1)
			{
				total_child_cost = airfare * UNDERAGE_DISCOUNT;
				total_cost = airfare * 2 + total_child_cost;

			}
			else if (num_underage == 2)
			{
				total_child_cost = airfare * 2 * UNDERAGE_DISCOUNT;
				total_cost = airfare + total_child_cost;
			}
			else if (num_underage == 3)
			{
				total_child_cost = airfare * 3 * UNDERAGE_DISCOUNT;
				total_cost = total_child_cost;
				break;
			}
			else
				cout << "Please enter a zero, one, two or three" << endl;
		case 4:
			cout << "Enter the number of passengers who are underage of 18: ";
			cin >> num_underage;
			total_adult_cost = airfare * 4;
			total_child_cost = airfare * UNDERAGE_DISCOUNT * num_underage;

			if (num_underage == 0)
				total_cost = airfare * 4;
			else if (num_underage == 1)
			{
				total_child_cost = airfare * UNDERAGE_DISCOUNT;
				total_cost = airfare * 3 + total_child_cost;

			}
			else if (num_underage == 2)
			{
				total_child_cost = airfare * 2 * UNDERAGE_DISCOUNT;
				total_cost = airfare + airfare + total_child_cost;
			}
			else if (num_underage == 3)
			{
				total_child_cost = airfare * 3 * UNDERAGE_DISCOUNT;
				total_cost = airfare + total_child_cost;

				break;
			}
			else if (num_underage == 4)
			{
				total_child_cost = airfare * 4 * UNDERAGE_DISCOUNT;
				total_cost = total_child_cost;
			}
			else
				cout << "Please enter a number in between 0 and 4" << endl;
			}
		    
			//Output for vacation program
			cout << "Thank you, you will be flying to " << destination << endl;
			cout << "The airfare for each adult is $" << airfare << endl;
			cout << "The airfare for the children is $" << total_child_cost << endl;
			cout << "And the total cost for this trip is $" << total_cost << endl;



			return 0;

		}