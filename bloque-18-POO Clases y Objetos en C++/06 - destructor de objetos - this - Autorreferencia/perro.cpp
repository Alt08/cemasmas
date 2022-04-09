#include <iostream>
#include "perro.h"

using namespace std;

void perro::mostrarDatos(){
	cout << "Nombre: " << nombre << endl;
	cout << "Raza: " << raza << endl;
}

void perro::jugar(){
	cout << "El perro " << nombre << " esta jugando " << endl;
}