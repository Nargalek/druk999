/* Zadanie dodatkowe z Podstaw programowania:
(1) Nale¿y wydrukowaæ na ekranie wszystkie mo¿liwe trzyelementowe
sekwencje cyfr, od 000  do 999.

Wykona³ Jakub Gadecki

*/
#include <iostream>  //deklaracja input output stream do wyduku liczb

using namespace std; 
int a=0; //deklaracja zmiennej

int main(){   //glowna funkcja
	while(a<10){	//rozpoczecie pierwszej petli dla liczb od 000 do 009
		cout<<"00"<<a<<"\n"; //dopisanie pierwszych zer i wydruk wartosci zmiennej a
		a++; //incrementacja zmiennej
	}
	while(a>=10&&a<100){ //rozpoczecie drugiej petli dla liczb od 010 do 099
		cout<<"0"<<a<<"\n"; //dopisanie pierwszego zera i wydruk wartosci zmiennej a
		a++;	//incrementacja zmiennej
	}
	while(a>=100&&a<1000){	//rozpoczecie trzeciej petli dla liczb od 100 do 999
		cout<<a<<"\n"; // wydruk wartosci zmiennej a
		a++; //incrementacja zmiennej
	}

	
	system("PAUSE"); //wstrzumujemy program i czekamy na reakcje
	return 0; //czynimy zadosc funkcji main()
}
