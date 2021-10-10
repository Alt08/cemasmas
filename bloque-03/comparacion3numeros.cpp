#include <iostream>
using namespace std;
/*
 PEDIR 3 NUMEROS Y OBTENER EL MAYOR
*/

int main(){
    int a,b,c;
    cout<<"digita 3 numeros: "; cin>>a>>b>>c;

    if(a>=b && b>=c){
        cout<<"a es mayor b y c";
    }else if(b>=a && b>=c){
        cout<<"b es mayor a a y c";
    }else{
        cout<<"c es mayor a a y b";
    }
    
    
    return 0;
}