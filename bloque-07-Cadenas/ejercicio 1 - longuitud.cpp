/*
	-Un programa que pida al usuario una cadena de caracteres
	-Verificar la longuitud de la cadena 
	-Si supera los 10 caracteres mostrar en pantalla
	-si es <10 no mostrar
*/

#include <iostream>
#include <string.h>
using namespace std;

int main(){
	//Declarando la cadena vacia
	char cadena[50];
	int longuitud = 0;

	//pidiendo una cadena
	cout<<"Introduce una frase: ";
	cin.getline(cadena, 50, '\n');
	
	//forma de  miguel
	if(strlen(cadena) > 10){
		cout<<"Cadena: "<<cadena<<endl;
	}
	

/* //------------------------MI FORMAR, PERO CON MAS CODIGO----------------------------
	//Obteniendo la loguigud de la cadena
	longuitud = strlen(cadena);
	cout<<"La longuitud es: "<<longuitud<<endl;
	if(longuitud > 10){
		//imprimiendo la cadena si la loguitud es mayor a 10
		cout<<"Cadena: "<<cadena<<endl;		
	}
*/	
	return 0;
}
