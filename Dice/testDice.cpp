#include <iostream>
#include <iomanip>
#include <string>
#include "Die.h"

using namespace std;

void displayPct(int[], int);

int main()
{
	int d6count[7] = { 0,0,0,0,0,0,0 };
	int d12count[13] = { 0,0,0,0,0,0,0,0,0,0,0,0,0 };
	int i, num;
	Die d6(6);
	Die d12(12);

	for (i = 1; i < 1000000; i++)
	{
		d6.roll();
		num = d6.getValue();
		d6count[num]++;
	}

	displayPct(d6count, 7);


	for (i = 1; i < 1000000; i++)
	{
		d12.roll();
		num = d12.getValue();
		d12count[num]++;
	}

	displayPct(d12count, 13);


	return 0;
}


void displayPct(int die[], int val)
{
	cout << "Stats for a " << (val -1) << " sided die:" << endl;

	for (int i = 1; i < val; i++) 
	{
		cout << "side " << (i) << ": ";
		cout << (static_cast<float>(die[i]) / 1000000) * 100 << "%";
		cout << endl;
	}
}