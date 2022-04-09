#include <iostream>
#include "cuadrilatero.h"
using namespace std;

float cuadrilatero::obtenerPerimetro(){
	float perimetro = 2*(lado1+lado2);
	return perimetro;
}

float cuadrilatero::obtenerArea(){
	float area = lado1*lado2;
	return area;
}
