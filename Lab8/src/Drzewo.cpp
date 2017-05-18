#include <iostream>
#include <cstdlib>
#include "Drzewo.hh"
#include <string>

using namespace std;

Drzewo::Drzewo(int wartosc_korzenia){

	}
//////////////////////////////////////////////////////////////////////////
void Drzewo::dodaj_korzen(int wartosc){
	if (korzen == NULL){ //jezeli drzewo jest puste to dodaj korzen
		korzen = new Lisc ;
		korzen->wartosc_liscia=wartosc;
		korzen->lewy = NULL;
		korzen->prawy = NULL;
		korzen->rodzic = NULL;
		}
	}
/////////////////////////////////////////////////////////////////////////
void Drzewo::dodaj_lisc_lewy(int wartosc, Lisc *rodzic_A){
	Lisc *nowy = new Lisc;
	nowy->wartosc_liscia = wartosc;
	nowy->lewy = NULL;
	nowy->prawy = NULL;
	nowy->rodzic = rodzic_A;
	rodzic_A->lewy=nowy;
	}
////////////////////////////////////////////////////////////////////////
void Drzewo::dodaj_lisc_prawy(int wartosc, Lisc *rodzic_A){
	Lisc *nowy = new Lisc;
	nowy->wartosc_liscia = wartosc;
	nowy->lewy = NULL;
	nowy->prawy = NULL;
	nowy->rodzic = rodzic_A;
	rodzic_A->prawy=nowy;
	}








	void Drzewo::wykonaj_test(int ilosc){
		dodaj_korzen();
	}

	
