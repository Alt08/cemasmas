/*
	Construir un programa que permita dirifir el movimiento de un objeto dentro de un tablero
	y actualice su posicion dentro del mismo. Los movimientos posibles son 
		-> ARRIBA
		-> ABAJO
		-> IZQUIERDA
		-> DERECHA
	Tras cada movimiento el programa mostrara la nueva direccion elegida y las coordenadas
	de situacion del objeto dentro del tablero.
*/
#include <iostream>
#include "tablero.h"
using namespace std;



int main(int argc, char** argv) {
	tablero* ob1;
	int x,y, n, op;
	
	cout << "Digite la posicion inicial del objeto: " << endl;
	cout << "Psicion X: "; cin >> x;
	cout << "Psicion Y: "; cin >> y;

	ob1 = new tablero(x,y);
	
	do{
		cout << "\n\t.:MENU:." << endl;
		cout << "1. Mover arriba" << endl;
		cout << "2. Mover abajo" << endl;
		cout << "3. Mover derecha" << endl;
		cout << "4. Mover izquierda" << endl;
		cout << "5. Salir" << endl;
		cout << "DIGITE UNA OPCION: ";
		cin >> op;
		
		if(op >=1 && op<=4){
			cout << "Cuantas posiciones desea mover: " << endl;
			cin >> n;
		}
		
		switch(op){
			case 1: ob1->moverArriba(n); break;
			case 2: ob1->moverAbajo(n); break;
			case 3: ob1->moverDerecha(n); break;
			case 4: ob1->moverIzquierda(n); break;
			case 5: break;
			default: cout << "Esa opcion no se encuentra disponible" << endl; 
		}
		
		cout << "\nPosicion actual (X,Y): (" << ob1->getX() << "," << ob1->getY() << ")" << endl;
		
	}while(op != 5);

	return 0;
}