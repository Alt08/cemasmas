#include <iostream>
using namespace std;
/*
	Realizar un programa que lea un arreglo de estructura los datos de N empleados
	de la empresa y que:
		- Imprima datos del empleado con mayor y menor salirio
*/

struct empleados{
	char nombre[20];
	int salario;
}dEmpleados[100];


int main(){
	int mayor = 0, menor = 99999;
	int posM = 0, posm = 0;
	
	for(int i = 0; i < 4; i++){
		fflush(stdin);
		cout << "Tu nombre: ";
		cin.getline(dEmpleados[i].nombre, 20, '\n');
		cout << "Tu salario: ";
		cin >> dEmpleados[i].salario;
		
		if(dEmpleados[i].salario > mayor){
			mayor = dEmpleados[i].salario;
			posM = i;
		}
		if(dEmpleados[i].salario < menor){
			menor = dEmpleados[i].salario;
			posm = i;
		}
	}

	//Imprimiendo valores
		cout << "Nombre del empleado: " << dEmpleados[posM].nombre << endl;
		cout << "Salario mas alto: " << mayor << endl;
		
		cout << "Nombre del empleado: " << dEmpleados[posm].nombre << endl;
		cout << "Salario mas bajo: " << menor << endl;
	return 0;
}
