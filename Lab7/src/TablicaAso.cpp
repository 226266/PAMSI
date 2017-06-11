#include <iostream>
#include <cstdlib>
#include "TablicaAso.hh"
#include <string>

using namespace std;
/////////////////////////////////////////////////////////////////
TablicaAso::TablicaAso(int rozmiar ,int rodzaj_haszowania){
	tablica = new Element* [rozmiar];
	ROZMIAR = rozmiar;
	rodzaj_haszu  = rodzaj_haszowania ;
	for (int i = 0; i < rozmiar; i++) {
		tablica[i] = NULL;
		}
	}
///////////////////////////////////////////////////////////////
int TablicaAso::haszuj(string klucz){ // jak = 1 - modulo / jak =2 mnozenie
	int suma = 0;

	for (int i = 0; i < klucz.length(); i++) { // suma znaków ASCI
		suma += (int) klucz[i];
	}

	if (rodzaj_haszu == 1) { // haszowanie modulo
		return suma % ROZMIAR;
	}
	else if (rodzaj_haszu == 2) { // haszowanie przez mnożenie
		double A = (sqrt(5) - 1) / 2;

		return (int) (ROZMIAR * fmod(suma * A, 1));
	}
}
/////////////////////////////////////////////////////////////////
void TablicaAso::dodaj(string klucz, int wartosc){
	Element *nowy_element = new Element;
	nowy_element->wartosc_elementu = wartosc;
	nowy_element->klucz_elementu = klucz ;
	nowy_element->nastepny = tablica[haszuj(klucz)];
	tablica[haszuj(klucz)] = nowy_element;
	}
//////////////////////////////////////////////////////////////
void TablicaAso::wypisz_tablice(){
	for (int i = 0; i < ROZMIAR; i++) {
		Element* temp = tablica[i];
		cout << "Tablica[" << i << "]\t";
		while (temp != NULL) {
			cout << "Klucz: " << temp->klucz_elementu << ", Wartosc: " << temp->wartosc_elementu << "\t";
			temp = temp->nastepny;
			}
		cout << "\n";
		}
	}
//////////////////////////////////////////////////////////////////
int TablicaAso::znajdz_klucz(string szukany_klucz){
	for (int i = 0; i < ROZMIAR; i++) {
		Element* temp = tablica[i];
		while (temp != NULL) {
			if(temp->klucz_elementu == szukany_klucz){
				//cout << "ZNALEZIONO :"<<endl;
				//cout << "Klucz: " << temp->klucz_elementu << ", Wartosc: " << temp->wartosc_elementu << "\t";
				return 0 ;
				}
			else{
				temp = temp->nastepny;
				}
			}
		}
	}
//////////////////////////////////////////////////////////////////
void TablicaAso::znajdz_wartosc(int szukana_wartosc){
	for (int i = 0; i < ROZMIAR; i++) {
		Element* temp = tablica[i];
		while (temp != NULL) {
			if(temp->wartosc_elementu == szukana_wartosc){
				cout << "ZNALEZIONO :"<<endl;
				cout << "Klucz: " << temp->klucz_elementu << ", Wartosc: " << temp->wartosc_elementu << "\t";
				temp = temp->nastepny;
				}
			else{
				temp = temp->nastepny;
				}
			}
		}
	}
//////////////////////////////////////////////////////////////////////
void TablicaAso:: Dodaj_pierwszy(){
	pierwszy_klucz="";
	for (int j = 0; j < 4; j++) { // 4- dlugosc wyrazu (ilosc liter)
		pierwszy_klucz += 65 + (rand() % 26);
		}
	int pierwszy_liczba;
	pierwszy_liczba = (rand() % 9000) + 1000;
	dodaj(pierwszy_klucz, pierwszy_liczba);
}
//////////////////////////////////////////////////////////////////
void TablicaAso::wypelnij(int ilosc_elementow){
	int liczba;
	for (int i = 0; i < ilosc_elementow; i++) {
			string slowo="";
			for (int j = 0; j < 4; j++) { // 4- dlugosc wyrazu (ilosc liter)
				slowo += 65 + (rand() % 26);
				}
	 		liczba = (rand() % 9000) + 1000;
			dodaj(slowo, liczba);
	}
}
//////////////////////////////////////////////////////////////////////
void TablicaAso::wykonaj_test(int ilosc){
	znajdz_klucz(pierwszy_klucz);
	delete tablica;
}
