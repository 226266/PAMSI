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

	TablicaAso Tab1(5);

	Stoper.CzasStart();
	Tab1.wykonaj_test(5);
	Stoper.CzasStop();
	Stoper.IleTrwalo();

return 0;
}