/*
    - Una funcion llamada AlCuadrado()
    -Que calcule el cuadrado del valor que se le transmite
    -Despliegue el resultados
    -La funcion debera ser capaz de elevar al cuadrado numeros flotantes
*/
#include <iostream>
using namespace std;

// Prototipo de la funcion
void pedirdDatos();
void AlCuadrado(float cuadrado);

float numero;
int main(){
    pedirdDatos();
    AlCuadrado(numero);
    return 0;
}

void pedirdDatos(){
    cout<<"Introduce un numero: ";
    cin>>numero;
}

// Definicion de la funcion
void AlCuadrado(float cuadrado){
    float elevado;
    elevado = cuadrado * cuadrado;
    cout<<"El cuadro es: "<<elevado<<endl;
}