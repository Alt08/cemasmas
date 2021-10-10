/*
	EJERCICIO 14:
		Realiza una funcion que tome como parametros un vector de enteros
		y su tamaño 
		e imprima un vector con los elementos impares del vector recivido
*/
#include <iostream>
using namespace std;

void pedirDatos();
void numerosImpares(int vec[], int tam);

int vec[100], tam;

int main(){
	
	pedirDatos();
	numerosImpares(vec, tam);
	
	return 0;
}

void pedirDatos(){
	cout << "Introduce el tamaño del vector: ";
	cin >> tam;
	
	for(int i=0; i<tam; i++){
		cout << i+1 << ".- Introduce un numero: ";
		cin >> vec[i];
	}
}

void numerosImpares(int vec[], int tam){
	for(int i=0; i<tam; i++){
		if(vec[i]%2 == 1){
			cout << vec[i] << " ";
		}
	}
}