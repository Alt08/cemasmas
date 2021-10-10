// Plantillas de funcion
// Sacar el valor adsoluto de una funcion

#include <iostream>
using namespace std;

// Prototipo de una funcion
// El problema es que no sabes si el numero es entero, double o float
// Para eso usamos las plantillas usando un tipo de dato general
// Prefijo de la plantilla
template <class TIPOD> //Inciando el template "TIPOD es como un nombre para identificar" y puede ser cuarquier tipo de numero
void mostrarAds(TIPOD numero); //Funcion vacia, pasamos el nombre del template

int main(){
    // Declarando lso tipos de numeros
    int n1 = -4;
    float n2 = -3.5;
    double n3 = -155.545;

    // Mandamos a llamar la funcion 3 veces para cada tipo de numero
    mostrarAds(n1);
    mostrarAds(n2);
    mostrarAds(n3);

    return 0;
}

// Definicion de la funcion
template <class TIPOD>
void mostrarAds(TIPOD numero){
    if(numero < 0){
        numero = numero * - 1;
    }
    cout<<"El valor adsoluto es: "<<numero<<endl;
}

