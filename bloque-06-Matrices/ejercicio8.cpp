/*
	Un programa que calcule la suma de 2 matrices cuadradas de 3x3
*/

#include <iostream>

using namespace std;

int main(){
	//Datos de la primera matriz
	int matriz1[3][3] = {
						 {1,2,3},
						 {4,5,6},
						 {7,8,9}
						};
	//Datos de la segunda matriz
	int matriz2[3][3] = {
						 {2,2,2},
						 {2,2,2},
						 {2,2,2}
						};
	
	int MatrizMul[3][3];
	//Recorriendo la dos matrices y sumando su contenido
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			MatrizMul[i][j] = matriz1[i][j] * matriz2[i][j];
		}
	}
	//Recorriendo la matriz suma y mostrando los resultados
	cout<<"Resultado de la suma de matrices\n";
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cout<<MatrizMul[i][j]<<" ";
		}
		cout<<"\n";
	}
	
	return 0;
}

