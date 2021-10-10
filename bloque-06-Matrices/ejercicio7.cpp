/*
	-Un programa que determine si una matriz es simetrica o no
	-->Una matriz es simetrica si es cuadrada y si es igual a su matriz
		transpuesta
*/
#include <iostream>
using namespace std;

int main(){
	int matriz[100][100], filas, columnas;
	char bandera = 'f';
	cout<<"Numero de filas: ";
	cin>>filas;
	cout<<"Numero de columnas: ";
	cin>>columnas;
	
	for(int i=0; i<filas; i++){
		for(int j=0; j<columnas; j++){
			cout<<"Introduce un numero: ["<<i<<"]["<<j<<"]: ";
			cin>>matriz[filas][columnas];
		}
		//cout<<"\n";
	}
	
	//Comparando con la filas y columnas
	//if(filas==columnas){
		//cout<<"Es una matriz cuadrada\n";
	//}else{
		//cout<<"No es simetrico";
	//}
	
	//Comparando con la matriz transpuesta y una bandera
	if(filas == columnas){
		for(int i=0; i<filas; i++){
			for(int j=0; j<columnas; j++){
				if(matriz[i][j] == matriz[j][i]){
					bandera = 'v';
				}
			}
		}
	}
	if(bandera == 'v'){
		cout<<"La matriz es cuadrada";
	}else{
		cout<<"la matriz no es cuadrada";
	}
	return 0;
}
	
