#include <iostream>
#include <string.h>
#include <locale.h>
using namespace std;

//faça um programa que o usuario deva digitar 7 numeros inteiros e entao mostrar o valor total da soma dos nmrs digitados
int main(){
	setlocale(LC_ALL,"Portuguese");

	int i, num,soma=0;
	for(i=1;i<=7;i++){
		cout<<"Digite um número inteiro: ";
		cin>>num;
		
	soma = soma + num;
	 	
	}
		cout<<"\nA soma dos números é: "<<soma;
		
	return 0;
}
