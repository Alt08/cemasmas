/*
	Ejercicio 8:
		Pedir una cadena de caracteres (string) al usuario oe indicar cuantas
		veces aparece una vocal en la cadena de caracteres;
		NOTA: usar punteros
*/
#include <iostream>
#include <string.h>
using namespace std;

void pedirDatos();
void contandoVocales(char *);

char palabraUsuario[50];

int main(){
	pedirDatos();
	contandoVocales(palabraUsuario);

	return 0;
}

void pedirDatos(){
	cout << "Digite una palabra o frase: ";
	cin.getline(palabraUsuario, 50, '\n');
	
	strupr(palabraUsuario);
}

void contandoVocales(char *palabra){
	int contA = 0, contE = 0, contI = 0, contO = 0, contU = 0;
	
	while(*palabra){
		switch(*palabra){
			case 'A': contA++; break;
			case 'E': contE++; break;
			case 'I': contI++; break;
			case 'O': contO++; break;
			case 'U': contU++; break;
		}
		palabra++;
	}
	cout << "\n\nNumero de veces de la vocal A: " << contA << endl;
	cout << "Numero de veces de la vocal E: " << contE << endl;
	cout << "Numero de veces de la vocal I: " << contI << endl;
	cout << "Numero de veces de la vocal O: " << contO << endl;
	cout << "Numero de veces de la vocal U: " << contU  << endl;
}