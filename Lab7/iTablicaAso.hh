#ifndef iTablicaAso_HH
#define itablicaAso_HH

/*
	interfejs iTablica
*/

class iTablicaAso{
public:
	virtual void dodaj(int indeks,int wartosc)= 0; // indeks to "szufladka" definiowana kluczem
	virtual void usun(int indeks) = 0;
	virtual void wypisz() = 0;
	virtual void znajdz()= 0;

};


#endif