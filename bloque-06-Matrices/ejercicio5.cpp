/*
	-Un programa que lea una matriz de 3x3
	-Cree su matriz traspuesta
	-La matriz traspuesta es aquella en la que columna i era la fila i
	 de la matriz original
	
	|1 2 3|     |1 4 7|
	|4 5 6| --> |2 5 8|
	|7 8 9|     |3 6 9|
*/

#include <iostream>
using namespace std;

int main(){
	int matrizTras[3][3];
	
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cout<<"Introduce los numeros: ";
			cin>>matrizTras[i][j];
		}
	}
	
	cout<<"\n matriz original\n";
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cout<<matrizTras[i][j]<<" ";
		}
		cout<<"\n";
	}
	
	cout<<"\nLa matriz traspuesta\n";
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cout<<matrizTras[j][i]<<" ";
		}
		cout<<"\n";
	}
	
	return 0;
}
