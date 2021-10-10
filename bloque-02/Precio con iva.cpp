#include <iostream>
using namespace std;

int main(){
	float precio, iva = 50, pfinal;
	cout << "Precio del producto: "; cin >> precio;
	float final = precio * iva /100;
	pfinal = final + precio;
	cout << "El precio con iva es: " << pfinal <<endl;
	return 0;
}
