#include <iostream>
using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int cod, origem;
	float peso, preco;

	cout<<"Digite o c�digo do produto (1 a 10): ";
	cin>>cod;
	cout<<"Digite o peso do produto em quilos: ";
	cin>>peso;
	cout<<"Digite o c�digo do pa�s de origem (1 a 3): ";
	cin>>origem;
	
	peso = peso * 1000;
	cout<<"\nO peso do produto em gramas �: "<<peso;
	
	if(origem==1){
		cout<<"\nN�o h� imposto a ser cobrado.";
	if(cod>=1&&cod<=4){
		preco = peso * 10;
		cout<<"\nO valor �: R$ "<<preco;
	}	
	else if(cod>=5&&cod<=7){
		preco = peso * 25;
		cout<<"\nO valor �: R$ "<<preco;
	}	
	else if(cod>=8&&cod<=10){
		preco = peso * 35;
		cout<<"\nO valor �: R$ "<<preco;
	}
	else{
		cout<<"\nC�digo de produto inv�lido.";
	}	
	}
	if(origem==2){
		cout<<"\nO imposto � de 15%.";
	if(cod>=1&&cod<=4){
		preco = (peso * 10) * 1.15;
		cout<<"\nO valor �: R$ "<<preco;
	}	
	else if(cod>=5&&cod<=7){
		preco = (peso * 25) * 1.15;
		cout<<"\nO valor �: R$ "<<preco;
	}	
	else if(cod>=8&&cod<=10){
		preco = (peso * 35) * 1.15;
		cout<<"\nO valor �: R$ "<<preco;
	}
	else{
		cout<<"\nC�digo de produto inv�lido.";
	}	
	}
	if(origem==3){
		cout<<"\nO imposto � de 25%.";
	if(cod>=1&&cod<=4){
		preco = (peso * 10) * 1.25;
		cout<<"\nO valor �: R$ "<<preco;
	}	
	else if(cod>=5&&cod<=7){
		preco = (peso * 25) * 1.25;
		cout<<"\nO valor �: R$ "<<preco;
	}	
	else if(cod>=8&&cod<=10){
		preco = (peso * 35) * 1.25;
		cout<<"\nO valor �: R$ "<<preco;
	}
	else{
		cout<<"\nC�digo de produto inv�lido.";
	}	
	}

	return 0;
}
