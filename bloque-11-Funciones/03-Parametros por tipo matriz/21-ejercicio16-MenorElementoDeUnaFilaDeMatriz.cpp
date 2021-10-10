/*
	REALICE UNA FUNCION QUE DADA UNA MATRIZ
	Y UN NUMERO DE FILA DE LA MATRIZ 
	DEVUELVA EL MENOR DE LOS ELEMENTOS ALMACENADOS EN DICHA FILA
*/

#include<iostream>
using namespace std;

void pedirDatos();
int comprabaroMenorElemento(int matriz[][100], int, int);

int matriz[100][100],nFilas, nCol;

int main(){
	pedirDatos();
	cout << "\nEl menor elemento es: " << comprabaroMenorElemento(matriz, nFilas ,nCol);
	
	return 0;
}

void pedirDatos(){
	cout << "Digite el numero de filas: ";
	cin >> nFilas;
	cout << " Digite el numero de columnas: ";
	cin >> nCol;
	
	for(int i=0; i<nFilas; i++){
		for(int j=0; j<nCol; j++){
			cout << "Digite un numero: ["<<i<<"]["<<j<<"]: ";
			cin >> matriz[i][j];
		}
	}
}

int comprabaroMenorElemento(int matriz[][100], int nFilas, int nCol){
	int fila, menor=9999;
	
	cout << "\nDigite un numero de fila para comprobar menor elemento: ";
	cin >> fila;
	
	for(int i=0; i<nFilas; i++){
		for(int j=0; j<nCol; j++){
 			if(i == fila){
 				if(matriz[i][j] < menor ){
 					menor = matriz[i][j];
				 }	
			 }
		}
	}
	
	return menor;
}