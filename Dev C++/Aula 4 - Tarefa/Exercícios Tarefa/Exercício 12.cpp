#include <iostream>
using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	float sal,novosal,aux;
	
	cout<<"Digite o sal�rio inicial: \n";
	cin>>sal;
	
	if (sal<=600){
		aux = novosal + 150;
	}
	else if(sal>600){
		aux = novosal + 100;
	}
	
	if(sal<500){
		cout<<"A bonifica��o � de 5%\n";
		novosal = sal * 1.05;
		cout<<"O novo sal�rio �: "<<novosal + aux;
	}
	if(sal>=500&&sal<=1200){
		cout<<"A bonifica��o � de 12%\n";
		novosal = sal * 1.12;
		cout<<"O novo sal�rio �: "<<novosal + aux;
	}
	if(sal>1200){
		cout<<"N�o h� bonifica��o.\n";
		cout<<"O novo sal�rio �: "<<sal + aux;
	}

	return 0;
}
