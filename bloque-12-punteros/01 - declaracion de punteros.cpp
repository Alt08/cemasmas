/*
	&n = La direccion de n
	*n = La variable cuya direccion esta almacenada en n
*/

#include <iostream>
using namespace std;

int main(){
	int num, *dirNumero;
	
	num = 20;
	dirNumero = &num;
	
	cout << "Numero: " << *dirNumero << endl;
	cout << "Direccion de memoria: " << dirNumero << endl;
	
	return 0;
}