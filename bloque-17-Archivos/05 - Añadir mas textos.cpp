/*
	Añadir texto al final de un archivo existente
*/
#include <iostream>
#include <stdlib.h> // exit(1)
#include <fstream> // Para el manejo de archivos

using namespace std;

void aniadir();

int main(){
	aniadir();	

	return 0;
}

void aniadir(){
	ofstream archivo;
	string texto;
	
	archivo.open("jola.txt", ios::app); // Abriendo el archivo en modo editar
	
	if(archivo.fail()){
		cout << "No se puedo abrir el archivo";
		exit(1);
	}
	
	cout << "Digite el texto a añadir: ";
	getline(cin, texto);
	
	archivo << texto << endl;
//	archivo << "Hola que tal";
	
	archivo.close();
	
}

