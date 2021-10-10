/*
	Un program que defina una matriz de 3x3
	Escriba un ciclo para que muestra la diagonal de la matriz
*/

#include <iostream>
using namespace std;

int main(){
	int matriz[3][3]={
							{1,2,3},
							{4,5,6},
							{7,8,9}
						};
	
	//Mostrando matriz inicial
	cout<<"Matriz principal"<<endl;
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cout<<matriz[i][j]<<" ";
		}
		cout<<"\n";
	}
	
	//Mostrando la diagonal principal
	cout<<"---Diagonal---"<<endl;
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			if(i==j){
				cout<<matriz[i][j];
			}
		}
	}
	return 0;
}
