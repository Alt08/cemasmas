/*
	-Pedir al usuario una cadena de caracteres 
	-Almacenarla en un arreglo y copiar su contenido a otro arreglo
*/

#include <iostream>
#include <string.h> //strcpy y otras mas
using namespace std;

int main(){
	char palabra[50], palabra2[50];
	cout<<"Introduce una frase: ";
	cin.getline(palabra, 50, '\n');
	
	strcpy(palabra2, palabra);//Copiando los datos de palabra a palabra2
	cout<<"Palabra 2: "<<palabra2;
	return 0;
}

