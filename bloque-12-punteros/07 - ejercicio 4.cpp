/*
	Ejercicio 4:
		Realizar un arreglo con n numeros,
		posteriormente utilizando punteros 
		determinar el menor elemento del vector
*/

#include <iostream>
using namespace std;

int main(){
	int nElementos, numeros[100], *dirNumeros, menor = 999999;
	
	cout << "Digite el numero de elementos: "; cin >> nElementos;
	
	
	
	for(int i=0; i<nElementos; i++){
		cout << "Digite un numero [" << i << "]: "; cin >> numeros[i];
	}
	
	dirNumeros = numeros; // Posicion de memoria comienza numeros
	
	for(int i=0; i<nElementos; i++){
		if(*dirNumeros < menor){
			menor = *dirNumeros;
		}
		dirNumeros++;
	}
	
	cout << "\n El menor elemento es: " << menor << endl;

	return 0;
}
