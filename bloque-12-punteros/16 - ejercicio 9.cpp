/*
	Ejercicio 9:
		Realiace un programa que calcule la sua de dos matrices dinamicas
*/
#include <iostream>
#include <stdlib.h> // new y delete
using namespace std;

void pedirDatos();
void sumarMatrices(int **, int **, int, int);
void sumarMatricesResultado(int **, int, int);

int **punteroMatriz1, **punteroMatriz2, nFilas, nCol;

int main(){
	pedirDatos();
	sumarMatrices(punteroMatriz1, punteroMatriz2, nFilas, nCol);
	sumarMatricesResultado(punteroMatriz1, nFilas, nCol);
	
	// Matriz 2
	for(int i=0; i<nFilas; i++){
		delete[] punteroMatriz2[i];
	}
	delete[] punteroMatriz2;
	
	// Matriz 1
	for(int i=0; i<nFilas; i++){
		delete[] punteroMatriz1[i];
	}
	delete[] punteroMatriz1;
	
	return 0;
}

void pedirDatos(){
	cout << "Digite el numero de filas: "; cin >> nFilas;
	cout << "Digite el numero de columnas: "; cin >> nCol;
	
	punteroMatriz1 = new int*[nFilas];
	for(int i=0; i<nFilas; i++){
		punteroMatriz1[i] = new int[nCol];
	}
	
	cout << "\nDigitando elementos de la primera matriz: " << endl;
	for(int i=0; i<nFilas; i++){
		for(int j=0; j<nCol; j++){
			cout << "Digite un numero[" << i << "][" << j << "]: ";
			cin >> *(*(punteroMatriz1+i)+j);
		}
	}
	
	// MATRIZ 2
	punteroMatriz2 = new int*[nFilas];
	for(int i=0; i<nFilas; i++){
		punteroMatriz2[i] = new int[nCol];
	}
	
	cout << "\nDigitando elementos de la primera matriz: " << endl;
	for(int i=0; i<nFilas; i++){
		for(int j=0; j<nCol; j++){
			cout << "Digite un numero[" << i << "][" << j << "]: ";
			cin >> *(*(punteroMatriz2+i)+j);
		}
	}
}

void sumarMatrices(int **punteroMatriz1, int **punteroMatriz2, int nFilas, int nCol){
	for(int i=0; i<nFilas; i++){
		for(int j=0; j<nCol; j++){
			*(*(punteroMatriz1+i)+j) += *(*(punteroMatriz2+i)+j);
		}
	}
}

void sumarMatricesResultado(int **punteroMatriz1, int nFilas, int nCol){
	cout << "\nLa suma de las 2 matrices es: \n";
	for(int i=0; i<nFilas; i++){
		for(int j=0; j<nCol; j++){
			cout << *(*(punteroMatriz1+i)+j) << " ";
		}
		cout << "\n";
	}
}