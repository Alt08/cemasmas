/*
	-Un programa que lea 5 numero en un arreglo
	-Los copie otro arreglo
	-Multiplicarlos por 2
	-Mostrar el segundo arreglo
*/

#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	int numeros[5], ValNew[5], elementos, mul=0;
	
	//Pedimos los elementos del vector
	for(int i=0; i<5; i++){
		cout<<"Introduce un numero: ";
		cin>>numeros[i];
//		cout<<"Valores introducidos: "<<numeros[i]<<endl;
	}

	//Copiando los datos y multiplicando * 2
	for(int i=0; i<5; i++){
		ValNew[i] = numeros[i]*2;
	}

	
	cout<<"*************************************************************"<<endl;
	for(int i=0; i<5; i++){
		cout<<ValNew[i]<<" ";
	}

	
	
	getch();
	return 0;
}