/*
	Realice un programa que pida al usuario el nombre de un archivo 
	de texto y permita almacenar al usuario tantas frase 
	como el desee
*/

#include <iostream>
#include <stdlib.h> // exit(1)
#include <fstream> // Para el manejo de archivos
using namespace std;

void texto();

int main(){
	texto();
		
	return 0;
}

void texto(){
	ofstream miArchivo;
	string nombreA, datos;
	char op = 's';
	
	cout << "Digite el nombre del archivo: ";
	getline(cin, nombreA);
	
	miArchivo.open(nombreA.c_str(), ios::out);
	if(miArchivo.fail()){
		cout << "Error";
		exit(1);
	}
	
	do{
		fflush(stdin);
		cout << "Digite el contenido del archivo: ";
		getline(cin, datos);
		miArchivo << datos << endl;
		
		cout << "Quieres introducir mas frase? s/n: ";
		cin >> op;
	}while(op == 's' || op == 'S');
	
	
	miArchivo.close();
	
	
}