// Visibilidad de los miembros de la clase (Encapsulamiento)

#include <iostream>
#include "punto.h"
using namespace std;

int main(int argc, char** argv) {
	//	Creacion de objetos estaticos
	punto p1(1,2);
								    //Cuando se usa el . indica que se esta trabjando con datos estaticos
	cout << "El valor de X es: " << p1.getX() << endl;
	cout << "El valor de Y es: " << p1.getY() << endl;

	//	Creacion de objetos dinamicos
	// El * indica que se esta trabajando con puntero
	punto* p2 = new punto(); // Creacion de un dinamico

	p2->setX(31); // Pasando valor a X
	p2->setY(2); // Pasando valor a Y

	cout << "Valor de X: " << p2->getX() << endl; // Para trabajar con datos dinamicos se usa ->
	cout << "Valor de Y: " << p2->getY() << endl;

	return 0;
}