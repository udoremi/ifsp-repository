#include <iostream>
using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");

	float sal, imposto, novosal, classif;
	int escolha;
	
	cout<<"Digite 1 para valor do imposto";
	cout<<"\nDigite 2 para valor do novo salário";
	cout<<"\nDigite 3 para a classificação\n";
	cin>>escolha;
	
	if(escolha==1){
		cout<<"Digite o salário: \n";
		cin>>sal;
			
	if(sal<500){
		cout<<"O valor do imposto é de 5%\n";
		imposto = sal * 0.95;
		cout<<"O valor descontado do imposto será: "<<imposto;
	}	
	else if(sal>=500&&sal<=850){
		cout<<"O valor do imposto é de 10%\n";
		imposto = sal * 0.90;
		cout<<"O valor descontado do imposto será: "<<imposto;
	}	
	else if(sal>850){
		cout<<"O valor do imposto é de 15%\n";
		imposto = sal * 0.85;
		cout<<"O valor descontado do imposto será: "<<imposto;
	}			
	}
	
	if(escolha==2){
		cout<<"Digite o salário: \n";
		cin>>sal;
		
	if(sal>1500){
		cout<<"O valor do aumento é 25 reais\n";
		novosal = sal + 25;
		cout<<"O valor do novo salário é "<<novosal;
	}	
	else if(sal>=750&&sal<=1500){
		cout<<"O valor do aumento é 50 reais\n";
		novosal = sal + 50;
		cout<<"O valor do novo salário é "<<novosal;
	}	
	else if(sal>=450&&sal<750){
		cout<<"O valor do aumento é 75 reais\n";
		novosal = sal + 75;
		cout<<"O valor do novo salário é "<<novosal;
	}	
	else if(sal<450){
		cout<<"O valor do aumento é 100 reais\n";
		novosal = sal + 100;
		cout<<"O valor do novo salário é "<<novosal;
			
	}
	if(novosal<=700){
		cout<<"\nMal remunerado";
	}
	else if(novosal>700){
		cout<<"\nBem remunerado";
	}		
	}
	
	
	
	return 0;
}
