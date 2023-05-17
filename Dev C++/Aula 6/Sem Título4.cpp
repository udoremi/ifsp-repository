#include <iostream>
#include <string.h>
#include <locale.h>
using namespace std;

//
int main(){
	setlocale(LC_ALL,"Portuguese");

	int contador,n, num=0, soma=0;
	
	cout<<"Digite a quantidade de números que você deseja somar: ";
	cin>>n;
	
	while(contador!=n){
		cout<<"\nDigite um número: ";
		cin>>num;
		soma = soma + num;
		contador++;
		
	}
	cout<<"\nA soma dos números é: "<<soma;
	return 0;
}
