/*

    -Realice una funcion que tome como paratros de numeros enteros
    -Duvuelva la suma de sus elementos

*/
#include <iostream>
using namespace std;

void pedirDato();
int suma(int sumando[], int);

int tama;
int sumando[100];
int main(){
    pedirDato();
    cout<<"Suma: "<<suma(sumando, tama);
    return 0;
}

void pedirDato(){
    cout<<"Introduce una cantidad de datos: ";
    cin>>tama;
    for(int i=0; i<tama; i++){
        cout<<"Introduce los elementos del arreglo: ";
        cin>>sumando[i];
    }
}

int suma(int sumando[], int tama){
    int sumatoria = 0;
    for(int i=0; i<tama; i++){
        sumatoria += sumando[i];
    }
    return sumatoria;
}

