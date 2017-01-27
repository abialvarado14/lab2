
#include <iostream>
#include <stdlib.h>
using namespace std;

 int main(){
	int opc, valor, asig, mayor=500,menor=1,numpensado;
	bool respUser = true;
	char respuesta;
	
	cout << "Si usted quiere que adivine su numero  presione 1, si quiere usted  adivinar presione 2 ";
	cin >> opc;
	switch (opc){
		case 1:
			cout << "HOLA Piensa en un numero... No mayor de 500! ";		
			respUser = true;
	
			while (respUser == true){
				cout << "Mayor" << mayor << "Menor" << menor;   
				valor =menor+ rand()%(mayor+1-menor);
				cout << "\nAcaso el numero es " << valor << "\nSi su respuesta es si 0, si su respuesta es no 1: ";
				cin >> respUser;
				if (respUser == true){
					cout << valor << "Es 1.Mayor o 2. Menor?";
					cin >> asig;					
				}
				if (asig == 2)
					menor = valor;
				
				if(asig == 1)
					mayor = valor;								
			}
			cout << "Adivine el numero!";
		break;

		case 2:
			cout <<"PENSÉ en un numero adivinalo!\nQue numero es? ";
			cin >> numpensado;
			valor =menor+ rand()%(mayor+1-menor);
			while (valor!=numpensado){
				if (numpensado>valor)
					cout << "El numero que ingresaste es mayor al numero que pienso, intentalo de nuevo!";
				if (numpensado<valor)
					cout << "El numero que ingresaste es menor al numero que pienso, intentalo de nuevo!";
				cout<< "\nQue numero es?, ya te di pistas!! ";
				cin >> numpensado;
			}
			cout << "Felicidades! ADIVINASTE EL NUMERO!";

			 	
	}//fin case tipo del juego
 }	
