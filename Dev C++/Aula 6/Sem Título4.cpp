#include <iostream>
#include <string.h>
#include <locale.h>
using namespace std;

//
int main(){
	setlocale(LC_ALL,"Portuguese");

	int contador,n, num=0, soma=0;
	
	cout<<"Digite a quantidade de n�meros que voc� deseja somar: ";
	cin>>n;
	
	while(contador!=n){
		cout<<"\nDigite um n�mero: ";
		cin>>num;
		soma = soma + num;
		contador++;
		
	}
	cout<<"\nA soma dos n�meros �: "<<soma;
	return 0;
}
