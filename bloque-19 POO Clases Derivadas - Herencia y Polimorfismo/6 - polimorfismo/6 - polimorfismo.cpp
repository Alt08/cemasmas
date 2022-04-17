// 6 - polimorfismo
/*
	en POO: permite que diferentes objetos respondan de modo diferente al mismo mensaje.
	El poliformismo adquiere su maxima potencia cuando se utiliza  en union de 
	herencia.

	Reglas para poder usar polimorfismo
		-> Crear una jerarquia de clases con operaciones importantes definidas por las funciones miembreos declardas como virtuales en la clase base.
		-> Implementacion especificas de las funciones virtuales se deben hacer en las clase derivadas. cada clase derivada puede tener su propia version de las funciones.
		-> 
		-> 
		-> 
		-> 

		EJEMPLO:

										poligono	-> Abstractas
							+perimetro(): float		-> virtual
							+area(): float			-> virtual
								  ^
		__________________________|__________________________________________
		^																	^
		|																	|
	rectangulo															tringulo
	-base:float															lado1:float
	-altura:float														lado2:float
	--------------														lado3:float
	+rectangulo(float, float)											___________
	+perimetro(): float													triangulo(float, float, float)
	+area(): float														perimetro():float
																		area():float
poligono* poligonos[] // Arreglo de poligonos
poligono[0] = new rectangulo(7,4);
poligono[1] = new triangulo(3,4,4);


*/

#include <iostream>
#include "poligono.h"
#include "rectangulo.h"
#include "triangulo.h"
using namespace std;

int main(int argc, char** argv){
	poligono* poligonos[2]; // Creando arreglo de objetos

	poligonos[0] = new rectangulo(7,4);
	poligonos[1] = new triangulo(3,4,4);

	for (int i = 0; i < 2; i++){
		cout << "Area: " << poligonos[i]->area() << endl;
		cout << "Perimetros: "<<poligonos[i]->perimetro() << endl;
	}

	return 0;
}