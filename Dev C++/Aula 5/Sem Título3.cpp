#include <iostream>
#include <string.h>
#include <locale.h>
using namespace std;

//faça um programa que receba 2 números reais e mostre a divisão do primeiro pelo segundo. Se o 2º for igual a zero, mostrar "divisão impossivel"
//Repetir 5 vezes; mostrar o resultado a cada iteração
int main(){
	setlocale(LC_ALL,"Portuguese");

	float num,num2;
	int i;
	
	for(i=1;i<=5;i++){
	cout<<"Digite o primeiro número: ";
	cin>>num;
	cout<<"\nDigite o segundo número: ";
	cin>>num2;
	
	num = num / num2;
	
	if(num2==0){
		cout<<"Divisão impossível.\n";
	}
	else{
		cout<<"\nO resultado é: "<<num<<". \n";
	}
	system("PAUSE");
	}

	return 0;
}
