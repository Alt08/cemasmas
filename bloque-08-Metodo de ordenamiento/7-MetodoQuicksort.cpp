#include <iostream>
using namespace std;
/*
	Se basa en la division de la lista en particiones a ordenar.
	Aplica la tecnica divide y venceras.
	
	-----------Pasos
	1. Seleccionar el elemento central de al como pivote.
	2.Dividir los elementos restantes en particiones izquierda y derecha
		de modo que ningun elemento a la izquierda tenga una clave mayor 
		que el pivote y que ningun elemento a la derecha tenga una clave 
		mas pequela que la del pivote.
	3. Ordenar la particion izquierda utilizando quicksort recursivamente
	4. Ordenar la particion derecha utilizando quicksort recursivamente
	5. La solucion es particion izquierda seguida por el pivote y la particion derecha

	Ejemplo: 
	
	8,3,6,4,2,5,7,1
	
	central = (primero + ultimo)/2
	central = 3
	
	pivote = a[central]
	pivote = 4
*/

void intercambio(float &x, float &y){
	float aux;
	
	aux = x;
	x = y;
	y = aux;
}

//Definicion de la funcion
void quicksort(float a[], int primero, int ultimo){
	int i, j, central;
	float pivote;
	
	central = (primero+ultimo)/2;
	pivote = a[central];
	i = primero;
	j = ultimo;
	
	do{
		while(a[i] < pivote) i++;
		while(a[j] > pivote) j--;
		
		if(i <= j){
			intercambio(a[i], a[j]);
			i++;
			j--;
		}
	}while(i <= j);
	
	if(primero < j){
		quicksort(a, primero,j); //Ordenamos la sublista izquierda
	}

	if( i < ultimo ){
		quicksort(a, i, ultimo); //Ordenamos la sublista derecha
	}
}

int main(){

	float arreglo[] = {9,6,4,8,3};

	quicksort(arreglo, 0, 4);

	cout << "arreglo" << endl;

	for(int i=0; i<5; i++){
		cout << arreglo[i] << "|";
	}

	return 0;
}
