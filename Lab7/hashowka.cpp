#include <iostream>
#include <cstdlib>
#include <string> 	
using namespace std;



int klucz( string Haslo){
	char pierwsza_litera = Haslo[0];
	return (int)pierwsza_litera;
}



int main(){
	string mojehaslo;
	cin >> mojehaslo;
	cout<<klucz(mojehaslo)<<endl;

	return 0;
}