/*
	
*/

#include <iostream>
using namespace std;

int main(){
	int numeros[10], *dirNumeros;
	
	for(int i=0; i<10; i++){
		cout << "Digite un numero [" << i << "]: ";
		cin >> numeros[i];
	}
	
	dirNumeros = numeros; // Posicion de memoria comienza numeros
	
	for(int i=0; i<10; i++){
		if(*dirNumeros % 2 == 0){
			cout << "El numero: " << *dirNumeros << " es par" << endl;
			cout << "Posicion: " << dirNumeros << endl;
		}
		dirNumeros++;
	}	

	return 0;
}
