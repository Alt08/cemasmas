/*
    -Escriba un programa en c++
    -Que devuelva la parte fraccionaria de cualquier numero introducida por el usuario
    >>Por ejemplo
                >> Si introduce el numero 256.879 deberia deplegar el numero 0.879    
*/

#include <iostream>
using namespace std;
//Prototipos de funciones
void IntroNumero();
float fraccionaria(float numero);

float n;
int main(){
    IntroNumero();
   float resultado = fraccionaria(n);

    cout << "\nFraccionario: "<<resultado<<endl;
    return 0;
}

void IntroNumero(){
    cout << "introduce un numero: ";
    cin>>n;    
}
//256.879 = .879 
float fraccionaria(float numero){
    //  256                  
    int entero = numero; //256
    float residuo;
    residuo = numero - entero;
    return residuo;
}