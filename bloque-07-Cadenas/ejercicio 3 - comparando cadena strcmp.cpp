/*
	-Pedir al usuario que digite dos cadenas de caracteres
	-Indicar si ambas cadenas son iguales
	-En caso contrario contrario indicar cual es mayor alfabeticamente
*/

#include <iostream>
#include <string.h>
using namespace std;

int main(){
	//Declaramos las cadenas con 20 espacios
	char cadena1[20];
	char cadena2[20];
	//Pedimos las frases al usuario
	cout<<"Introduce la primera frase: ";
	cin.getline(cadena1, 20, '\n');
	cout<<"Introduce la segunda frase: ";
	cin.getline(cadena2, 20, '\n');
	
	if(strcmp(cadena1, cadena2)==0){
		cout<<"Las cadenas son iguales";
	}else if(strcmp(cadena1, cadena2)<0){
			cout<<cadena2<<" Es mayor alfabeticamente";
	}else{
		cout<<cadena1<<" Es mayor alfabeticamente";
	}
	
	
	
	
	
	return 0;
}





