#include <iostream>
using namespace std;


/*
	Hacer una estructura llamada, corredor, en la cual se tendra los siguientes campos:
		-nombre
		-edad
		-sexo
		-club
	pedir datos al usuario para un corredor y una categoria de competicion:
		- Juvenil <= 18 años
		- Señor <= 40 años
		- Veterano > 40 años
		posteriormente imprimir todos los datos del corredor, incluyendo su categoria de competicion
*/

struct corredor{
	char nombre[25];
	int edad;
	char sexo[2];
	char clud[30];
}corredor;


int main(){

	cout << "Introduce tu nombre: ";
	cin.getline(corredor.nombre, 25, '\n');
	cout << "introduce tu edad: ";
	cin >> corredor.edad;
	fflush(stdin); //Vacia el buffer y permite introducir valores	
	cout << "introduce tu sexo: ";
	cin.getline(corredor.sexo, 2, '\n');
	cout << "introduce tu club: ";
	cin.getline(corredor.clud, 30, '\n');
	
//	IMPRIMIENDO DATOS
	cout << "\n";
	cout << "Nombre: " << corredor.nombre << endl;
	cout << "Edad: " << corredor.edad << endl;
	cout << "Sexo: " << corredor.sexo << endl;
	cout << "Clud: " << corredor.clud << endl;
	
//	CATEGORIA A LA QUE PERTENECE

	if(corredor.edad <= 18){
		cout << "Categoria: juvenil";
	}else if(corredor.edad <= 40){
		cout << "Categoria: Se\xA4or";
	}else{
		cout << "Categoria: Veterano";
	}


	return 0;
}
