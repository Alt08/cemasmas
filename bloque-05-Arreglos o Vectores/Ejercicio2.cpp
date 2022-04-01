#include <iostream>
#include <conio.h>
using namespace std;

/* Un programa que defina un vector de numeros y calcule la multiplicacion de sus elementos */
int main(){
	int numeros[] = {2,4,6};
	int mul = 1;
	for(int i=0; i<3; i++){
		cout<<"Numero: "<<numeros[i]<<endl;
		mul = mul * numeros[i];
	}
	cout<<"La suma es: "<<mul<<endl;
	
	getch();
	return 0;
	
}