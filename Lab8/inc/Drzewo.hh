#ifndef Drzewo_HH
#define Drzewo_HH

#include "iDrzewo.hh"
#include "iTestowany.hh"
#include <cstdlib>

using namespace std;

class Drzewo: public iDrzewo,public iTestowany {
public:
	void dodaj_korzen(int wartosc);
	void dodaj_lisc_lewy(int wartosc);
	void dodaj_lisc_prawy(int wartosc);

	// void usun_lisc ();
	//void znajdz_lisc();


	void wykonaj_test(int ilosc);

	Drzewo(int pierwszy_lisc); // konstruktor

private:
	struct Lisc{
		Lisc *lewy; // adres lewego syna
		Lisc *prawy;// adres prawego syna
		Lisc *rodzic;// adres rodzica
		int wartosc_liscia;
	};
		Lisc *korzen = NULL; // pierwszy element drzewa
};


#endif
