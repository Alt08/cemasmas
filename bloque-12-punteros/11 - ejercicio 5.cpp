/*
	Ejercicio 5:
		pedir al usuario n numeros, almacenarlos en un arreglo dinamico
		posteriormente ordenar los numeros en orden ascendente y mostrarlos en pantalla
		Nota: Utilizar cualquier metodo de ordenamiento.
*/

#include <iostream>
using namespace std;

void pedirDatos();
void ordenarArreglo(int *, int);
void mostrarArreglo(int *, int);

int nElementos, *elemento;

int main(){
	pedirDatos();
	ordenarArreglo(elemento, nElementos);
	mostrarArreglo(elemento, nElementos);
	
	delete[] elemento;

	return 0;
}

void pedirDatos(){
	cout << "Digite el numero de elementos del arreglo: ";
	cin >> nElementos;
	
	elemento = new int[nElementos];
	
	for(int i=0; i<nElementos; i++){
		cout << "Digite un numero [" << i << "]: ";
		cin >> *(elemento+i); // Elementos[i]
		
	}
}

void ordenarArreglo(int *elmento, int nElementos){
	int aux;
	
	// Ordenar el arreglo con el metodo burbuja
	for(int i=0; i<nElementos; i++){
		for(int j=0; j<nElementos; j++){
			if(*(elemento+j) > *(elemento+j+1)){
				aux = *(elemento+j);
				*(elemento+j) = *(elemento+j+1);
				*(elemento+j+1) = aux;
			}
		}	
	}
	
}

void mostrarArreglo(int *elemento, int nElemento){
	cout << "\n\nMostrando arreglo ordenado: ";
	for(int i=0; i<nElemento; i++){
		cout << *(elemento+i) << " ";
	}
}