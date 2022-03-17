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
	struct infoDireccion direccionEmpleado;
	double salario;	
}
// Arreglo de structura, en cada posicion se guarda una estructura
empleados[2];

int main(){
	for (int i = 0; i < 2; i++){
		fflush(stdin); //Vacia el buffer y permite introducir valores
		cout << "Digite su nombre: ";
		cin.getline(empleados[i].nombre, 20, '\n');

		cout << "Digite su direccion: ";
		cin.getline(empleados[i].direccionEmpleado.direccion, 30, '\n');
		
		cout << "Digite tu ciudad: ";
		cin.getline(empleados[i].direccionEmpleado.ciudad, 20, '\n');
		
		cout << "Digite tu provincia: ";
		cin.getline(empleados[i].direccionEmpleado.provincia, 20, '\n');
		
		cout << "Digite tu salario: ";
		cin >> (empleados[i].salario);
		cout << "\n";
	}

	// IMPRIMIEDO DATOS
	for (int i = 0; i < 2; i++){
		cout << "Nombre: " << empleados[i].nombre << "\n";
		cout << "Direccion: " << empleados[i].direccionEmpleado.direccion << "\n";
		cout << "Ciudad: " << empleados[i].direccionEmpleado.ciudad << "\n";
		cout << "Provincia: " << empleados[i].direccionEmpleado.provincia << "\n";
		cout << "Salario: " << empleados[i].salario << "\n";
	}
	
//	Cuando aparece lo siguiente en la consola
//	es porque el buffer se ha llenado por las cadenas de caracteres
//	Digite su nombre: Digite su direccion:

	return 0;
}
