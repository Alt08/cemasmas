#include <iostream>
#include <conio.h>
using namespace std;

int main(){
    int numero, contador;
    do{
        cout<<"Introduce un numero: "; cin>>numero;
        if(numero>0){
            contador++;
        }
    }while(numero!=0);
    cout<<"Numeros mayores de 0 encontrados son: "<<contador<<endl;

    getch();
    return 0;
}