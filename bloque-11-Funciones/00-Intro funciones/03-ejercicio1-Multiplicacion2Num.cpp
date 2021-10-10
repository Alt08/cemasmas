/*
    -Escriba una funcion llamada mult();
    -que acepte 2 numeros flotantes como parametros
    -Multiplique ambos numeros
    -Desplegar el resultado - Al decir desplegar hace referencia a una funcion void y no retorna nada
*/

#include <iostream>
using namespace std;
//Definicion de la funcion 
//Usamos el tipo void ya que solo vamos a desplegar el resultado
void pedirDatos(); //Declaracion una funcion para pedir los datos
void mult(float a, float b); //Declaramos otra funcion void para recibir los elementos y realizar la operacion

float x, y; //Declaramos variables globales que se usaron en varios bloque dentro del programa

int main(){

    pedirDatos(); //Mandamos a llamar la funcion para pedir los datos
    mult(x, y); //mandamos a llamar la funcion donde pasamos los valores de X y Y para realizar la operacion

    return 0;
}

// Definimos que realizara dicha funcion, en este caso con la primera funcion pediremos al usuario los 2 numeros
void pedirDatos(){
    cout<<"Introduce 2 numeros: ";
    cin>>x>>y;
}

// Esta funcion realizara la multiplicacion de ambos numeros y desplegara el resultado
void mult(float a, float b){
    float Multiplicacion;
    Multiplicacion =  a * b;
    cout<<"La multiplicacion es: "<<Multiplicacion<<endl;
}

