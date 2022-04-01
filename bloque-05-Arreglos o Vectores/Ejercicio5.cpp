#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	/* Un programa que lea de la entrada estandar un vector de enteros 
	y determine el mayor elemento del vector */
	
	int numeros[5], mayor=0;
	
	for(int i=0; i<5; i++){
		cout<<"Introduce un numero: ";
		cin>>numeros[i];
		
//		Mayor es igual a 0, se compara con cada elemento del array 
		if(numeros[i] > mayor ){
			/* Cuando mayor tenga el valor mas alto se termina la condicion y asigna ese
			 valor en el arrar o vector obteniendo el mayor*/
			mayor = numeros[i];
		}
	}
	cout<<"Mayor: "<<mayor;
	

	
	
	getch();
	return 0;
}
