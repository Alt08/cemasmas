#ifndef mamifero_H
#define mamifero_H

#include <iostream>
using namespace std;

class mamifero{
private:
	int anioNacimiento;
	string lugarNacimiento, raza;

public:

	mamifero(int anioNacimiento, string lugarNacimiento, string raza) {
		this->anioNacimiento = anioNacimiento;
		this->lugarNacimiento = lugarNacimiento;
		this->raza = raza;
	}

	virtual string imprimirDieta()=0; // Metodo virtual, por que lo el metodo imprimir dieta ya es abstracta
	
	~mamifero(){}

	int getAnioNacimiento() {
		return anioNacimiento;
	}
	string getLugarNacimiento() {
		return lugarNacimiento;
	}
	string getRaza() {
		return raza;
	}

};

#endif // !mamifero_H