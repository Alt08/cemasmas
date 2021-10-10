//caracteres

#include <iostream>
#include <conio.h>
#include <string.h> //Libreria estandar para el uso de las cadenas de caracteres
using namespace std;

int main(){
	char palabra[] = "El perro"; //cadena de caracteres
	char palabra2[] = {'E', 'l','p','e','r','r','o'};
	char nombre[10];

	//Imprimiendo la cadena de caracteres
	cout<<palabra<<endl;
	cout<<palabra2<<endl;
	
	//pedir una cadena de caracteres 
	cout<<"Introduce tu nombre: ";
	//cin>>nombre; // Solo guarda la primera palabra introducida y no recomendado para cadena de caracteres
	//gets(nombre); //No respeta la limitaciones puesta en la declaracion de variable
				  //si pones 5 espacios le gets lo ignora y toma todos los caracteres disponible
	/* ---LA MEJOR FORMA PARA GUARDAR CADENAS DE CARACTERES*/
				//Nombre de la variable donde se guardaran los datos
					    //espacios disponibles 
					    	//termina cuando se da un salto de linea (enter)
	cin.getline(nombre, 10, '\n');
	getch();
	return 0;
}