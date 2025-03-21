#include <list>
#include <iostream>
using namespace std;
template <typename T>
void list_insert(list<T>& lst, int pos, const T& value)
{
	if (pos < 0 || pos > lst.size())
	{
		cout << pos << " is an invalid position." << endl;
		return;
	}
	auto it = lst.begin();
	advance(it, pos);
	lst.insert(it, value);
}
int main()
{
	list<int> lstint = { 10, 20, 30 };
	list_insert(lstint, 2, 25);
	for (int num : lstint) cout << num << " ";
	cout << endl;
	list<char> charlst = { 'a', 'b', 'c' };
	list_insert(charlst, 3, 'd');
	for (char ch : charlst) cout << ch << " ";
	cout << endl;
	list<int> empty;
	list_insert(empty, 0, 45);
	for (int num : empty) cout << num << " ";
	cout << endl;
	list_insert(lstint, -1, 50);
	list_insert(lstint, 100, 25);
	return 0;
}