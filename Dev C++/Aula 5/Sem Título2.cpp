#include <iostream>
#include <string.h>
#include <locale.h>
using namespace std;

//criar um programa com la�o de repeti��o 7 vezes, cada vez pedir para digitar um n�mero inteiro e mostrar o n�m digitado em seguida
int main(){
	setlocale(LC_ALL,"Portuguese");

	int i, num;
	for(i=1;i<=7;i++){
	cout<<"Digite um n�mero inteiro: ";
	cin>>num;
	cout<<"\nN�mero digitado: "<<num<<". \n";
	//system("PAUSE");	
	}


	return 0;
}
