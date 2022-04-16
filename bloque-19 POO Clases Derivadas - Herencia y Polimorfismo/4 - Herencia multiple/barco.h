#include <iostream>
using namespace std;

class barco {
private:
	string nombre;

public:
	barco(string nombre) {
		this->nombre = nombre;
	}

	~barco() {
	}

	void indicarBarco() {
		cout << "Desplazamiento por agua" << endl;
	}

	string getNombre() {
		return nombre;
	}
};