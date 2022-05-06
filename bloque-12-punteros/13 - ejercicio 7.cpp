/*
	Ejerciico 8:
		Pedir su nombre al usuario y devolver el numero de vocales que hay.
		NOTA: Recuerda que debes utilizar punteros
*/

#include <iostream>
#include <string.h>

using namespace std;

void pedirDatos();
int contandoVocales(char *);

char nombreUsuario[30];

int main(){
	pedirDatos();
	cout << "\nEl numero de vocales del nombre es: " << contandoVocales(nombreUsuario) << endl;
	
//	nombreUsuario = &nombreUsuario[0];

	return 0;
}

void pedirDatos(){
	cout << "Digite su nombre: ";
	cin.getline(nombreUsuario, 30, '\n');
	
	strupr(nombreUsuario);
}

int contandoVocales(char *nombre){
	int contador = 0;
	
	while(*nombre){
		switch(*nombre){
			case 'A':
			case 'E':
			case 'I':
			case 'O':
			case 'U':
			contador++;
		}
		nombre++;
	}
	return contador;
}