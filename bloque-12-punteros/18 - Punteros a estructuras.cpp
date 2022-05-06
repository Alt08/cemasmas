#include <iostream>
using namespace std;

struct Persona{
	char nombre[30];
	int edad;
}persona, *punteroPersona = &persona;

void pedirDatos();
void mostrarDatos(Persona *);

int main(){
	pedirDatos();
	mostrarDatos(punteroPersona);
	
	return 0;
}

void pedirDatos(){
	cout << "Digite su nombre: ";
	cin.getline(punteroPersona->nombre, 30, '\n');
	cout << "Digite su edad: ";
	cin >> punteroPersona->edad;
}

void mostrarDatos(Persona *punteroPersona){
	cout << "\nSu nombre es: " << punteroPersona->nombre << endl;
	cout << "Su edad es: " << punteroPersona->edad << endl;
}