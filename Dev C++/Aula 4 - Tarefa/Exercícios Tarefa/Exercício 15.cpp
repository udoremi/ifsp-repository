#include <iostream>
using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");

	int x,y,z;
	
	cout<<"Digite o primeiro tamanho: ";
	cin>>x;
	cout<<"Digite o segundo tamanho: ";
	cin>>y;
	cout<<"Digite o terceiro tamanho: ";
	cin>>z;

	if(x==y==z){
		cout<<"\nEsse tri�ngulo � equil�tero.";
	}
	else if(x==y||x==z||y==z){
		cout<<"\nEsse tri�ngulo � is�sceles.";
	}
	else if(x!=y||x!=z||y!=z){
		cout<<"\nEsse tri�ngulo � escaleno.";
	}

	return 0;
}
