#include <iostream>
#include <string.h>
#include <locale.h>
using namespace std;

//fa�a um programa que receba 2 n�meros reais e mostre a divis�o do primeiro pelo segundo. Se o 2� for igual a zero, mostrar "divis�o impossivel"
//Repetir 5 vezes; mostrar o resultado a cada itera��o
int main(){
	setlocale(LC_ALL,"Portuguese");

	float num,num2;
	int i;
	
	for(i=1;i<=5;i++){
	cout<<"Digite o primeiro n�mero: ";
	cin>>num;
	cout<<"\nDigite o segundo n�mero: ";
	cin>>num2;
	
	num = num / num2;
	
	if(num2==0){
		cout<<"Divis�o imposs�vel.\n";
	}
	else{
		cout<<"\nO resultado �: "<<num<<". \n";
	}
	system("PAUSE");
	}

	return 0;
}
