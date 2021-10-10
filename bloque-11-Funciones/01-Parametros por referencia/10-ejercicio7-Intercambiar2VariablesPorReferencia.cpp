/*
    -Intercambiar el valor de 2 variables 
    -Utilizando paso de parameteros por referencia
*/

#include <iostream>
using namespace std; 

void Intercambiar(int&, int&);

int main(){
    int num1, num2;
    cout<<"introduce 1 numeros: ";
    cin>>num1;
    cout<<"Introduce otro numero: ";
    cin>>num2;
    Intercambiar(num1, num2);

    cout<<"n1: "<<num1<<endl;
    cout<<"n2: "<<num2;
   return 0;

}

void Intercambiar(int& n1, int& n2){
    int aux;
    aux = n1;
    n1 = n2;
    n2 = aux;
    // cout<<"N1: "<<n1<<endl;
    // cout<<"N2: "<<n2<<endl;
}
