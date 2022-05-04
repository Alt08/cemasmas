#ifndef persona_H
#define persona_H

#include <iostream>
using namespace std;

class persona{
protected:
	string nombre; 
	string apellidos;
	int edad;

public:
	persona(string nombre, string apellidos, int edad) {
		this->nombre = nombre;
		this->apellidos = apellidos;
		this->edad = edad;
	}
	
	string getNombre(){
		return nombre;
	}
	
	string getApellido(){
		return apellidos;
	}
	
	int getEdad(){
		return edad;
	}
	
	~persona(){}
	
	void viajar(){
		cout << "Viajar" << endl;
	}
	
	virtual void partidoFutbol() = 0;
	virtual void entrenamiento() = 0;
};

#endif persona_H