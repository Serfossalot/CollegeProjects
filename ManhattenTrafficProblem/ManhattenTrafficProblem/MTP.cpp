#include <iostream>
#include <algorithm>
#include <sstream>
#include <string>
#include <vector>
#include <fstream>
#include <iomanip>
using namespace std;

vector <string> Parse_CSV_Row(const string& s)
{
	//This function was sourced from the project folder on canvas
	//Inputs a string that stores 1 excel row
	//Returns a vector of strings

	stringstream ss(s);//copy string input to stringstream ss
	string item;
	vector<string> tokens;
	while (getline(ss, item, ','))//input every column
	{
		tokens.push_back(item);
	}

	return tokens;
}
vector<vector<int>> Reader(const string& filename)
{
	vector<vector<int>> map;//Create 2D Vector called map
	ifstream file(filename);//Create input file**Indicate actual file name in main
	if (!file) {//Check to see if filel is already open
		cout << "Error: Could not open file!\n";
		return {};  // Return an empty 2D vector
	}
	string line;

	while (getline(file, line)) //Line 36-47 was sourced from github
	{
		vector<string> tokens = Parse_CSV_Row(line);
		vector<int> row;
		
		for (const auto& token : tokens)
			{
			row.push_back(stoi(token));
			}
		map.push_back(row);
	}
	return map;

}

//Function to find highest cost in mtp
vector<vector<int>> HC_MTP(const vector<vector<int>>& ManhattenMap)
{
	int rows = ManhattenMap.size();
	int columns = ManhattenMap[0].size();
	vector<vector<int>> mtp(rows, vector<int>(columns, 0));

	// Start 
	mtp[0][0] = ManhattenMap[0][0];

	// First Row (Can only come from the left)
	for (int j = 1; j < columns; j++) {
		mtp[0][j] = mtp[0][j - 1] + ManhattenMap[0][j];
	}

	// First Column (Can only come from above)
	for (int i = 1; i < rows; i++) {
		mtp[i][0] = mtp[i - 1][0] + ManhattenMap[i][0];
	}

	//Fill the Rest of the DP Table
	for (int i = 1; i < rows; i++)
	{
		for (int j = 1; j < columns; j++)
		{
			mtp[i][j] = ManhattenMap[i][j] + max(mtp[i - 1][j], mtp[i][j - 1]);
		}
	}

	return mtp;
}

//Backtrack Function
vector<pair<int, int>> BacktrackMTP(const vector<vector<int>>& mtp)
{
	int rows = mtp.size();
	int columns = mtp[0].size();
	vector<pair<int, int>> path;
	
	//Start at destination
	int i = rows - 1;
	int j = columns - 1;

	//Begin backtracking
	while (i > 0 || j > 0)
	{
		path.push_back({ i, j }); //This stores the current position

		if (i == 0)//If we are at the first row move left only
		{
			j--;
		}
		else if (j == 0)// If we are at the first column, we can only move up
		{
			i--;
		}
		else if (mtp[i - 1][j] > mtp[i][j - 1])
		{
			i--;
		}
		else
			j--;
	}
	//Add starting position
	path.push_back({ 0, 0 });

	//Reverse path to show order
	reverse(path.begin(), path.end());

	return path;

	
}
void PrintPath(const vector<pair<int, int>>& path)
{
	cout << "Path taken while only moving south and east:" << endl;

	for (size_t i = 1; i < path.size(); i++)
	{
		int prevRow = path[i - 1].first;
		int prevCol = path[i - 1].second;
		int currRow = path[i].first;
		int currCol = path[i].second;

		if (currRow > prevRow)
		{
			cout << "S";
		}
		else
			cout << "E";

	}
	cout << endl;
	cout << endl;
}
void PrintMap(const vector<vector<int>>& ManhattenMap)
{
	cout << "CS 3304 - Manhattan Tourist Problem" << endl;
	cout << "Joel Serfoss" << endl;
	cout << "Edge Weights = " << endl;

	for (const auto& row : ManhattenMap)
	{
		for (int val : row)
		{
			cout << setw(15) << left << val << " ";
			
		}

		cout << endl;		
	}
	cout << endl;
	cout << endl;
	
}
void OptimalScore(const vector<vector<int>> &mtp)
{
	int rows = mtp.size();
	int columns = mtp[0].size();
	cout << "Optimal score = " << mtp[rows - 1][columns - 1] << endl;
}

int main()
{
	string filename = ("C:\\cpp\\Input.csv");
	vector<vector<int>> ManhattenMap = Reader(filename);

	if (ManhattenMap.empty())
	{
		cout << "ERROR! Please ensure input file is not empty." << endl;
		return 1;
	}
	vector<vector<int>> mtp = HC_MTP(ManhattenMap);

	vector<pair<int, int>> path = BacktrackMTP(mtp);
	PrintMap(ManhattenMap);
	PrintPath(path);
	OptimalScore(mtp);
	

	system("pause");
}