// MEtodo de ordenamineto por insercion
#include <iostream>
using namespace std;

int main(){
    int numeros[] = {4,2,3,1,5};
    int i, pos, aux;

    cout<<endl;
    for(i=0; i<5; i++){
        pos = i; //Posicion del arreglo
        aux = numeros[i]; // Guarda el elemnto del arreglo

        while((pos > 0) && (numeros[pos-1] > aux)){
            numeros[pos] = numeros[pos-1]; //numero en pos 0 sera igual a el elemento de la izquierda
            pos--; //Ira decrementando en 1
        }
            
        numeros[pos] = aux; //Numero en la posicion "n" ser igual a aux
    } 

    // Imprimiedo los numeros ordenados
    cout<<"Orden Ascendente "<<endl;
    for(i=0; i<5; i++){
        cout<<numeros[i]<<" ";
    }
    // Imprimiendo en orden Descendente
    cout<<"\nOrden Descendente "<<endl;
    for(i=4; i>=0; i--){
        cout<<numeros[i]<<" ";
    }

    cout<<endl;
    return 0;
}