// Clases compuestas, clases que en sus atributos tienen objetos de otras clases
#include <iostream>
#include "estudiante.h"
using namespace std;

int main(int argc, char** argv) {
	estudiante* estudiante1 = new estudiante("34FG", 15.6, 56, "Calles las palmas #789");
	estudiante1->motrarDatos(); 
	
	
	return 0;
}