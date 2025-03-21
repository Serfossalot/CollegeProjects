#include "InventoryItem.h"
int main()
{
	InventoryItem j1("Sprocket", 3, 21.99);
	InventoryItem j2("Cranskshaft", 2, 2150.00);
	InventoryItem j3 = j2;
	cout << setprecision(2) << fixed << showpoint << endl;
	j1.displayItem();
	cout << "The total value for item j1 is $" << j1.calculateTotalValue(3, 21.99) <<  "." << endl;
	cout << endl;
	j2.displayItem();
	cout << "The total value for item j2 is $" << j2.calculateTotalValue(2, 2150.00) << "." << endl;
	cout << endl;
	j3.displayItem();
	cout << "The total value for item j3 is $" << j3.calculateTotalValue(2, 2150.00) << "." << endl;
	return 0;
}