#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main(){
    int numero, contador, cuadrado,suma=0;
    do{
      cout<<"Introduce un numero: "; cin>>numero;
      if (numero>0){
            cuadrado=numero*numero;
            cout<<"El numero es: " <<numero<<" Cuadrado: "<<cuadrado<<endl;
            suma=suma+cuadrado;
            cout<<"La suma de los cuadrados es:  "<<suma<<endl;
            contador++;
        }else{
            cout<<"Debes introducir un numero mayor a 0"<<endl;
        }
    } while (contador<=9);
    
    getch();       
    return 0;
}