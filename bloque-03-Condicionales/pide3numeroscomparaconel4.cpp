#include <iostream>
using namespace std;

int main(){
    int a,b,c,d;

    cout<<"Introduce 3 numeros: "; cin>>a>>b>>c;
    cout<<"Introduce el numero a comparar: "; cin>>d;

    if((a==d) || (b==d) || (c==d)){
        cout<<"Hay una coincidencia en los numeros";
    }else{
        cout<<"Ningun numero coincide";
    }
    
    
}
