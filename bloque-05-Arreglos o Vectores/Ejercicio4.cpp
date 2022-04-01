#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	int numeros[100],n;
	
	cout<<"Introduce el numero de elementos: ";
//	n para guardar los numeros introducidos
	cin>>n;
	
	for(int i=n; i>=0; i--){
//		Guardando los numeros en el vector o lista
		cout<<"Introduce un numero: ";
		cin>>numeros[i];
	}

//	Mostrar los elementos con los indices asociados 
	for(int i=n; i>=0; i--){
		cout<< i << "-->" << numeros[i]<<endl; 
	}
			
	getch();
	return 0;
}