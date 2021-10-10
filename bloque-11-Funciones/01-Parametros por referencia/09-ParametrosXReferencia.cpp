//Paso de parametros por referencia
#include <iostream>
using namespace std;

void valNuevo(int&, int&);
int main(){
    int n1, n2;

    cout<<"Introduce 2 numeros: ";
    cin>>n1>>n2;

    valNuevo(n1, n2);


    return 0;
}

void valNuevo(int& xnum, int& ynum){
    cout<<"El primer n es: "<<xnum<<endl;
    cout<<"El segundo n es: "<<ynum<<endl;
}
