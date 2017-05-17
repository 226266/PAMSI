#ifndef iTablicaAso_HH
#define itablicaAso_HH
#include <string>
using namespace std;
/*
	interfejs iTablicaAso
*/

class iTablicaAso{
public:
	virtual void dodaj(string klucz,int wartosc)=0; // indeks to "szufladka" definiowana kluczem
	virtual	void wypisz_tablice()=0;
	virtual	void znajdz_klucz(string szukany_klucz)=0;
	virtual	void znajdz_wartosc(int szukana_wartosc)=0;
	virtual int haszuj(string klucz)=0;
  virtual void wykonaj_test(int ilosc)=0;
};


#endif
