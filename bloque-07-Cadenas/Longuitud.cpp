//Longuitud de una cadena de caracteres - Funcion strlen()

#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

int main(){
	char palabra[] = "hola";
	//La funcion devuelve un entero - declaramos una variable y la igualamos a 0
	int longuitud = 0;
	//igualamos la variable con la funcion y pasamos la cadena de caracteres
	longuitud = strlen(palabra);
		
	cout<<"La longuitud es: "<<longuitud<<endl;
		
	//getch();
	return 0;
}
