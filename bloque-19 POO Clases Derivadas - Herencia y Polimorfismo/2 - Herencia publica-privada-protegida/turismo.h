#include <iostream>
#include "vehiculo.h" 
using namespace std;

// Heredando de la clase cehiculo como publico
// cuando no se especifica la herencia, se toma por defecto el private
// class turismo : vehiculo ==  class turismo : private vehiculo
class turismo :public vehiculo {
private:
	int numeroPuertas;

public:
	turismo(string marca, string color, string modelo, int numeroPuertas) : vehiculo(marca, color, modelo) {
		this->numeroPuertas = numeroPuertas;
	}
	~turismo() {

	}

	int getNumeroPuertas() {
		return numeroPuertas;
	}

	// Podemos acceder a los metodos protected 
	// con los metodos de la clase base
	string retornarModelo() {
		string msj = getModelo();
		return msj;
	}

};