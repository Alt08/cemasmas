/*
	-Un programa que determine si una palabra es palindromo (o conocido tambien como capícua)
*/
#include <iostream>
#include <string.h>
using namespace std;


int main(){
	char cad[] = {"reconocer"};
	char cad1[20];
	
	strcpy(cad1, cad); //copiamos el contenido de cad acad1
	strrev(cad1);	   //Invertimos el orden 
	
	//comparamos cad con cad1
	if(strcmp(cad, cad1) == 0){
		cout<<cad<<" es palindromo";
	}else{
		cout<<"NO es palindroma";
	}
	
	return 0;
}
