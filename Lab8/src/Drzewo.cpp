#include <iostream>
#include <cstdlib>
#include "Drzewo.hh"
#include <string>

using namespace std;

Drzewo::Drzewo(){
  S.kolor = 'B';          // Inicjujemy strażnika
  S.ojciec    = &S;
  S.lewy_syn  = &S;
  S.prawy_syn = &S;
  root    = &S;           // Korzeń wskazuje strażnika
}


void Drzewo::szukaj(int k){
	Wezel * p;

  	p = root;
  	while((p != &S) && (p->wartosc_wezla != k)){
		if(k < p->wartosc_wezla){
    		p = p->lewy_syn;
			}
    	else {
        	p = p->prawy_syn;
  			}
  		if(p == &S){
  			cout << "POSZUKIWANIA ZAKONCZONE NIEPOWODZENIEM"<<endl;
  			}
  		cout << "ZNALEZIONO :" << p->wartosc_wezla << endl;
		}

	}


// Wykonuje rotację w lewo względem A
//-----------------------------------
void Drzewo::rotacja_w_lewo(Wezel * A){
	Wezel * B, * p;

  	B = A->prawy_syn;
 	 	if(B != &S){
			p = A->ojciec;
   			A->prawy_syn = B->lewy_syn;
   			if(A->prawy_syn != &S){
   				A->prawy_syn->ojciec = A;
   				}
    		B->lewy_syn = A;
    		B->ojciec = p;
    		A->ojciec = B;

   			if(p != &S){
    	 		 if(p->lewy_syn == A){
    	 		 	p->lewy_syn = B;
    	 		 	}
    	 		 else{
    	 		 	p->prawy_syn = B;
    	 		 	}
    			 }
    		else root = B;
  			}
	}

// Wykonuje rotację w prawo względem A .. analogicznie jak w lewo
//------------------------------------
void Drzewo::rotacja_w_prawo(Wezel * A){
	Wezel * B, * p;

	B = A->lewy_syn;
  	if(B != &S){
    	p = A->ojciec;
    	A->lewy_syn = B->prawy_syn;
    	if(A->lewy_syn != &S){
			A->lewy_syn->ojciec = A;
			}
    	B->prawy_syn = A;
   		B->ojciec = p;
    	A->ojciec = B;

    	if(p != &S){
      		if(p->lewy_syn == A){
      			p->lewy_syn = B;
      			}
      		else{
      			p->prawy_syn = B;
    			}
    		}
    	else root = B;
  		}
	}

void Drzewo::dodaj_wezel(int k){
  Wezel * X, * Y;

  X = new Wezel;        // Tworzymy nowy węzeł
  X->lewy_syn  = &S;          // Inicjujemy pola
  X->prawy_syn = &S;
  X->ojciec    = root;
  X->wartosc_wezla   = k;
  if(X->ojciec == &S) root = X; // X staje się korzeniem
  else
  while(true){             // Szukamy liścia do zastąpienia przez X
    if(k < X->ojciec->wartosc_wezla){
      if(X->ojciec->lewy_syn == &S){
        X->ojciec->lewy_syn = X;  // X zastępuje lewy liść
        break;
      }
      X->ojciec = X->ojciec->lewy_syn;
    }
    else{
      if(X->ojciec->prawy_syn == &S){
        X->ojciec->prawy_syn = X; // X zastępuje prawy liść
        break;
      }
      X->ojciec = X->ojciec->prawy_syn;
    }
  }
  X->kolor = 'R';         // Węzeł kolorujemy na czerwono
  while((X != root) && (X->ojciec->kolor == 'R')){
    if(X->ojciec == X->ojciec->ojciec->lewy_syn){
      Y = X->ojciec->ojciec->prawy_syn; // Y -> wujek X

      if(Y->kolor == 'R'){  // Przypadek 1
        X->ojciec->kolor = 'B';
        Y->kolor = 'B';
        X->ojciec->ojciec->kolor = 'R';
        X = X->ojciec->ojciec;
        continue;
      }

      if(X == X->ojciec->prawy_syn){ // Przypadek 2
        X = X->ojciec;
        rotacja_w_lewo(X);
      }

      X->ojciec->kolor = 'B'; // Przypadek 3
      X->ojciec->ojciec->kolor = 'R';
      rotacja_w_prawo(X->ojciec->ojciec);
      break;
    }
    else{                  // Przypadki lustrzane
      Y = X->ojciec->ojciec->lewy_syn;

      if(Y->kolor == 'R'){ // Przypadek 1
        X->ojciec->kolor = 'B';
        Y->kolor = 'B';
        X->ojciec->ojciec->kolor = 'R';
        X = X->ojciec->ojciec;
        continue;
      }

      if(X == X->ojciec->lewy_syn){ // Przypadek 2
        X = X->ojciec;
        rotacja_w_prawo(X);
      }

      X->ojciec->kolor = 'B'; // Przypadek 3
      X->ojciec->ojciec->kolor = 'R';
      rotacja_w_lewo(X->ojciec->ojciec);
      break;
    }
  }
  root->kolor = 'B';
}




	void Drzewo::wykonaj_test(int ilosc){

	}
