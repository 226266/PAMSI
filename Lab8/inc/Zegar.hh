#ifndef ZEGAR_HH
#define ZEGAR_HH

#include "iZegar.hh"
#include "iTestowany.hh"
#include <cstdlib>
#include <ctime>


class Zegar : public iZegar {
public:
	void CzasStart();										//rozpoczecie odmierzania czasu	
	void CzasStop();										//zakonczenie odmierzania czasu
	void IleTrwalo();										//na podstawie roznicy (koniec-start) wystwietla ile czasu minelo
	void ZmierzCzas( iTestowany &Obiekt , int ilosc);	//procedura Start>WykonajTest>Stop>PokazIleTrwalo

private:
	clock_t poczatek_pomiaru; 
	clock_t koniec_pomiaru;
	double  czas_pomiaru;
	
};

#endif