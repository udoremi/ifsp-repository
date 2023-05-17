#include <iostream>
#include <string.h>
#include <locale.h>
using namespace std;

//faça um programa que calcule o fatorial de um número inteiro fornecido pelo usuário
//entretanto, o número deve estar no intervalo entre 1 a 10
//dica: o fatorial é calculado como segue
//4! = 1.2.3.4 = 24
//6! = 1.2.3.4.5.6 = 720
int main(){
	setlocale(LC_ALL,"Portuguese");

	int  i=1, num, fat=1;
	
	cout<<"Digite um número a ser calculado: ";
	cin>>num;
	cout<<num<<" X ";
	
	while(i<=num){
		fat = fat * i;
				
		cout<<""<<(num-i)<<" X ";
	
		  num++;
		
	}

	cout<<" = "<<fat;

	return 0;
}
