/*
    -Escriba una funcion nombrada funpot()
    -Que eleve un numero entero que se transmita a una potencia en numero entero + y -  
    -Despliegue el resultado
    EL NUMERO ENTERO POSITIVO DEBERA SER EL SEGUNDO VALOR TRANSMITIDO A LA FUNCION

*/
#include <iostream>
using namespace std;

void pedir(); // Definicion de la funcion para pedir datos que
void funpot(int potencia, int potencia1); // Declarando la definicion de la funcion
int numero, elevado; // variable global para guardar el dato

int main(){
	pedir();
	funpot(numero, elevado);
    return 0;
}
// Funcion para pedir un numero
void pedir(){
    cout<<"Introduce un numero: ";
    cin>>numero>>elevado;
}
// Funcion para elevar a la potencia n
void funpot(int potencia, int potencia1){
    long negativo = 1;

    for(int i=1; i<=potencia1; i++){
        negativo *=potencia;
    }

    cout<<"Resultado final: "<<negativo<<endl;

}