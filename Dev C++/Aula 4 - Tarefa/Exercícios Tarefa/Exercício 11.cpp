#include <iostream>
using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");

	float sal, imposto, novosal, classif;
	int escolha;
	
	cout<<"Digite 1 para valor do imposto";
	cout<<"\nDigite 2 para valor do novo sal�rio";
	cout<<"\nDigite 3 para a classifica��o\n";
	cin>>escolha;
	
	if(escolha==1){
		cout<<"Digite o sal�rio: \n";
		cin>>sal;
			
	if(sal<500){
		cout<<"O valor do imposto � de 5%\n";
		imposto = sal * 0.95;
		cout<<"O valor descontado do imposto ser�: "<<imposto;
	}	
	else if(sal>=500&&sal<=850){
		cout<<"O valor do imposto � de 10%\n";
		imposto = sal * 0.90;
		cout<<"O valor descontado do imposto ser�: "<<imposto;
	}	
	else if(sal>850){
		cout<<"O valor do imposto � de 15%\n";
		imposto = sal * 0.85;
		cout<<"O valor descontado do imposto ser�: "<<imposto;
	}			
	}
	
	if(escolha==2){
		cout<<"Digite o sal�rio: \n";
		cin>>sal;
		
	if(sal>1500){
		cout<<"O valor do aumento � 25 reais\n";
		novosal = sal + 25;
		cout<<"O valor do novo sal�rio � "<<novosal;
	}	
	else if(sal>=750&&sal<=1500){
		cout<<"O valor do aumento � 50 reais\n";
		novosal = sal + 50;
		cout<<"O valor do novo sal�rio � "<<novosal;
	}	
	else if(sal>=450&&sal<750){
		cout<<"O valor do aumento � 75 reais\n";
		novosal = sal + 75;
		cout<<"O valor do novo sal�rio � "<<novosal;
	}	
	else if(sal<450){
		cout<<"O valor do aumento � 100 reais\n";
		novosal = sal + 100;
		cout<<"O valor do novo sal�rio � "<<novosal;
			
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
