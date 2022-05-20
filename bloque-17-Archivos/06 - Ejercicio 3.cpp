/*
	Realice un programa que pida al usuario el nombre o ubicacion
	de un archivo y agregue todo el texto que el usuario 
	requiera
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
	ofstream archivo;
	string nombreA, contenidoA;
	char op = 's';
	
	cout << "Digite el nombre o la ubicacion del archivo: "; getline(cin, nombreA);
	
	archivo.open(nombreA.c_str(), ios::app);
	
	if(archivo.fail()){
		cout << "error";
		exit(1);
	}
	do{
		fflush(stdin);
		cout << "Introducaz una frase: ";
		getline(cin, contenidoA);
		
		archivo << contenidoA << endl;
		
		cout << "Quieres digitar otra frase: (s/n)";
		cin >> op;
	}while(op == 's');
	
	archivo.close();
	
}
