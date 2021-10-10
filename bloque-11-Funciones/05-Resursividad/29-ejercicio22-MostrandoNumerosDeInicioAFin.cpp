/*

	Ejercicio 22: Escriba una funcion escribeNumeros(int ini, int fin) que devuelva
				  en la salida estandar los numero de ini al fin, Escriba una que escriba 
				  los numero en orden escendende
				  
				  escribeNumero(ini, fin) = ini								,si ini=fin
				  							esbribeNumero(ini, fin-1)		,si fin>ini

*/

#include <iostream>
using namespace std;

int escribeNumeros(int, int);

int main(){
	int ini, fin;
	
	cout << "Digite un inicio: "; cin >> ini;
	cout << "Digite el fin: "; cin >> fin;

	for(int i=ini; i<=fin; i++){
		cout << escribeNumeros(i, fin) << " ";
	}
	
	return 0;
}

int escribeNumeros(int ini, int fin){
	if(ini == fin){
		return ini;
	}else{
		return escribeNumeros(ini, fin-1);
	}
	
}



