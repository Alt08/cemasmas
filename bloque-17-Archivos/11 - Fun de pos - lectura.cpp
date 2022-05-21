/*
	Funciones de posicionamiento - lectura
		funciona para archivos de texto y binarios
*/

#include <iostream>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <fstream>
using namespace std;

void escribir();
void leer();



int main(){
	escribir();
	leer();
	
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

void leer(){
	ifstream archivo;
	
	archivo.open("posicion.txt", ios::in);
	
	if(archivo.fail()){
		exit(1);
	}
	
	string linea;
	
	archivo.seekg(5); // Muestra el contenido a partir de la linea indicada
	cout << "\nPosicion actual: " << archivo.tellg() << endl;
	
	getline(archivo, linea);
	
	cout << linea << endl;
	
	archivo.close();
	
}


















