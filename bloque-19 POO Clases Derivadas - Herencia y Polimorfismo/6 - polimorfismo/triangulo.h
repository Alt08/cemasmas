#ifndef poligono_H
#define poligono_H

#include <iostream>
#include "math.h"
#include "poligono.h"
using namespace std;

class triangulo:public poligono{
private:
	float lado1, lado2, lado3;

public:
	triangulo(float lado1, float lado2, float lado3) {
		this->lado1 = lado1;
		this->lado2 = lado2;
		this->lado3 = lado3;
	}

	float perimetro() {
		float per = (lado1 + lado2 + lado3);
		return per;
	}

	float area() {
		float s = (lado1 + lado2 + lado3)/2;
		float areaT = sqrt(s*(s - lado1)*(s - lado2)*(s - lado3));
		return areaT;
	}
};

#endif // !poligono_H