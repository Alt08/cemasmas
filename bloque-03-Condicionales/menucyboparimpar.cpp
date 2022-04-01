#include <iostream>
#include <math.h>
using namespace std;
/*
    c1 cubo
    c2 par impar
    c3 salir
*/

int main(){  
    int opc, cubo, rc, num;
    cout<<"\n1.- Cubo de un numero \n2.- Numero par o impar \n3.- salir"<<endl;
    cout<<"Dame una opcion: "; cin>>opc;

    switch (opc){
    case 1: 
        cout<<"Introduce un numero: "; cin>>cubo;
        rc=pow(cubo,3);
        cout<<"El cubo de: "<<cubo<<" Es: "<<rc;
    break;
    case 2: 
        cout<<"Inserta un numero: "; cin>>num;
        if(num%2==0){
            cout<<"El numero es par";
        }else{
            cout<<"El numero es impar";
        }
    break;
    case 3: ; break;
    }

    return 0;
}