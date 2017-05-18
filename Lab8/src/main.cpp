// Rafał Perużyński
// 226266
// PAMSI


#include "Zegar.hh"
#include "Drzewo.hh"
#include "iostream"
#include <string>

using namespace std;
int costam;


/////////////////////////////////////////////////////////////
int main(){
	// TWORZE ZMIENNA DO POMIARU CZASU
	Zegar Stoper;


	Stoper.CzasStart();
	//wykonaj_test(wielkosc_problemu);
	Stoper.CzasStop();
	Stoper.IleTrwalo();

return 0;
}
