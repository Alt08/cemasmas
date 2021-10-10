#include <iostream>
using namespace std;

int main() {
	/*int a;
	cout<<"Dame un numero: ";
	cin>>a;
	cout<<a<<endl;
	*/
//----------------------------------------------------
	int a,b,suma, resta, mul, divi;
	cout<<"Dame un numero: "; cin>>a;
	cout<<"Dame otro numero: "; cin>>b;

	suma = a+b;
	resta = a-b;
	mul= a*b;
	divi=a/b;
	
	cout<<"La suma es: "<<suma<<endl;
	cout<<"La resta es: "<<resta<<endl;
	cout<<"La multiplicacion es: "<<mul<<endl;
	cout<<"La division es: "<<divi<<endl;

	return 0;
}
