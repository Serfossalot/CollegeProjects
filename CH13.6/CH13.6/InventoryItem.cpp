#include "InventoryItem.h"
//Constructor
InventoryItem::InventoryItem() : name("Unnamed"), quantity(0), price(0.0) {}
InventoryItem::InventoryItem(string n, int q, double p)
{
	name = n;
	quantity = q;
	price = p;

}
//Copy Constructor
InventoryItem::InventoryItem(const InventoryItem& obj)
{
	name = obj.name;
	quantity = obj.quantity;
	price = obj.price;
}
void InventoryItem::displayItem()
{
	cout << "Name: " << getName() << endl;
	cout << "Quantity: " << getQuantity() << endl;
	cout << "Price: $" << getPrice() << endl;
	cout << endl;
 }
double InventoryItem::calculateTotalValue(int q, double p)
{
	double total;
	total = q * p;
	return total;
}
//Setters
void InventoryItem::setName(string n)
{
	name = n;
}
void InventoryItem::setQuantity(int q)
{
	if (q > 0)
	{
		quantity = q;
	}
	else
		cout << "Quantity cannot be negative. Please enter positive value." << endl;
	
}
void InventoryItem::setPrice(double p)
{
	if (p > 0)
	{
		price = p;
	}
	else
		cout << "Price cannot be negative. Please senter a positive value." << endl;
}
//Getters
string InventoryItem::getName()
{
	return name;
}
int InventoryItem::getQuantity()
{
	return quantity;
}
double InventoryItem::getPrice()
{
	return price;
}