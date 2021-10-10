/*
	Ejercicio 21: 
	
				Escriba una funcion recursiva que calcule un numero elevado a una potencia 
				entera mayor o igual que cero: x^y
*/

#include <iostream>
using namespace std;


int potencia(int, int);

int main(){

	int base, exponente;
	
	//Pedir datos al usuario
	cout << "Digite la base: "; cin >> base;
	cout << "Digite el exponente: "; cin >> exponente;
	
		
	cout << "\n Potencia de la " << base << " elevado a "<< exponente << " es: " << potencia(base, exponente) << endl;
	
	return 0;
}


int potencia(int x, int y){
	int pot; 
	
	if(y == 1){
		pot = x;
	}else{
		pot = x * potencia(x, y - 1);
	}
	return pot;
}



