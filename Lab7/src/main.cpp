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
  int wielkosc_problemu;
	cin >> wielkosc_problemu;
	TablicaAso Tab1(wielkosc_problemu);

	Stoper.CzasStart();
	Tab1.wykonaj_test(wielkosc_problemu);
	Stoper.CzasStop();
	Stoper.IleTrwalo();

return 0;
}
