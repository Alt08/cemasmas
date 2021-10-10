/*
    -Escriba una plantilla de función llamada despliegue();
    -Que despliegue el valor del argumento unico que se le transmite 
    -Cuando es invocada la funcion 
*/

#include <iostream>
using namespace std;

template <class unico>
void despliegue(unico valor);

float n;
char caracteres;

int main(){

    cout<<"Introduce un numero: ";
    cin>>n;
    cout<<"Introduce un caracter: ";
    cin>>caracteres;

    despliegue(n);
    despliegue(caracteres);

    return 0;
}


template <class unico>
void despliegue(unico valor){
   cout<<"el valor introducido es: "<<valor<<endl;
   cout<<"el valor introducido es: "<<caracteres<<endl;
}
