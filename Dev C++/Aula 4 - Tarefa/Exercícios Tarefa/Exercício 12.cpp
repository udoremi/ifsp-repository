#include <iostream>
using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	float sal,novosal,aux;
	
	cout<<"Digite o salário inicial: \n";
	cin>>sal;
	
	if (sal<=600){
		aux = novosal + 150;
	}
	else if(sal>600){
		aux = novosal + 100;
	}
	
	if(sal<500){
		cout<<"A bonificação é de 5%\n";
		novosal = sal * 1.05;
		cout<<"O novo salário é: "<<novosal + aux;
	}
	if(sal>=500&&sal<=1200){
		cout<<"A bonificação é de 12%\n";
		novosal = sal * 1.12;
		cout<<"O novo salário é: "<<novosal + aux;
	}
	if(sal>1200){
		cout<<"Não há bonificação.\n";
		cout<<"O novo salário é: "<<sal + aux;
	}

	return 0;
}
