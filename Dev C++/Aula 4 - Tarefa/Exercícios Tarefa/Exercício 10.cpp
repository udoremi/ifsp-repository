#include <iostream>
using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");

	int cod;
	float sal, aumento;
	
	cout<<"1 - Escrituário";
	cout<<"\n2 - Secretário";
	cout<<"\n3 - Caixa";
	cout<<"\n4 - Gerente";
	cout<<"\n5 - Diretor\n";
	cout<<"Digite o código do cargo: ";
	cin>>cod;
	cout<<"\nDigite o salário base do funcionário: ";
	cin>>sal;

	if(cod==1){
		cout<<"\nCargo: Escrituário. O aumento é de 50%.\n";
		aumento = sal * 1.50;
		cout<<"O salário final é: R$"<<aumento;
	}
	else if(cod==2){
		cout<<"\nCargo: Secretário. O aumento é de 35%.\n";
		aumento = sal * 1.35;
		cout<<"O salário final é: R$"<<aumento;
	}
	else if(cod==3){
		cout<<"\nCargo: Caixa. O aumento é de 20%.\n";
		aumento = sal * 1.20;
		cout<<"O salário final é: R$"<<aumento;
	}
	else if(cod==4){
		cout<<"\nCargo: Gerente. O aumento é de 10%.\n";
		aumento = sal * 1.10;
		cout<<"O salário final é: R$"<<aumento;
	}
	else if(cod==5){
		cout<<"\nCargo: Diretor. Não há aumento.";
		cout<<"\nO salário final é: R$"<<sal;
	}
	else{
		cout<<"Código Inválido.";
	}

	return 0;
}
