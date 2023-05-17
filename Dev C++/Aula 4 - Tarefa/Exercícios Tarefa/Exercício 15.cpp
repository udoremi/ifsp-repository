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
		cout<<"\nEsse triângulo é equilátero.";
	}
	else if(x==y||x==z||y==z){
		cout<<"\nEsse triângulo é isósceles.";
	}
	else if(x!=y||x!=z||y!=z){
		cout<<"\nEsse triângulo é escaleno.";
	}

	return 0;
}
