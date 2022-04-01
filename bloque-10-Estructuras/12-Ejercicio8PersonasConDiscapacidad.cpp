#include <iostream>
#include <string.h>

using namespace std;

/*
	Defina una estructura que sirva para representar a una persona.
	la estructura de contener 2 campos:
		--> Nombre de la persona
		--> Si tiene discapacidad (true || false)
	Realiace un programa que dado un vector de personas rellene dos nuevos vectores4
		--> Uno que contenga las personas que no tienen ninguna discapacidad
		--> Uno que contenga las personas que tienen discapacidad
*/
struct persona
{
	char nombre[20];
	bool discapacidad;
} datoPersona[100], personaDiscapacitado[100], personaNoDiscapacitado[100];

int main()
{
	int cantidadP, k=0, j = 0;
	cout << "0 -> No\n1 -> Si" << endl;
	cout << "Digite la cantidad de persona: ";
	cin >> cantidadP;
	for (int i = 0; i < cantidadP; i++)
	{
		fflush(stdin);
		cout << "Digita tu nombre: ";
		cin.getline(datoPersona[i].nombre, 20, '\n');
		cout << "Tienes una dispacidad? ";
		cin >> datoPersona[i].discapacidad;
		cout << endl;

		if (datoPersona[i].discapacidad == 1)
		{
			// strcpy (char.destino, const char.fuente);
			// Se usa k para comparar con el resultado inicializado
			// y evitar imprimir espacios vacios en el arreglo
			strcpy(personaNoDiscapacitado[k].nombre, datoPersona[i].nombre);
			k++;
		} else {
			strcpy(personaDiscapacitado[j].nombre, datoPersona[i].nombre);
			j++;
		}
	}

	cout << "\nPersona no discapacitado" << endl;
	for (int i = 0; i < k; i++){
		cout << personaNoDiscapacitado[i].nombre << endl;
	}

	cout << "\nPersona con discapacidad" << endl;
	for (int i = 0; i < j; i++){
		cout << personaDiscapacitado[i].nombre << endl;
	}

	return 0;
}