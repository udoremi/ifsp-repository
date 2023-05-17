// faça um programa que receba o preço de um produto
// depois que receba a quantidade que foi comprada do produto
// Em seguida mostre: o preço digitado, a quantidade digitada, o valor total a pagar
#include <iostream>
using namespace std;
int main(){
    float preco, quantidade;
	cout<<"Informe o preço do produto: ";
	cin>>preco;
	cout<<"Informe a quantidade comprada: ";
	cin>>quantidade;
	cout<<"O valor total é: "<<preco*quantidade;
	
	
	return 0;
}
