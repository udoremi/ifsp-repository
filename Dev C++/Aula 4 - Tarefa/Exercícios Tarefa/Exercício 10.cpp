#include <iostream>
using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");

	int cod;
	float sal, aumento;
	
	cout<<"1 - Escritu�rio";
	cout<<"\n2 - Secret�rio";
	cout<<"\n3 - Caixa";
	cout<<"\n4 - Gerente";
	cout<<"\n5 - Diretor\n";
	cout<<"Digite o c�digo do cargo: ";
	cin>>cod;
	cout<<"\nDigite o sal�rio base do funcion�rio: ";
	cin>>sal;

	if(cod==1){
		cout<<"\nCargo: Escritu�rio. O aumento � de 50%.\n";
		aumento = sal * 1.50;
		cout<<"O sal�rio final �: R$"<<aumento;
	}
	else if(cod==2){
		cout<<"\nCargo: Secret�rio. O aumento � de 35%.\n";
		aumento = sal * 1.35;
		cout<<"O sal�rio final �: R$"<<aumento;
	}
	else if(cod==3){
		cout<<"\nCargo: Caixa. O aumento � de 20%.\n";
		aumento = sal * 1.20;
		cout<<"O sal�rio final �: R$"<<aumento;
	}
	else if(cod==4){
		cout<<"\nCargo: Gerente. O aumento � de 10%.\n";
		aumento = sal * 1.10;
		cout<<"O sal�rio final �: R$"<<aumento;
	}
	else if(cod==5){
		cout<<"\nCargo: Diretor. N�o h� aumento.";
		cout<<"\nO sal�rio final �: R$"<<sal;
	}
	else{
		cout<<"C�digo Inv�lido.";
	}

	return 0;
}
