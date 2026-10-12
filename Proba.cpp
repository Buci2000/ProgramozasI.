// Proba.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	int szintek[5],i;
	for (i = 0; i < 5;i++)
	{
		do {
			cout << i + 1 << ". jatekos ird ide a szinted (0 es 100 kozott): ";
			cin >> szintek[i];
			
			if (szintek[i] < 0 || szintek[i]>100) {
				cout << "Ez nem ervenyes szint, adj meg egy masik szintet" << endl;
			}
		} while (szintek[i] < 0 || szintek[i]>100);
	}
	
	double atlag = 0;
	int max_value = szintek[0];
	for (i = 0; i < 5;i++)
	{
		if (szintek[i]>max_value)
		{
			max_value = szintek[i];
		}

		atlag = atlag + szintek[i];
	}
	cout << "A legmagasabb ertek: " << max_value << endl;
	cout << "A csapat atlagos szintje: " << atlag / 5 << endl;

	int edzes = 0;

	while (true)
	{
		bool van_kicsi = false;

		for (i = 0; i < 5; i++)
		{
			if (szintek[i] < 10)
				van_kicsi = true;
		}

		if (!van_kicsi)
			break;

		edzes++;

		for (i = 0; i < 5; i++)
		{
			if (szintek[i] < 10)
				szintek[i]++;
		}
	}

	cout << edzes << " napra volt szukseg osszesen!";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
