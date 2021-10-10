#include <iostream>
using namespace std;
/*
    Determinar si un numero par o impar
*/
int main(){
    int num;
    cout<<"Digite un numero: "; cin>>num;
    if (num%2 == 0){
        cout<<"El numero es par";
    }else{
        cout<<"El numero es impar";
    }
    
    return 0;
        
}