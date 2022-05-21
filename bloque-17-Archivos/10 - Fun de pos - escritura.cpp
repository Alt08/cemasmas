/*
	Funciones de posicionamiento - escritura
		funciona para archivos de texto y binarios
*/

#include <iostream>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <fstream>
using namespace std;

void escribir();



int main(){
	escribir();

	return 0;
}

void escribir(){
	ofstream archivo;
	
	archivo.open("posicion.txt", ios::out);
	
	if(archivo.fail()){
		exit(1);
	}
	
	// Saber en que posicion se encuentra nuestro cursor en el archivo
	cout << "Posicion actual del cursor: " << archivo.tellp() << endl;
	
	archivo <<  "Hola que tal";
	
	// Posicion en la cual queremos que el cursor seubique y comienze a escribir a partir de ahi
	archivo.seekp(3);
	archivo << "QUe pacho?";
	
	// Saber en que posicion se encuentra nuestro cursor en el archivo
	cout << "Posicion actual del cursor: " << archivo.tellp() << endl;
	
	archivo.close();
}
