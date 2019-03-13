#ifndef retailitem_h
#define retailitem_h

#pragma once
#include <iostream>
#include <iomanip>
#include <string>
#include "RetailItem.cpp"

class RetailItem
{
private:
	string description;
	int unitsOnHand;
	double price;
public:
	RetailItem();
	RetailItem(string, int, double);
	string getDescription();
	int getPrice();
	int getUnits();

	float getStockValue();
};

#endif // !retailitem_h