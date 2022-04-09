/*
	-Construir un programa que calcule el area y el perimetro de un 
	 cuadrilatero dad la longuitud de sus lados.
	-Los valores de la longuitud deberan introducirse por la linea de ordenes.
	-Si es un cuadrado, solo se proporcionara la longuitud de uno de los lados
	 al constructor
*/
#include <iostream>
#include "cuadrilatero.h"
using namespace std;

int main(int arg, char** argv){
	cuadrilatero* c1; // Creando objetos
	
	float lado1, lado2; // declarando variables
	
	cout << " Digite el lado1: "; cin >> lado1;
	cout << " Digite el lado2: "; cin >> lado2;
	
	if(lado1 == lado2){ // es un cuadrado
		c1 = new cuadrilatero(lado1);
	}else{
		c1 = new cuadrilatero(lado1, lado2);
	}
	
	// Imprimiendo datos
	cout << "El perimetro es: " << c1->obtenerPerimetro() << endl;
	cout << "El area es: " << c1->obtenerArea();
	
	return 0;
}