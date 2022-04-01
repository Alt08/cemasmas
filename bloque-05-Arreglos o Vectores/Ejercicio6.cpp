/*
	Un programa que defina un vector de numeros y calcule si existe algun vector cuyo valor
	sea equivalente a la suma del resto de numero del vector
*/	
#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	int numeros[100], n, suma=0, mayor=0;
	cout<<"Cantidad de elementos: ";
	cin>>n;
	
	for(int i=0; i<=n; i++){
		cout<<"Introduce un numero: ";
		cin>>numeros[i];
		suma+=numeros[i];
		
		if(numeros[i] > mayor){
			mayor = numeros[i];
		}
	}
	cout<<"La suma es: "<<suma<<endl;
	
	if(mayor == suma-mayor){
		cout<<"El numero "<<mayor<<" equivale a la suma";
	}else{
		cout<<"No existe tal numero";
	}
	
	getch();
	return 0;
}
