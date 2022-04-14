#include <iostream>
#include <math.h>
#include "figura.h"

using namespace std;

// Heredando de clase figura a clase tirangulo
class triangulo : public figura {
	// La clase hija puede tener clases extras de las que ya heredo
private:
	float lado1, lado2, lado3;

public:															  // constructor figura
	triangulo(int nLados, float lado1, float lado2, float lado3):figura(nLados) {
		this->lado1 = lado1;
		this->lado2 = lado2;
		this->lado3 = lado3;
	}
	 
	float areaTriangulo() {
		// Formula de eron
		float p = (lado1 + lado2 + lado3)/2;
		float area = sqrt(p*(p-lado1)*(p-lado2)*(p-lado3));
		return area;
	}
};
