/*
	Ejercicio 5:
		Crear un archivo binario donde almacenar un Registro que contenga
		las pulsaciones de un atleta en una determinada hora, el programa debe tener un menu 
		las siguientes acciones
	
		1. Comenza a digitar las pulsaciones
		2. Añadir mas pulsaciones
		3. Mostrar las pulsaciones registradas
		4. Salir
*/

#include <iostream>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <fstream>
using namespace std;

void menu();
void escribirPulsaciones();
void aniadirPulsaciones();
void mostrarPulsaciones();

struct Registro{
	float hora;
	int pulsaciones;
};

int main(){
	menu();

	return 0;
}

void menu(){
	int opcion;
	
	do{
		cout << " \t\t.:MENU:." << endl;
		cout << " 1. Comenza a digitar las pulsaciones" << endl;
		cout << " 2. Añadir mas pulsaciones" << endl;
		cout << " 3. Mostrar las pulsaciones registradas" << endl;
		cout << " 4. Salir" << endl;

		cout << "Digite una opcion: ";
		cin >> opcion;
		
		switch(opcion){
			case 1: escribirPulsaciones();
				break;
			case 2: aniadirPulsaciones();
				break;
			case 3: mostrarPulsaciones();
				break;
			case 4: break;
			default: cout << "Error..." << endl;
		}
		
		system("pause");
		system("cls");
		
	}while(opcion != 4);
}



void escribirPulsaciones(){
	ofstream archivoB;
	
	// Archivos binarios se usa el .dat
	archivoB.open("pulsaciones.dat", ios::out | ios::binary); // Modo escritura
	if(archivoB.fail()){
		cout << "No puede crear el archivo";
		exit(1);
	}
	
	Registro pulso;
	
	cout << "Digite la hora: "; cin >> pulso.hora;
	cout << "Digite la cantidad de pulsaciones: "; cin >> pulso.pulsaciones;
	
	// Escrimos los datos en el archivo binario
	archivoB.write((char *)&pulso, sizeof(Registro));
	
	archivoB.close();
}

void aniadirPulsaciones(){
	ofstream archivoB;
	
	// Archivos binarios se usa el .dat
	archivoB.open("pulsaciones.dat", ios::app | ios::binary); // Modo escritura
	if(archivoB.fail()){
		cout << "No puede crear el archivo";
		exit(1);
	}
	
	Registro pulso;
	
	cout << "\nDigite la hora: "; cin >> pulso.hora;
	cout << "Digite la cantidad de pulsaciones: "; cin >> pulso.pulsaciones;
	
	// Escrimos los datos en el archivo binario
	archivoB.write((char *)&pulso, sizeof(Registro));
	
	archivoB.close();
}

void mostrarPulsaciones(){
	ifstream archivoB;
	
	// Archivos binarios se usa el .dat
	archivoB.open("pulsaciones.dat", ios::in | ios::binary); // Modo escritura

	if(archivoB.fail()){
		cout << "No puede crear el archivo";
		exit(1);
	}
	
	Registro pulso;
	
	while(!archivoB.eof()){
		archivoB.read((char *)&pulso, sizeof(Registro));
		
		if(!archivoB.eof()){
			cout << "\nHora: " << pulso.hora << endl;
			cout << "Pulsaciones: " << pulso.pulsaciones << endl;
		}
	}

	archivoB.close();
}








