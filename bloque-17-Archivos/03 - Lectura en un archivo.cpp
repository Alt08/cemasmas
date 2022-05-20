/*
	lectura de un archivo
*/

#include <iostream>
#include <stdlib.h> // exit(1)
#include <fstream> // Para el manejo de archivos
using namespace std;

void lectura();


int main(){
	lectura();

	return 0;
}

void lectura(){
	ifstream miArchivo; // lectura de archivo
	string texto;
	
	miArchivo.open("datos.txt", ios::in); // Abriendo el archivo en modo lectura
	
	if(miArchivo.fail()){
		cout << "error";
		exit(1);
	}
	
	while(!miArchivo.eof()){ // mientras no sea el final del archivo
		getline(miArchivo, texto); // copiando contenido del archivo a la variable sting
		cout << texto;
	}
	
	miArchivo.close(); // Cerramos el archivo
}