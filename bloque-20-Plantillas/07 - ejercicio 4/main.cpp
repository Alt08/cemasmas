/*
	Defina una plantilla para la clase Arreglo, la cual podra definir valores de
	distintos tipos, el cual se definira en el momento de la instaancia, el programa 
	debera tener un menu con las siguientes opciones:

	1. Agregar un nueo elemento al arreglo
	2. Comprobar el espacio en el arreglo
	3. Ver arreglo
	4. Vaciar Arreglo
	5. Salir
*/

#include <iostream>
#include <stdlib.h>
#include "arreglo.h"
using namespace std;

void opciones(){ 
	cout << "\t.:MENU:." << endl;
	cout << "1. Agregar un nueo elemento al arreglo" << endl;
	cout << "2. Comprobar el espacio en el arreglo" << endl;
	cout << "3. Ver arreglo" << endl;
	cout << "4. Vaciar Arreglo" << endl;
	cout << "5. Salir" << endl;
	cout << " Digite una opcion de menu: " << endl;
}

int main(int argc, char** argv) {
	arreglo <int> arreglo1(5);
	int opcion;
	int elemento;
	do{
		opciones();
		cin >> opcion;

		switch(opcion){
			case 1: 
				if(arreglo1.arregloLleno()){
					cout << "\nEl arreglo esta lleno";
				}else{
					cout << "\nDigite un elemento a agregar: ";
					cin >> elemento;
					arreglo1.agregar(elemento);
				}
				break;
			case 2:
				if(arreglo1.arregloLleno()){
					cout << "El arreglo esta lleno" << endl;
				}else{
					cout << "El arreglo aun no esta lleno" << endl;
				}
				break;
			case 3:
				cout << "Los elementos del arreglo son: " << endl;
				arreglo1.mostrarArreglo();
				break;
			case 4:
				cout << "Vaciando arreglo... " << endl;
				arreglo1.vaciarArreglo();
				break;
			case 5: break;
			default: cout << "Se equivoco de opcion de menu" << endl;
		}
		cout << endl;
		system("pause");
		system("cls");
	}while(opcion != 5);

	return 0;
}