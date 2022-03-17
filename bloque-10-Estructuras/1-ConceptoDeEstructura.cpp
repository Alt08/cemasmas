#include <iostream>
using std::cout;
using std::endl;
// Estructuras, coleecion de uno o mas tipos de elementos diferentes
// Estrutura
// DECLARANDO VARIABLES FORMA 1 - 2 
struct coleccion{
	char titulo[30];
	int nCanciones;
	float precio;
};

// DECLARANDO VARIABLES FORMA 2 - 2 / variables en la estructura
struct coleccion{
	char titulo[30];
	int nCanciones;
	float precio;
}cd1, cd2, cd3;

int main(){
	// declarando variables de la forma 1
	struct coleccion cd1, cd2, cd3;

	return 0;
}
