/*
	Realice un programa qur pida al usuario el nombre 
	o ubicacion de un archivo y lea su contenido
*/

#include <iostream>
#include <stdlib.h> // exit(1)
#include <fstream> // Para el manejo de archivos
using namespace std;

void usuario();

int main(){
	usuario();

	return 0;
}

void usuario(){
	ifstream archivo;
	string nombreA, contenidoA;
	
	cout << "Digite el nombre o la ubicacion del archivo: "; // Pedimos la ubicacion o el nombre del archivo
	getline(cin, nombreA); // Guardamos el datos en nombreA
	
	archivo.open(nombreA.c_str(), ios::in); // Abrimos el archivo en modo lectura
	
	if(archivo.fail()){ // comprobramos si existe algun problema
		cout << "error";
		exit(1);
	}
	
	while(!archivo.eof()){ // Mientras no sea el final del archivo
		getline(archivo, contenidoA); // copiando contenido del archivo a la variable sting
		cout << contenidoA;
	}
	
	archivo.close(); // Cerranis ek archivo
	
}