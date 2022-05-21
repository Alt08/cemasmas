/*
	Archivo binarios
		puede almacenar cualquier cosa
		En los archivos binarios se utilizar los arreglos de caracteres para evitar problemas
*/


#include <iostream>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <fstream>
using namespace std;

void escribir();
void leer();

struct Registro{
	char nombre[20];
	char apellido[20];
};


int main(){
	escribir();
	leer();
	
	return 0;
}

void escribir(){
	ofstream archivoB;
	
	// Archivos binarios se usa el .dat
	archivoB.open("prueba.dat", ios::out | ios::binary); // Modo escritura
	if(archivoB.fail()){
		cout << "No puede crear el archivo";
		exit(1);
	}
	
	Registro persona;
	
	cout << "Digite su nombre: "; cin.getline(persona.nombre, 20, '\n');
	cout << "Digite su apellido: "; cin.getline(persona.apellido, 20, '\n');
	
	// Escrimos los datos en el archivo binario
	archivoB.write((char *)&persona, sizeof(Registro));
	
	archivoB.close();
	
}

void leer(){
	ifstream archivoB;
	archivoB.open("prueba.dat", ios::in | ios::binary);
	
	if(archivoB.fail()){
		cout << "No se puede abrir el archivo";
		exit(1);
	}
	
	Registro persona;
	
	archivoB.read((char *)&persona, sizeof(Registro));
	
	cout << "\n\nMostrando los datos leidos" << endl;
	cout << "Nombre: " << persona.nombre << endl;
	cout << "Apellido: " << persona.apellido << endl;
	
	archivoB.close();

}









