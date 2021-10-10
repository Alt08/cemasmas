// Pasar una palabra a Mayuscula  - funcions strupr()
#include <iostream>
#include<string.h>
using namespace std;

int main(){
	char palabra[] = "perRo";// Si una letra esta en mayuscula es omitida
	strupr(palabra);
	cout<<palabra<<endl;
	
	
	
	return 0;
}