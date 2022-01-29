/* 
--------------------ORDENAMIENTO POR SELECCION-----------------
	Requiere O(n^2) operaciones para ordenar una lista
	de n numero. 
	FUNCIONANMIENTO
		1. Buscar el minimo elemento de la lista
		2. Intercambiar con el primer elemento
		3. Buscar el minimo del resto de la lista 
		4. Intercambiar con el segundo
		5. y asi sucesivamente
*/

#include <iostream>
using namespace std;

int main(){
	int numeros[] = {3,2,1,5,4};
	int i,j,aux,min;

	for(i=0; i<5; i++){
		min = i;
		for(j=i; j<5; j++){ //j = i porque comenzara desde la segunda posicion del arreglo
			if(numeros[j] < numeros[min]){
				min = j;
			}
		}
		aux = numeros[i];
		numeros[i] = numeros[min];
		numeros[min] = aux;
	}
	cout << "Orden Ascendente: ";
	for(i=0; i<5; i++){
		cout << numeros[i] <<" ";
	}

	return 0;
}
