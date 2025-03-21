#include <iostream>
using namespace std;
int main()
{
	const int NUM_FISH = 20;
	int fish[NUM_FISH];
		for (int count = 0; count < 20; count++)
		{
			cout << "How many fish did fisherman " << count + 1 << " catch?" << endl;
			cin >> fish[count];

		}
		for (int count = 0; count < 20; count++)
			cout << "Fisherman " << count + 1 << " caught " << fish[count] << " Fish" << endl;
		return 0;
}
