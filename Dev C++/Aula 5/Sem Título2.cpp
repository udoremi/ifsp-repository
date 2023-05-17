#include <iostream>
#include <string.h>
#include <locale.h>
using namespace std;

//criar um programa com laço de repetição 7 vezes, cada vez pedir para digitar um número inteiro e mostrar o núm digitado em seguida
int main(){
	setlocale(LC_ALL,"Portuguese");

	int i, num;
	for(i=1;i<=7;i++){
	cout<<"Digite um número inteiro: ";
	cin>>num;
	cout<<"\nNúmero digitado: "<<num<<". \n";
	//system("PAUSE");	
	}


	return 0;
}
