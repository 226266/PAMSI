// Rafał Perużyński
// 226266
// PAMSI


#include "Zegar.hh"
#include "Drzewo.hh"
#include "iostream"
#include <string>

using namespace std;


/////////////////////////////////////////////////////////////
int main(){
	// TWORZE ZMIENNA DO POMIARU CZASU
	Zegar Stoper;
	Drzewo D1;
	int wielkosc_problemu;
	double czas_sredni;

	cout << "PODAJ WIELKOSC PROBLEMU : " ;
	cin >> wielkosc_problemu;

	for( int j = 0; j<20; j++){
		for (int i = 0; i < wielkosc_problemu; i++) {
			D1.dodaj_wezel(rand()%1000+1);
			}
		D1.dodaj_wezel(1254);

		Stoper.CzasStart();
		D1.szukaj(1254);
		Stoper.CzasStop();
		czas_sredni += Stoper.IleTrwalo();
		}
	cout << "CZAS SREDNI = " << czas_sredni/20 << endl;

return 0;
}
