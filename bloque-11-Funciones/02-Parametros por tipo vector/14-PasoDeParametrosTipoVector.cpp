/*
        PASO DE PARAMETROS DE TIPO VECTOR
    -Parametros de la funcion - en el prototipo:
        > void NombreDeFuncion( [TIPO] [NOMBRE DE FUNCION][], TipoDato )
    -Llamada de la funcion - Definiendo la funcion:
        > NombreDeFuncion( TipoDato NombreArreglo[], TipoDato tamañoArreglo[O la varibla que contiene la cantidad de datos] )
*/

//Cuadradps de los elementos del vector

#include <iostream>
using namespace std;

//prototipo de la funcion:

void cuadrado(int vec[], int); //El nombre usado para el nombre de la funcion puede ser diferente, pero para evitar problemas usemos uno relacionado
void muestras(int vec[], int);

int main(){
    //El tamaño de un vector para este caso nunca cambia
    const int TAM = 5;

    int vec[TAM] = {1,2,3,4,5};

    cuadrado(vec, TAM);
    muestras(vec, TAM);
    return 0;
}

//Definiendo la fncion
void cuadrado(int vec[], int tam){
    for(int i=0; i<tam; i++){
        vec[i] *= vec[i];
    }
}

void muestras(int vec[], int tam){
    for(int i=0; i<tam; i++){
       cout<<vec[i]<<" ";
    }
}
