#include <iostream>
using namespace std;

class cuadrilatero{
	// Atributos
	private:
		float lado1, lado2;
	
	// Metodos
	public:
		cuadrilatero(float lado1, float lado2){ // Contructor 1
			this->lado1 = lado1;
			this->lado2 = lado2;
		}

		cuadrilatero(float lado){ // Contructor 2
			this->lado1 = this->lado2 = lado;
		}

		float obtenerPerimetro();

		float obtenerArea();
};