/*
	EJERCICIO 13
		Realiza una funcion que tome como parametro un vector de numeros
		y su tamaño y cambie el signo d elos elementos del vector.
*/

#include <iostream>
using namespace std;

void pedirDatos();
void cambiarSigno(int vec[], int);
void mostrarVector(int vec[], int);
int vec[100], tam;

int main(){
	
	pedirDatos();
	cambiarSigno(vec, tam);
	mostrarVector(vec, tam);
	
	return 0;
}

void pedirDatos(){
	cout << "Digite el tamaño del vector: ";
	cin >> tam;
	
	for(int i=0; i<tam; i++){
		cout << i+1 <<". Digite un numero: ";
		cin >> vec[i];
	}
}

void cambiarSigno(int vec[], int tam){
	for(int i=0; i<tam; i++){
		vec[i] *= -1;
	}
}

void mostrarVector(int vec[], int tam){
	cout << "Elemetos con signo cambiado" << endl;
	for(int i=0; i<tam; i++){
		cout << vec[i] << " ";
	}
}
