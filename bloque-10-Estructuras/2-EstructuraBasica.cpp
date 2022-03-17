#include <iostream>
using std::cout;
using std::cin;
using std::endl;

// estructura basica
// Forma 2 - declarando variable desde la estructura 
struct persona{
	char nombre[20];
	int edad;
}
// Forma dinamica
	persona1

// Forma estatica
	// persona1 = {"Alejandro", 20},
	// persona2 = {"Juan", 45}
;

int main(){
	// Datos dinamicos
	cout << "Introduce tu nombre: ";
	cin.getline(persona1.nombre, 20, '\n');
	cout << "Introduce tu edad: ";
	cin >> (persona1.edad);

	cout << "\nimprimiendo datos\n";
	cout << "Nombre: " << persona1.nombre << endl;
	cout << "edad: " << persona1.edad;


	// Datos estaticos
	// cout << "Nombre p1: " << persona1.nombre << endl;
	// cout << "Nombre p1: " << persona1.edad << endl;
	// cout << "\nNombre p2: " << persona2.nombre << endl;
	// cout << "Nombre p2: " << persona2.edad << endl;


	return 0;
}
