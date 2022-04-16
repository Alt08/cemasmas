#include <iostream>
#include "barco.h"
#include "avion.h"
using namespace std;

class hidroavion:public barco, public avion{
private:
	string codigo;

public:
	// Contructor con varias clase
	hidroavion(string nombre, string modelo, string codigo):barco(nombre),avion(modelo) {
		this->codigo = codigo;
	}

	~hidroavion(){
		
	}

	string getCodigo() {
		return codigo;
	}

	void mostrarDatos() {
		cout << "Nombre: " << getNombre() << endl;
		cout << "Modelo: " << getModelo() << endl;
		cout << "Codigo: " << codigo << endl;
	}
};