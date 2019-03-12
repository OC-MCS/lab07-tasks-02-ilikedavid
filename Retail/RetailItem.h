#ifndef retailitem_h
#define retailitem_h

#include <iostream>
#include <iomanip>
#include <string>
#include "RetailItem.cpp"

class RetailItem
{
private:
	string description;
	int unitsOnHand;
	int price;
public:
	RetailItem();
	RetailItem(string, int, int);
	string getDescription();
	int getPrice();
	int getUnits();

	float getStockValue();
};

#endif // !retailitem_h