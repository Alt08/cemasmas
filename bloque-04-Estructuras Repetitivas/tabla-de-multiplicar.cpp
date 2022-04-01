#include <iostream>
using namespace std;

int main(){
    int numero;
    char opcion;

    do{
        cout<<"Introduce un numero: "; cin>>numero;
        for(int i=1; i<=10; i++){
            cout<<numero<<" * "<<i<<" = "<<numero*i<<endl;
        }
        cout<<"Quieres otra tabla: "; cin>>opcion;
    }while(opcion=='s');
    return 0;
}