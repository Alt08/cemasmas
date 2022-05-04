#include <iostream>
#include "persona.h"
using namespace std;

class medico:public persona{
private:
	string titulacion;
	int aniosExperiencia;

public:
	medico(string nombre, string apellidos, int edad, string titulacion, int aniosExperiencia):persona(nombre, apellidos, edad) {
		this->titulacion = titulacion;
		this->aniosExperiencia = aniosExperiencia;
	}

	~medico() {}

	void partidoFutbol(){
		cout << "Da asistencia en el partido de futbol" << endl;
	}
	
	void entrenamiento(){
		cout << "Da asistencia en el entrenamiento" << endl;
	}

	void curarLesion(){
		cout << "Curar lesiones" << endl;
	}
};

