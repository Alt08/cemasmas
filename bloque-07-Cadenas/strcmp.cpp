/*Compara cadenas y tambien compara cual es mayor alfabeticamente - funcion strcmp */
// avion - becerro 
//el mayor es becerro por que 'b' va despues de 'a'


#include <iostream>
#include <string.h>
using namespace std;

int main(){
	char palabra1[] = {"Hola"};
	char palabra2[] = {"Hola"};
	
	if(strcmp(palabra1, palabra2)==0){ // 0 = iguales 1= diferentes 
		cout<<"Las palabras son iguales";
	}
	
	
	return 0;
}



