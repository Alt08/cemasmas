#include <iostream>
#include "felino.h"
using namespace std;

class gatoDomestico:public felino{
private:
	string nombreDuenio;
public:
	gatoDomestico(int anioNacimiento, string lugarNacimiento, string raza, string nombreDuenio):felino(anioNacimiento, lugarNacimiento, raza) {
		this->nombreDuenio = nombreDuenio;
	}

	~gatoDomestico(){}

	string imprimirDieta() {
		return "La dieta del gato es con whiska";
	}
	void setNombreDuenio(string nuevoNombre) {
		this->nombreDuenio = nuevoNombre;
	}
	string getNombreDuenio() {
		return nombreDuenio;
	}
};
