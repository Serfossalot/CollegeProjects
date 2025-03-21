#ifndef INVENTORYITEM_H
#define INVENTORYITEM_H
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
class InventoryItem
{
private:
	string name;
	int quantity;
	double price;
public:
	//constructor
	InventoryItem();
	InventoryItem(string, int, double);
	//Copy Constructor
	InventoryItem(const InventoryItem& obj);
	void displayItem();
	double calculateTotalValue(int, double);
	//Setters
	void setName(string);
	void setQuantity(int);
	void setPrice(double);
	//Getters
	string getName();
	int getQuantity();
	double getPrice();

};
#endif