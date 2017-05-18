#ifndef TABLICAASO_HH
#define TABLICAASO_HH

#include "iTablicaAso.hh"
#include "iTestowany.hh"
#include <cstdlib>
#include <string>

using namespace std;

class TablicaAso: public iTablicaAso,public iTestowany {
public:
	void dodaj(string klucz,int wartosc);
	void wypelnij();
	void wypisz_tablice();
	void znajdz_klucz(string szukany_klucz); // szuka po kluczach
	void znajdz_wartosc(int szukana_wartosc);// szuka po wartosciach
	int haszuj(string klucz); // funkcja zwraca "hash" - wartosc liczbowa klucza

  void wykonaj_test(int ilosc); // procedura testowa

  TablicaAso(int rozmiar); // konstruktor

private:
	struct Element{
		int wartosc_elementu;
		string klucz_elementu;
		Element *nastepny;
		Element(){ nastepny = NULL;}
	};

	int ROZMIAR;
	Element	**tablica;
};


#endif
