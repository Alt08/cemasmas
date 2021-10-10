//Copiar el contenido de una cadena a otra - strcpy()
#include<iostream>
#include<string.h>
using namespace std;

int main(){
	char nombre[] = "Aldebaran";
	char nombre2[20];
	
	//tiene 2 parametros -> primero la cadena vacia y la 2da la cadena que queremos copiar
	strcpy(nombre2, nombre);
	cout<<"Nueva cadena: "<<nombre2<<endl;
	
	
	
	return 0;
}


