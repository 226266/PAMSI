#include <iostream>
#include <cstdlib>
#include "TablicaAso.hh"
#include <string>

using namespace std;
/////////////////////////////////////////////////////////////////
TablicaAso::TablicaAso(int rozmiar){
	tablica = new Element* [rozmiar];
	ROZMIAR = rozmiar;
	for (int i = 0; i < rozmiar; i++) {
		tablica[i] = NULL;
		}
	}
///////////////////////////////////////////////////////////////
int TablicaAso::haszuj(string klucz){
	const char *klucz_c;
	int hash; // suma % modulo
	int suma = 0; //suma wartosci ASCI liter wyrazu
	int modulo = ROZMIAR;
	klucz_c = klucz.c_str(); // zwraca  lancuch znakow
	for (unsigned int i = 0; i < klucz.length(); i++) {
		suma += klucz_c[i];
		}
	return hash = suma%modulo;
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
void TablicaAso::znajdz_klucz(string szukany_klucz){
	for (int i = 0; i < ROZMIAR; i++) {
		Element* temp = tablica[i];
		while (temp != NULL) {
			if(temp->klucz_elementu == szukany_klucz){
				cout << "Klucz: " << temp->klucz_elementu << ", Wartosc: " << temp->wartosc_elementu << "\t";
				temp = temp->nastepny;
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
				cout << "Klucz: " << temp->klucz_elementu << ", Wartosc: " << temp->wartosc_elementu << "\t";
				temp = temp->nastepny;
				}
			else{
				temp = temp->nastepny;
				}
			}
		}
	}
//////////////////////////////////////////////////////////////////
void TablicaAso::wykonaj_test(int ilosc){
	string slowo ;
	int liczba, szukane;
	for (int i = 0; i < ilosc; i++) {
		cout << "podaj slowo [SPACJA] wartosc" << '\n';
		cin>>slowo >> liczba;
		dodaj(slowo, liczba);
	}
	cout << "podaj szukane " << endl;
	cin >> szukane;
	znajdz_wartosc(szukane);
}
