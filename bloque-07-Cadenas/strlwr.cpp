// PAsa una palabra a minuscula - Funcion strlwr()
#include <iostream>
#include <string.h>
using namespace std;

int main(){

    char palabra[] = "PASANDO A MINISCULA";
    strlwr(palabra);
    cout<<palabra<<endl;

    return 0;
}