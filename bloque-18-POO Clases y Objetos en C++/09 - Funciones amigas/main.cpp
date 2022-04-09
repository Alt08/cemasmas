// Funciones amigas
#include <iostream>
#include "fAmigas.h"

using namespace std;

// Funcion para modificar los valores de ataque y defensa de un objeto personaje
void modificar(personaje &p, int ataques, int defensas){
	p.ataque  = ataques;
	p.defensa = defensas;
}

int main(int argc, char** argv) {
	personaje* principal = new personaje(100, 90);
	
	principal->mostrarDatos();
	
	// Haciendo uso de la funcion modificar para comrobar que la funcion amiga funciona
	modificar(*principal, 60, 50);
	principal->mostrarDatos();
	
	return 0;
}