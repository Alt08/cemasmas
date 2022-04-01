#include <iostream>
using namespace std;

int main(){
    int edad;
    cout<<"Introduce una edad: "; cin>>edad;
    
    if (edad>=18 && edad<=25){
        cout<<"tu edad es: " << edad << " y esta en el rango de 18-25";
    }else{
        cout<<"tu edad esta fuera de rango";
    }
    
    
    return 0;
}