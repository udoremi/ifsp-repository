#include <iostream>
#include <string.h>
#include <locale.h>
using namespace std;

//fa�a um programa que mostre na tela os n�meros �mpares de 0 at� 80 e a m�dia dos n�meros pares
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
	cout<<"\nA m�dia dos pares �: "<<mediapar/41<<".";
	return 0;
}
