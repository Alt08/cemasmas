/*
	Ejericio 1: 
		Comprobar si un numero es par o impar y señalar la posicion de memoria
		donde se esta guardando el numero, con punteros
*/

#include <iostream>
using namespace std;

int main(){
	int numero, *dirNumero;
	cout << "Digite un numero: "; cin >> numero;
		
	dirNumero = &numero; // Guardando la posicion en la memoria
	
	if(*dirNumero%2==0){
		cout << "El numero: " << *dirNumero << " Es par" <<endl;
		cout << "Posicion: " << dirNumero << endl;
	}else{
		cout << "El numero: " << *dirNumero << " es impar" <<endl;
		cout << "Posicion: " << dirNumero << endl;
	}
	
	
	return 0;
}