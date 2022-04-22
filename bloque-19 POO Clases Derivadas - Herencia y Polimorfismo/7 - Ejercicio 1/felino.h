#ifndef felino_H
#define felino_H


#include <iostream>
#include "mamifero.h"
using namespace std;

class felino:public mamifero{
private:
	string nombreCirco;

public:
	felino(int anioNacimiento, string lugarNacimiento, string raza, string nombreCirco):mamifero(anioNacimiento, lugarNacimiento, raza) {
		this->nombreCirco = nombreCirco;
	}

	felino(int anioNacimiento, string lugarNacimiento, string raza):mamifero(anioNacimiento, lugarNacimiento, raza) { // Sobrecarga de constructores
	}

	~felino(){}

	string imprimirDieta() {
		return "La dieta del felino es a base de carne";
	}

	void setNombreCirco(string nuevoNombre) {
		this->nombreCirco = nuevoNombre;
	}

	string getNombreCirco() {
		return nombreCirco;
	}
};

#endif // !felino_H