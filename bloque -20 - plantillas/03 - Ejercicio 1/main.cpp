/*
	Ejercicio 1:
	Definir una plantilla dentro de un archivo de cabecera llamada 
		-> intercambio.h
	que pueda intercambiar el valor de dos elementos del mismo tipo
	
*/
#include <iostream>
#include "intercambio.h"
using std::cout;
using std::cin;
using std::endl;


int main(int argc, char** argv){
	float num1, num2;
	
	cout <<  "Digite el valor de numero 1: "; cin >> num1;
	cout <<  "Digite el valor de numero 2: "; cin >> num2;
	
	// Intercambiando el valor
	intercambio(num1, num2);
	
	cout << "Los nuevos valores son: " << endl;
	cout << "Numero 1: " << num1 << endl;
	cout << "Numero 2: " << num2 << endl;
	
	return 0;
}