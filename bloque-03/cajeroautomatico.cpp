#include <iostream>
using namespace std;

int main(){
    int saldo=1000,opc, deposito,saldofinal,retirar,sr;
    cout<<"\n1.- Consultar saldo \n2.- Depositar \n3.- Retirar \n4.- Salir"<<endl;
    cout<<"Elige una opcion: "; cin>>opc;

    switch (opc){
    case 1:
        cout<<"Tu saldo es: "<<saldo;
    break;
    case 2:
        cout<<"Cantidad a depositar: "; cin>>deposito;
        saldofinal=saldo+deposito;
        cout<<"Saldo disponible: "<<saldofinal;
    break;
    case 3:
        cout<<"Cantidad a retirar: "; cin>>retirar;
        sr=saldo-retirar;
        cout<<"Retiraste: "<<retirar<<endl;
        cout<<"Saldo disponible: "<<sr;
    break;
    
    default:
        break;
    }
    return 0;
}