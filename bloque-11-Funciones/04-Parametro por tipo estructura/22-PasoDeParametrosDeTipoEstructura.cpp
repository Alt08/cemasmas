//PASO DE PARAMETRO DE TIPO ESTRUCTURA

#include<iostream>
using namespace std;

struct persona{
	char nombre[30];
	int edad;
}p1;

//prototipo de las funciones
void pedirDatos();
void mostrarDatos(persona);//solo indica el tipo de dato a utilizar


int main(){
	
	pedirDatos();
	mostrarDatos(p1);
	
	return 0;
}

void pedirDatos(){
	cout << "Digite su nombre: ";
	cin.getline(p1.nombre,30,'\n');
	cout << "Digite su edad: ";
	cin >> p1.edad;
}
void mostrarDatos(persona p){
	cout << endl <<"Nombre: " << p.nombre << endl;
	cout << "Edad: " << p.edad << endl;
}
