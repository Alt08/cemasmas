/*
	Matrices dinamicas
	
	Ejemplo: Rellenar una matriz de NxM y mostrar su contenido
		**punteroMatriz ->  *punteroFila -> [int] [int] [int]
							*punteroFila -> [int] [int] [int]
							*punteroFila -> [int] [int] [int]
*/

#include <iostream>
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
	
	cout << "\nDigitando elementos de la matriz: ";
	for(int i=0; i<nFilas; i++){
		for(int j=0; j<nCol; j++){
			cout << "Digite un numero[" << i << "][" << j << "]: ";
			cin >> *(*(punteroMatriz+i)+j);
		}
	}
}

void mostrarMatriz(int **punteroMatriz, int nFilas, int nCol){
	cout << "\n\nImprimiendo matriz:\n";
	for(int i=0; i<nFilas; i++){
		for(int j=0; j<nCol; j++){
			cout << *(*(punteroMatriz+i)+j) << " ";
		}
		cout << "\n";
	}
}
