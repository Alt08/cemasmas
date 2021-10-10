/*
	-Un programa que defina dos vectores de caracteres
	-Despues almacene el contenido de ambos vectores en uno nuevo
	-Situando en primer lugar los elementos del primer vector
	-Seguido por los elementos del segundo vector
	-Muestre el contenido del nuevo vector en salida estandar
*/

#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	char vector1[] = {'a','b','c'};
	char vector2[] = {'d','e','f'};
	char NuevoVector[6];

//Copiando elementos de vector 1 a nuevovector
	for(int i=0; i<3; i++){
		NuevoVector[i] = vector1[i];
	}
//Copiando elementos de vector 2 a nuevovector
	for(int i=3; i<6; i++){
		NuevoVector[i] = vector2[i-3];
	}
	for(int i=0; i<6; i++){
		cout<<"primer vector: "<<NuevoVector[i]<<endl;
	}
	



	getch();
	return 0;
}
