
#ifndef deportista_H
#define deportista_H


#include <iostream>
using namespace std;

class deportista{
private:
	string nombreEntrenador;

public:
	deportista(string nombreEntrenador) {
		this->nombreEntrenador = nombreEntrenador;
	}

	~deportista(){}

	void mostrarDatos() {
		cout << "Nombre del entrenador: " << nombreEntrenador << endl;
	}

	void setNombreEntrenador(string nuevoNombre) {
		this->nombreEntrenador = nuevoNombre;
	}

	string getNombreEntrenador() {
		return nombreEntrenador;
	}
};

#endif // !deportista_H