#include <iostream>
using namespace std;

//ESTRUCTURA ANIDADA
struct infoDireccion{
	char direccion[30];
	char ciudad[20];
	char provincia[20];
};

struct empleado{
	char nombre[20];
	struct infoDireccion direccionEpleado;
	double salario;	
};


int main(){


	return 0;
}
