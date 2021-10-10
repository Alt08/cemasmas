#include <iostream>
using namespace std;

int main(){
	int valor;
	cout<<"dame un numero: ";
	cin>>valor;
	
	for(int i=0; i<valor;i++){
		cout<<"El valor es "<<i<<endl;
		if(i==3){
			cout << "Encontramos el numero 3"<<endl;
		}
	}

}
