#include <iostream>
#include <iomanip>
#include <string>
#include "RetailItem.h"

using namespace std;

RetailItem::RetailItem()
{
	description = " ";
	unitsOnHand = 0;
	price = 0;
}

RetailItem::RetailItem(string d, int u, double p)
{
	description = d;
	unitsOnHand = u;
	price = p;
}

string RetailItem::getDescription()
{
	return description;
}

int RetailItem::getUnits()
{
	return unitsOnHand;
}

int RetailItem::getPrice()
{
	return price;
}

float RetailItem::getStockValue()
{
	float val = static_cast<float>(unitsOnHand * price);
	return val;
}