/*
    -Una platilla de funcion llamado maximo()
    -Que devuelva el valor maximo de tres argumentos que se transmitan a la funcion maximo()
    -Suponga que los 3 argumentos sean del mismo tipo
*/

#include <iostream>
using namespace std;


template <class tipoDato>
//Cuando se devuelve iniciamos la funcion con el nombre que asignamos a la plantilla
tipoDato maximo(tipoDato n1, tipoDato n2, tipoDato n3);

float a, b, c;

int main(){
    cout<<"Introduce el primer numero: ";
    cin>>a;
    cout<<"Introduce el segundo numero: ";
    cin>>b;
    cout<<"Introduce el tercer numero: ";
    cin>>c;

    cout<<"EL maximo es: "<<maximo(a,b,c)<<endl;

    return 0;
}

template <class tipoDato>
tipoDato maximo(tipoDato n1, tipoDato n2, tipoDato n3){
    tipoDato mayor;

    if( (n1 > n2) && (n1 > n3)){
        mayor = n1;
    }else{
        if((n2 > n3) && (n2 > n3)){
            mayor = n2;
        }else{
            mayor = n3;
        }
    }

    return mayor;
}
