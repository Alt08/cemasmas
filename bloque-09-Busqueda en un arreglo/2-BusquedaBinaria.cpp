#include <iostream>
using std::cout;
using std::endl;
//BUSQUEDA BINARIA DE FORMA ASCENDENDE

int main(){
	int numeros[] = {1,2,3,4,5};
	int inferior, superior, mitad, dato;
	char bandera = 'F';

	//dato a buscar
	dato = 1;

	//Busqueda binaria
	inferior = 0;
	superior = 5;

	while (inferior <= superior){
		mitad = (inferior +superior)/2;
		if (numeros[mitad] == dato){
			bandera = 'V';
			break;
		}
		if (numeros[mitad] > dato){
			superior = mitad;
			mitad = (inferior+superior)/2;
		}
		if(numeros[mitad] < dato){
			inferior = mitad;
			mitad = (inferior+superior)/2;
		}
	}

	if(bandera == 'V'){
		cout << "Numero encontrado en posicion: " << mitad << endl;
	}else{
		cout << "No se encontrado";
	}

	return 0;
}