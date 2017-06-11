// Rafał Perużyński
// 226266
// PAMSI


#include "Zegar.hh"
#include "TablicaAso.hh"
#include "iostream"
#include <string>

using namespace std;
int costam;


/////////////////////////////////////////////////////////////
int main(){
	// TWORZE ZMIENNA DO POMIARU CZASU
	Zegar Stoper;
	double czas_sredni;
	string do_znalezienia = "szukane";
  int rozmiar_tablicy_haszujacej;
	int ilosc_elementow_do_tablicy;
	int rodzaj_haszowania;
	cout << "PODAJ WIELKOSC TABLICY | ILOSC ELEMENTOW |RODZAJ HASZOWANIA (1-modulo / 2-mnozenie)"<<endl;
	cin >> rozmiar_tablicy_haszujacej>> ilosc_elementow_do_tablicy >> rodzaj_haszowania;

	for( int j = 0; j<1000; j++){
		TablicaAso Tab1(rozmiar_tablicy_haszujacej, rodzaj_haszowania);
		Tab1.wypelnij(ilosc_elementow_do_tablicy);
		Tab1.Dodaj_pierwszy();
		Stoper.CzasStart();
		Tab1.wykonaj_test(rodzaj_haszowania);
		Stoper.CzasStop();
		czas_sredni += Stoper.IleTrwalo();
		}
	cout << "CZAS SREDNI = " << czas_sredni/1000 << endl;



return 0;
}
