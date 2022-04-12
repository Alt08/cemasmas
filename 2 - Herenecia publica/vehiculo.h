#include <iostream>
using namespace::std;

class vehiculo{
private:
	string marca;
	string color;

protected:
	string modelo;
	// Metodo get
	string getModelo() {
		return modelo;
	}
	

public:
	vehiculo(string marca, string color, string modelo) {
		this->marca = marca;
		this->color = color;
		this->modelo = modelo;
	}

	// Destructor
	~vehiculo(){}

	void setColor(string color) {
		this->color = color;
	}

	// Metodo
	string getMarca() {
		return marca;
	}
	// Metodo
	string getColor() {
		return color;
	}
};

