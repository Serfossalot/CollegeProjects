#include <vector>
#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;

void Erase_Vector_Items(vector<int> &, int);
void displayVector(const vector<int> &);

int main()
{
	vector<int> testVector{ 1,2,3,7,4,5,7,6,7 };
	cout << "This is the original vector: " << endl;
	displayVector(testVector);
	Erase_Vector_Items(testVector, 7);
	cout << "This is the edited vector: " << endl;
	displayVector(testVector);

	return 0;
}
void Erase_Vector_Items(vector<int> &v1, int value)
{
	v1.erase(remove(v1.begin(), v1.end(), value), v1.end());
}
void displayVector(const vector<int> &v1)
{
	for (int val : v1)
	{
		cout << val << " ";
	}
	cout << endl;
}
