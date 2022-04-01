#include <iostream>
#include <conio.h>
using namespace std;

int main(){
    int numero, suma;
    do{
        cout<<"Introduce un numero: "; cin>>numero;
        if (numero>0){
            suma=suma+numero;
        }
        
    } while (numero<20 || numero>30 && numero!=0);
    cout<<"La suma es: "<<suma<<endl;
        

}