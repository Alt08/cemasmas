/*
	Definir dos plantilla de funcion dentro de un archivo de cabecera llamado
		-> ordenar.h
	que puedan ordenar tanto ascendente como descendente un arreglo de N elementos, 
	recuerde que puede utilizar la plantilla intercambiar del ejercicio anterior
*/

#include <iostream>
#include "ordenar.h"

using std::cout;
using std::cin;
using std::endl;

template <typename T>
void pedirDatos(T *arreglo, int n){
	for(int i=0; i<n; i++){
		cout << "Digite un elemento[" << i << "]: ";
		cin >> arreglo[i];
	}
}

template <typename T>
void mostrarArreglo(T *arreglo, int n){
	for(int i=0; i<n; i++){
		cout << "Elemento[" << i << "]: " << arreglo[i] << endl;
	}
}

int main(int argc, char** argv) {
	int nElementos;

	cout << "Digite la cantidad de elementos del arreglo: ";
	cin >> nElementos;

	int *elementos = new int[nElementos];

	cout << "\nPidiendo los elementos del arreglo: " << endl;
	pedirDatos(elementos, nElementos);

	// Ordenar arreglo ascendendemente
	ordenarAscendente(elementos, nElementos);
	cout << "\nOrdenar arreglo ascendendemente" << endl;
	mostrarArreglo(elementos, nElementos);

	// Ordenar arreglo descendendemente
	ordenarDescendente(elementos, nElementos);
	cout << "\nOrdenar arreglo descendendemente" << endl;
	mostrarArreglo(elementos, nElementos);

	delete[] elementos;
	return 0;
}