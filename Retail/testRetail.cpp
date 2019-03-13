#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <fstream>
#include "RetailItem.h"
using namespace std;

void loadItems(vector<RetailItem> &);

int main()
{
	vector<RetailItem> item(20);
	loadItems(item);

	cout << "description" << setw(10) << "price" << setw(10) << "available" << setw(10) << "stock value" << endl << endl;
	for (int i = 0; i < item.size(); i++)
	{
		cout << setw(10) << item[i].getDescription() << setw(10) << item[i].getPrice << setw(10) << item[i].getUnits() << setw(10) << item[i].getStockValue << endl;
	}

	return 0;
}

void loadItems(vector<RetailItem> & other)
{
	fstream file;

	string name, units, price;

	file.open("retail.csv");
	while (getline(file, name, ','))
	{
		getline(file, units, ',');
		getline(file, price, '\n');

		RetailItem display(name, stoi(units), stod(price));
		other.push_back(display);
	}

	file.close;
}