#include <iostream>
//Uso de la funcio getch - evitar que el program se cierre
using namespace std;

int main(){
	//Un programa que defina un vector de numero y calcule la suma de los elementos

	int numeros[] = {1,2,3,4};
	//Para guardar el resultado de los umeros
	int suma = 0;

	for(int i=0; i<4; i++){
		//	Sumando los elementos del vector
		//suma = suma + numeros[i];
		//o
		suma += numeros[i];
	}
	
	cout<<"La suma del vector es: "<<suma<<endl;

	return 0;
}
