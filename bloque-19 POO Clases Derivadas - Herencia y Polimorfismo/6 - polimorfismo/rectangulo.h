#include <iostream>
#include "poligono.h"

using namespace std;

class rectangulo:public poligono{
private:
	float base, altura;

public:
	rectangulo(float base, float altura) {
		this->base = base;
		this->altura  = altura;
	}

	float perimetro() {
		float per = 2 * base + 2 * altura;
		return per;
	}

	float area() {
		float areaR = base * altura;
		return areaR;
	}
};

