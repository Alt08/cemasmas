/*
	Ejericio 2:
		Determinar si un numero es primo o no.
		Con punteros y ademas indicar en que posicion de memoria se guardo el numero
*/

#include <iostream>
using namespace std;

int main(){
	int numero, *dirNumero, cont = 0;
	
	cout << "Digite un numero: "; cin >> numero;
		
	dirNumero = &numero; // Guardando la posicion en la memoria
	
	
	for(int i=1; i<*dirNumero; i++){
		if(*dirNumero%i==0){
			cont++;
		}
	}
	
	if(cont>2){
		cout << "El numero: " << *dirNumero << " No es primo" <<endl;
		cout << "Posicion: " << dirNumero << endl;
	}else{
		cout << "El numero: " << *dirNumero << " Es primo" <<endl;
		cout << "Posicion: " << dirNumero << endl;
	}
	
	return 0;
}