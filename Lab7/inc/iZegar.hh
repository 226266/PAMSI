#ifndef iZegar_HH
#define iZegar_HH

/*
	interfejs iZegar
*/

#include "iTestowany.hh"

class iZegar {
public:
	virtual	void CzasStart()=0;		//rozpoczecie odmierzania czasu
	virtual void CzasStop()=0;		//zakonczenie odmierzania czasu
	virtual void IleTrwalo()=0;		//na podstawie roznicy (koniec-start) wystwietla ile czasu minelo
	virtual void ZmierzCzas(iTestowany &Obiekt, int ilosc)=0;	//procedura Start>WykonajTest>Stop>PokazIleTrwalo

};

#endif
