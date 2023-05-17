// faça um programa que leia a idade de uma pessoa expressa em anos, e mostrea idade
// dessa pessoa em dias
// considere que o ano tem 365 dias
#include <iostream>
using namespace std;
int main(){
	float anos, dias;
	cout<<"Digite a idade em anos: ";
	cin>>anos;
	dias=anos*365;
	cout<<"A idade em dias é: "<<dias;
	
	return 0;
}
