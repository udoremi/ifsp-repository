#include <iostream>
using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");

	float precoa,novopreco;
	int vendam;
	
	cout<<"Digite o preço atual do produto: \n";
	cin>>precoa;
	cout<<"Digite a venda média mensal do produto: \n";
	cin>>vendam;

	if(vendam<500||precoa<30){
		cout<<"A porcentagem de aumento é de 10%\n";
		novopreco = precoa * 1.10;
		cout<<"O novo preço é: "<<novopreco;
	}
	else if(vendam>=500&&vendam<=1200||precoa>=30&&precoa<80){
		cout<<"A porcentagem de aumento é de 15%\n";
		novopreco = precoa * 1.15;
		cout<<"O novo preço é: "<<novopreco;
	}
	else if(vendam>1200||precoa>=80){
		cout<<"A porcentagem de diminuição é de 20%\n";
		novopreco = precoa * 0.80;
		cout<<"O novo preço é: "<<novopreco;
	}

	return 0;
}
