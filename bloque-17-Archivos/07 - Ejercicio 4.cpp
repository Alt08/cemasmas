/*
	Ejercicio 4:
		Un programa para guardar numeros telefonicos que muestre un menu con las siguientes opciones
			1. Crear (nombre, apellidos, telefono)
			2. Agregar mas contactos (nombre, apellidos, telefono)
			3. Visualizar contactos existentes
*/
#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <fstream>

using namespace std;

void menu();
void crearContacto();
void agregarContacto();
void visualizarContactos();

struct Datos{
	string nombre, apellido, telefono;
} datos;

int main(){
	menu();
	
	return 0;
}

void menu(){
	int opcion;
	
	do{
		cout << "\tMENU" << endl;
		cout << "1. Crear (nombre, apellidos, telefono)" << endl;
		cout << "2. Agregar mas contactos (nombre, apellidos, telefono)" << endl;
		cout << "3. Visualizar contactos existentes" << endl;
		cout << "4. Salir" << endl;
		
		cout << "\nOpcion: ";
		cin >> opcion;
		
		switch(opcion){
			case 1: crearContacto();
			cout << endl;
			system("pause");
			break;
			
			case 2: agregarContacto();
				cout << endl;
				system("pause");
			break;	
			
			case 3: visualizarContactos();
				cout << endl;
				system("pause");
			break;	
		}
		system("cls");
	}while(opcion != 4);
}

void crearContacto(){
	ofstream archivo;
	char respuesta = 's';
	
	archivo.open("AgendaTelefonica.txt", ios::out);
	
	if(archivo.fail()){
		cout << "Error";
		exit(1);
	}
	
	archivo << "\tAgenda telefonica" << endl;
	
	do{
		fflush(stdin);
		cout << "\nDigite su nombre: ";
		getline(cin, datos.nombre);
		cout << "Digite su apellido: ";
		getline(cin, datos.apellido);
		cout << "Digite su telefono: ";
		getline(cin, datos.telefono);
		
		archivo << "\nNombre: " << datos.nombre << endl;
		archivo << "Apellido: " << datos.apellido << endl;
		archivo << "Telefono: " << datos.telefono << endl;

		cout << "\nDesea agregar otro contacto: ";
		cin >> respuesta;
	}while( respuesta == 's' || respuesta == 'S');
	
	archivo.close();
}

void agregarContacto(){
	ofstream archivo;
	char respuesta = 's';
	
	archivo.open("AgendaTelefonica.txt", ios::app);
	
	if(archivo.fail()){
		cout << "Error";
		exit(1);
	}
	
	do{
		fflush(stdin);
		cout << "\nDigite su nombre: ";
		getline(cin, datos.nombre);
		cout << "Digite su apellido: ";
		getline(cin, datos.apellido);
		cout << "Digite su telefono: ";
		getline(cin, datos.telefono);
		
		archivo << "\nNombre: " << datos.nombre << endl;
		archivo << "Apellido: " << datos.apellido << endl;
		archivo << "Telefono: " << datos.telefono << endl;

		cout << "\nDesea agregar otro contacto: ";
		cin >> respuesta;
	}while( respuesta == 's' || respuesta == 'S');
	
	archivo.close();
}

void visualizarContactos(){
	ifstream archivo;
	string texto;
	
	archivo.open("AgendaTelefonica.txt", ios::in); // Abrimos el archivo en modo lectura
	
	if(archivo.fail()){
		cout << "Error";
		exit(1);
	}
	
	while(!archivo.eof()){ // Mientras no se el final del archivo
		getline(archivo, texto);
		cout << texto << endl;
	}
	
	archivo.close();
}











