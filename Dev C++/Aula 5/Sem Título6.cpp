#include <iostream>
#include <string.h>
#include <locale.h>
using namespace std;

//um professor precisa calcular a media aritmetica de 4 notas. As notas de cada prova variam de 0 a 10. Fa�a um programa utilizando
//la�o de repeti��o que receba as 4 notas e mostre a m�dia 
int main(){
	setlocale(LC_ALL,"Portuguese");
	
	float nota, soma;
	int i;
	
	for(i=1;i<=4;i++){
		cout<<"Digite a nota "<<i<<": ";
		cin>>nota;
		
		soma = soma + nota;
	}

	cout<<"A m�dia �: "<<soma/4;

	return 0;
}
