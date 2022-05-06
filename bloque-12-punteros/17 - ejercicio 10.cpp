/*
	Ejercicio 10:
		Realice un programa que lea una matriz dinamica 
		de NxM y cree su matriz traspuesta.
		
		La matriz traspuesta es aquella en la que la columna i era la fila
		i de la matriz
		
		1 2 3		1 4 7
		4 5 6  ->	2 5 8
		7 8 9		3 6 9
		
*/
#include <iostream>
#include <stdlib.h> // new y delete
using namespace std;

void pedirDatos();
void mostrarMatriz(int **, int, int);

int **punteroMatriz, nFilas, nCol;

int main(){
	pedirDatos();
	mostrarMatriz(punteroMatriz, nFilas, nCol);
	
	for(int i=0; i<nFilas; i++){
		delete[] punteroMatriz[i];
	}
	
	delete[] punteroMatriz;
	
	return 0;
}

void pedirDatos(){
	cout << "Digite el numero de filas: "; cin >> nFilas;
	cout << "Digite el numero de columnas: "; cin >> nCol;
	
	punteroMatriz = new int*[nFilas];
	for(int i=0; i<nFilas; i++){
		punteroMatriz[i] = new int[nCol];
	}
	
	for(int i=0; i<nFilas; i++){
		for(int j=0; j<nCol; j++){
			cout << "Digite un numero[" << i <<   "][" << j << "]: ";
			cin >> *(*(punteroMatriz+i)+j);
		}
	}
}

void mostrarMatriz(int **punteroMatriz, int nFilas, int nCol){
	cout << "\nImprimiendo la matriz original: " << endl;
	for(int i=0; i<nFilas; i++){
		for(int j=0; j<nCol; j++){
			cout << *(*(punteroMatriz+i)+j) << " ";
		}
		cout << "\n";
	}
	
	cout << "\nImprimiendo la matriz traspuesta: " << endl;
	for(int i=0; i<nFilas; i++){
		for(int j=0; j<nCol; j++){
			cout << *(*(punteroMatriz+j)+i)  << " ";
		}
		cout << "\n";
	}	
}