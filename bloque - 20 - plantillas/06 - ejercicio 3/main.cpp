/*
	Defina una plantilla para la clase Materia, de tal manera que el tipo de datos del atributo
	calificacion sea del tipo T. Esto permitira crear objetos de tipo materia que tengan
	calificaciones que sean
		-> Numeros enteros
		-> Numeros decimales
		-> Numeros letras

	a) Cree un objeto de tipo materia usando el tipo int. imprima los valoeres de los atrivutos del objeto creado
	b) Cree un objeto de tipo materia usando el tipo float
	c) Cree un objeto de tipo materia usando el tipo char
	d) Incluya un metodo en la clase que permita modificar la calificacion de una materia
*/

#include <iostream>
#include "materia.h"

int main(int argc, char** argv) {
	materia <int> curso1("Algoritmo", 1, 15);
	materia <float> curso2("Matematicas", 2, 18.89);
	materia <char> curso3("Lenguaje", 3, 'A');

	cout << "Mostrando datos del curso 1: " << endl;
	curso1.mostrarDatos();
	
	cout << "\nMostrando datos del curso 2: " << endl;
	curso2.mostrarDatos();

	cout << "\nMostrando datos del curso 3: " << endl;
	curso3.mostrarDatos();

	curso1.setCalificacion(19);
	cout << "\nLa nueva calificacion de curso 1 es: " << curso1.getCalificacion() << endl;

	return 0;
}