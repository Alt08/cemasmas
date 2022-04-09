#include <iostream>
#include "alumno.h"
using namespace std;

int main(int argc, char** argv) {
	// Creacion de arreglos de objetos
	//	Forma 1 - estaticos
	alumno alumnos[4]; // Creacion de un arreglo de objetos estaticos

	//	Forma 2 - dinamicos
	alumno* alumno2 = new alumno[3]; // Creacion de un arreglo de objetos dinamicos

	for(int i=0; i<3; i++){
		//Forma dinamica
		(alumno2+i)->pedirDatos();
		cout << endl;
		
		// Forma estatica
		// alumnosDinamicos[i].mostrarDatos();
	}
	
	cout << "Mostrando las notas: " << endl;
	
	for(int i=0; i<3; i++){
		(alumno2+i)->mostrarDatos();
		cout << endl;
		
	}
	
	return 0;
}