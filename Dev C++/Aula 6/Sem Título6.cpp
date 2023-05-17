#include <iostream>
#include <string.h>
#include <locale.h>
using namespace std;

//faça um programa que mostre na tela os números ímpares de 0 até 80 e a média dos números pares
int main(){
	setlocale(LC_ALL,"Portuguese");

	int i=0, mediapar=0;
	
	while(i<=80){
		if(i%2==0){
			mediapar = mediapar + i;
			
		}
		else{
			cout<<i<<", ";
		}
		i++;

	}
	cout<<"\nA média dos pares é: "<<mediapar/41<<".";
	return 0;
}
