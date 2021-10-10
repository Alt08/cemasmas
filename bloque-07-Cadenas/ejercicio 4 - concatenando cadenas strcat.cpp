/*
	-Crear una cadena que tenga la siguiente frase "Hola que tal"
	-Crear otra cadena para preguntar el nombre del usuario
	-Añadir el nombre al final de la primera cadena
	-Mostras en pantalla
*/

#include <iostream>
#include <string.h>
using namespace std;

int main(){
	char cad1[] = "Hola que tal ";
	char cad2[20];
	
	cout<<"Introduce tu nombre, usuario: ";
	cin.getline(cad2, 20, '\n');
	strcat(cad1, cad2);
	
	cout<<cad1<<endl;
	
	return 0;
}