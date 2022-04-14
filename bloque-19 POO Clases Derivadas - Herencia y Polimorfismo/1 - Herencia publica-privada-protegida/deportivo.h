#include <iostream>
#include "vehiculo.h" 
using namespace std;

// Herencia privada
class deportivo :private vehiculo {
private:
	int cilindrada;

public:
	// Constructor
	deportivo(string marca, string color, string modelo, int cilindrada) :vehiculo(marca, color, modelo) {
		this->cilindrada = cilindrada;
	}

	// Destructor
	~deportivo() {}

	// Metodo
	int getCilindrada() {
		return cilindrada;
	}

	// Accediendo a un metodo privado
	string reportarMarca() {
		string marca = getMarca();
		return marca;
	}
};

