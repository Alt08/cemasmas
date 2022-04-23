#ifndef alumno_H
#define alumno_H



#include <iostream>
using namespace std;

class alumno{
private: 
	string nombreCarrera;
public:
	alumno(string nombreCarrera) {
		this->nombreCarrera = nombreCarrera;
	}

	~alumno(){}

	void mostrarDatos() {
		cout << "Nombre Carrera: " << endl;
	}

	void setNombreCarrera(string nuevoNombre) {
		this->nombreCarrera = nuevoNombre;
	}

	string getNombreCarreta() {
		return nombreCarrera;
	}

};

#endif // !alumno_H