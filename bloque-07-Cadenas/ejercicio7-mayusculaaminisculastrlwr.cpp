/*
    -Pedir su nombre al usuario en mayuscula
    -Si su nombre comienza por la letra A, convertir su nombre a minuscula
    -Caso contrario no convertirlo

*/
#include <iostream>
#include <string.h>
using namespace std;

int main(){
    char nombre[20];
    cout<<"introduce tu nombre en mayusculas: ";
    cin.getline(nombre, 20, '\n');

	//Funcion strncmp - la n nos permite indicar el numero de caracteres que queremos comprobrar
					  //Indicamos la letra que queramos comparar
						   //Indicamos la cantidad de carecteres a comparar en este caso solo es una letra, ponemos 1	
	if(strncmp(nombre, "A", 1)==0){
		strlwr(nombre);
		cout<<nombre<<endl;
	}else{
		cout<<"La palabra no inicia con A"<<endl;
	}
	
    return 0;
}
