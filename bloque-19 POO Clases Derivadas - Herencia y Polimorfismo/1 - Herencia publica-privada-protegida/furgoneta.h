// Herencia protegida

#include <iostream>
#include "vehiculo.h"
using namespace std;

class furgoneta:protected vehiculo{
private:
	int carga;

public:
	furgoneta(string marca, string color, string modelo, int carga):vehiculo(marca, color, modelo) {
		this->carga = carga;
	}

	int getCarga() {
		return carga;	
	}

	string reportarColor() {
		string msj = getColor();
		return msj; 
	}

};

