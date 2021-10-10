/*
	-Convertir dos cadenas de minisculas a MAYUSCULAS
	-Compararlas
	-Y decir si son iguales o no
*/
#include <iostream>
#include<string.h>
using namespace std;

int main(){
	//Declarando las variables con sus palabras
	char cad1[] = {"Hola"};
	char cad2[] = {"hola"};
	
	//Comvirtiendo ambas cadenas a mayusculas
	strupr(cad1);
	strupr(cad2);
	
	//Imprimiendo las cadenas convertidas en mayusculas
	cout<<cad1<<endl<<cad2;
	
	//Comparando si ambas cadenas son iguales
	if(strcmp(cad1, cad2)==0){
		cout<<"\nSon iguales";
	}
	
	return 0;
}
