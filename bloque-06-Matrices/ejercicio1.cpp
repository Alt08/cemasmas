/*
	-Un programa para rellenar una matriz pidiendo al usuario el numero de fila y columnas
	-Posteriormente mostrar la matriz
*/

#include <iostream>
using namespace std;

int main(){
	
	int matriz[100][100];
	int CantidadFilas;
	int CantidadColumna;
	
	cout<<"Introduce la cantida de filas: ";
	cin>>CantidadFilas;
	cout<<"Introduce la cantidad de columnas: ";
	cin>>CantidadColumna;
	
	//Guardando datos en la matriz
	for(int  i=0; i<CantidadFilas; i++){
		for(int  j=0; j<CantidadColumna; j++){
			cout<<"Digite un numero ["<<i<<"]["<<j<<"]: ";
			cin>>matriz[i][j];
		}
	}
	
	//Recorriendo los datos de la matriz
	for(int  i=0; i<CantidadFilas; i++){
		for(int  j=0; j<CantidadColumna; j++){
			cout<<matriz[i][j];
		}
		cout<<"\n";
	}
	
	return 0;
}
