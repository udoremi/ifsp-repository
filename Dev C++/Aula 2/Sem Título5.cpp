// fa�a um programa que receba o pre�o de um produto
// depois que receba a quantidade que foi comprada do produto
// Em seguida mostre: o pre�o digitado, a quantidade digitada, o valor total a pagar
#include <iostream>
using namespace std;
int main(){
    float preco, quantidade;
	cout<<"Informe o pre�o do produto: ";
	cin>>preco;
	cout<<"Informe a quantidade comprada: ";
	cin>>quantidade;
	cout<<"O valor total �: "<<preco*quantidade;
	
	
	return 0;
}
