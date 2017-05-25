#ifndef Drzewo_HH
#define Drzewo_HH

#include "iDrzewo.hh"
#include "iTestowany.hh"
#include <cstdlib>

using namespace std;

struct Wezel{
	Wezel * ojciec;
	Wezel * lewy_syn;
	Wezel * prawy_syn;
	int wartosc_wezla;
	char kolor;
};


// Definicja typu obiektowego Drzewo
class Drzewo: public iDrzewo,public iTestowany{
public:
	Drzewo(); // Konstruktor klasy
	void rotacja_w_lewo(Wezel * A); // Rotacja w lewo względem A
  void rotacja_w_prawo(Wezel * A); // Rotacja w prawo względem A
  void dodaj_wezel(int k);   // Wstawia węzeł o kluczu k

	void szukaj(int k); // Wyszukuje węzeł o kluczu k
	void wykonaj_test(int ilosc);

private:
	Wezel S;      // Węzeł strażnika
	Wezel * root;        // Korzeń drzewa czerwono-czarnego

};


#endif
