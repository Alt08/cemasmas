/*
	-Una matriz preguntado al usuario el numero de filas y columnas
	-Llenarlas de numeros aleatorios
	-Copiar el contenido a otra matriz
	-Mostrar la matriz en pantlla
*/

#include <iostream>
#include <stdlib.h> //Permite generar los numeros aleatorios
#include <time.h>  //Estable el tiempo

using namespace std;

int main(){

	//rand() - Genera los numeros aleatorio 
	//srand() - Proporciona un valor inicial  -> time(NULL)
	int valor, NumeroFilas, NumeroColumnas;
	int matriz[100][100], NuevaMatriz[100][100];

	//Pidiendo numero de columnas y filas
	cout<<"Introduce el numero de filas: ";
	cin>>NumeroFilas;
	cout<<"Introduce el numero de columnas: ";
	cin>>NumeroColumnas;

	srand(time(NULL)); //Genera numeros aleatirios
	//Rellenando la matriz con los numeros aleatorios
	for(int i=0; i<NumeroFilas; i++){
		for(int j=0; j<NumeroColumnas; j++){
			valor = 1+rand()%(100); 
			//Generamos numeros del 1 al 100 y los guardamos en la variable 1
			matriz[i][j] = valor;
		}
	}

	//Copiando datos a otra matriz
		for(int i=0; i<NumeroFilas; i++){
		for(int j=0; j<NumeroColumnas; j++){
			NuevaMatriz[i][j] = matriz[i][j];
		}
	}
	
	//Imprimiendo nueva matriz
			for(int i=0; i<NumeroFilas; i++){
		for(int j=0; j<NumeroColumnas; j++){
			cout<<NuevaMatriz[i][j]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}
