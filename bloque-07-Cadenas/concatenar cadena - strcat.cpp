/*
	Añadir o concatenar una cadena con otra - funcion strcat()
*/
#include <iostream>
#include <string.h>
using namespace std;

int main(){
	char cadena1[] = "hola perro";
	char cadena2[] = " como estas";
	char cadena3[30];
	
	strcpy(cadena3, cadena1); //cadena3 = "hola perro"
	strcat(cadena3, cadena2);    //cadena3 = "hola perro " + cadena 2 = "como estas" = hola perro como esta
	cout<<cadena3;
	
	return 0;
}