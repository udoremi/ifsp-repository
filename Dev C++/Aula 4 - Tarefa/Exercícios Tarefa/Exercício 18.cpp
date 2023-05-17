#include <iostream>
using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");

	int cod, origem;
	float peso, preco;

	cout<<"Digite o código da carga (10 a 40): ";
	cin>>cod;
	cout<<"Digite o peso do produto em toneladas: ";
	cin>>peso;
	cout<<"Digite o código do estado de origem (1 a 5): ";
	cin>>origem;
	
	peso = peso * 1000;
	cout<<"\nO peso do produto em quilos é: "<<peso;
	
	if(origem==1){
		cout<<"\nO imposto é de 35%.";
	if(cod>=10&&cod<=20){
		preco = (peso * 100) * 1.35;
		cout<<"\nO valor é: R$ "<<preco;
	}	
	else if(cod>=21&&cod<=30){
		preco = (peso * 250) * 1.35;
		cout<<"\nO valor é: R$ "<<preco;
	}	
	else if(cod>=31&&cod<=40){
		preco = (peso * 340) * 1.35;
		cout<<"\nO valor é: R$ "<<preco;
	}
	else{
		cout<<"\nCódigo de produto inválido.";
	}
	}	
	
	if(origem==2){
		cout<<"\nO imposto é de 25%.";
	if(cod>=10&&cod<=20){
		preco = (peso * 100) * 1.25;
		cout<<"\nO valor é: R$ "<<preco;
	}	
	else if(cod>=21&&cod<=30){
		preco = (peso * 250) * 1.25;
		cout<<"\nO valor é: R$ "<<preco;
	}	
	else if(cod>=31&&cod<=40){
		preco = (peso * 340) * 1.25;
		cout<<"\nO valor é: R$ "<<preco;
	}
	else{
		cout<<"\nCódigo de produto inválido.";
	}	
	}
	if(origem==3){
		cout<<"\nO imposto é de 15%.";
	if(cod>=10&&cod<=20){
		preco = (peso * 100) * 1.15;
		cout<<"\nO valor é: R$ "<<preco;
	}	
	else if(cod>=21&&cod<=30){
		preco = (peso * 250) * 1.15;
		cout<<"\nO valor é: R$ "<<preco;
	}	
	else if(cod>=31&&cod<=40){
		preco = (peso * 340) * 1.15;
		cout<<"\nO valor é: R$ "<<preco;
	}
	else{
		cout<<"\nCódigo de produto inválido.";
	}	
	}
	if(origem==4){
		cout<<"\nO imposto é de 5%.";
	if(cod>=10&&cod<=20){
		preco = (peso * 100) * 1.05;
		cout<<"\nO valor é: R$ "<<preco;
	}	
	else if(cod>=21&&cod<=30){
		preco = (peso * 250) * 1.05;
		cout<<"\nO valor é: R$ "<<preco;
	}	
	else if(cod>=31&&cod<=40){
		preco = (peso * 340) * 1.05;
		cout<<"\nO valor é: R$ "<<preco;
	}
	else{
		cout<<"\nCódigo de produto inválido.";
	}	
	}
	if(origem==5){
		cout<<"\nNão há imposto a ser cobrado.";
	if(cod>=10&&cod<=20){
		preco = (peso * 100);
		cout<<"\nO valor é: R$ "<<preco;
	}	
	else if(cod>=21&&cod<=30){
		preco = (peso * 250);
		cout<<"\nO valor é: R$ "<<preco;
	}	
	else if(cod>=31&&cod<=40){
		preco = (peso * 340);
		cout<<"\nO valor é: R$ "<<preco;
	}
	else{
		cout<<"\nCódigo de produto inválido.";
	}
	}	
	
	return 0;
}
