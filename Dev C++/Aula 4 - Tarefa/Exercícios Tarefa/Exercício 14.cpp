#include <iostream>
using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");

	float precoa,novopreco;
	int vendam;
	
	cout<<"Digite o pre�o atual do produto: \n";
	cin>>precoa;
	cout<<"Digite a venda m�dia mensal do produto: \n";
	cin>>vendam;

	if(vendam<500||precoa<30){
		cout<<"A porcentagem de aumento � de 10%\n";
		novopreco = precoa * 1.10;
		cout<<"O novo pre�o �: "<<novopreco;
	}
	else if(vendam>=500&&vendam<=1200||precoa>=30&&precoa<80){
		cout<<"A porcentagem de aumento � de 15%\n";
		novopreco = precoa * 1.15;
		cout<<"O novo pre�o �: "<<novopreco;
	}
	else if(vendam>1200||precoa>=80){
		cout<<"A porcentagem de diminui��o � de 20%\n";
		novopreco = precoa * 0.80;
		cout<<"O novo pre�o �: "<<novopreco;
	}

	return 0;
}
