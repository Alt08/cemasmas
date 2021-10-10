/*
	Una matriz de tipo entera de 2*2
	Llenarla de numeros
	Copiar todo su contenido haci otra matriz
*/

#include <iostream>
using namespace std;

int main(){
	int matriz[2][2], NuevaMatriz[2][2];
	
	//Pidiendo datos y guardandolos en matriz
	for(int i=0; i<2; i++){
		for(int j=0; j<2; j++){
			cout<<"Numero"<<"["<<i<<"]"<<"["<<j<<"]: ";
			cin>>matriz[i][j];
		}
	}
	
	//Mostrando la matriz
	for(int i=0; i<2; i++){
		for(int j=0; j<2; j++){
			cout<<matriz[i][j];
		}
		cout<<"\n";
	}
	
	//cout<<"Copiando a la nueva matriz\n";
	for(int i=0; i<2; i++){
		for(int j=0; j<2; j++){
			NuevaMatriz[i][j] = matriz[i][j];
		}
		cout<<"\n";
	}
	
	cout<<"Mostrando a la nueva matriz\n";
	for(int i=0; i<2; i++){
		for(int j=0; j<2; j++){
			cout<<NuevaMatriz[i][j];
		}
		cout<<"\n";
	}

	return 0;
}
