#include <iostream>
using namespace std;
int main()
{
	char kezdob;
	int szint;
	double aranyszam;
	bool vip;
	string targy;
	char eszkoz;
	double aranyar;
	cout << "Üdv a játékban" << endl;
	cout << "Válassz egy betűt: (H)arcos vagy (V)arazslo ";
	cin >> kezdob;
	cout << "Mondd meg a szinted: ";
	cin >> szint;
	cout << "Aranyaid száma: ";
	cin >> aranyszam;
	cout << "Vip tagságod van-e: 1, ha igen, 0, ha nem: ";
	cin >> vip;
	if (szint >=5 || vip == 1)
	{
		cout << "Sikeres belépés a boltba\n";
		cout << "Kaszt: " << kezdob << " Szint: " << szint << " Arany: " << aranyszam << " Vip van-e: " << vip << endl;
		cout << "G/g - Gyogyital (Ara: 20.5 arany)\n";
		cout << "K/k - Kard (Ara: 75.0 arany)\n";
		cout << "V/v - Varazsbot (Ara: 120.0 arany)\n";
		
		cout << "Melyik targyat szeretnéd hasznalni: ";
		cin >> eszkoz;
		switch (eszkoz)
		{
		case 'G':targy = "Gyogyital";
			aranyar = 20.5;
				break;
		case 'g':targy="Gyogyital"; 
			aranyar = 20.5;
			break;
		case 'K':targy = "Kard"; 
			aranyar = 75.0;
			break;
		case 'k':targy = "Kard"; 
			aranyar = 75.0;
			break;
		case 'V':targy = "Varazsbot";
			aranyar = 120.0;
			break;
		case 'v':targy = "Varazsbot";
			aranyar = 120.0;
			break;
		default: cout << "Hiba, a targy ara: 0";
			if (eszkoz == 'G' || eszkoz == 'g' && )
			{

			}
		}
	

	}
	else {
		cout << "Sajnálom, a szinted túl alacsony a belépéshez!" << endl;
	}

}
