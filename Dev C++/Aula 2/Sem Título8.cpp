/* Uma revendedora de carros usados paga a seus funcion�rios vendedores um sal�rio fixo
por m�s mais 5% sobre o valor das vendas efetuadas. Escreva um programa que receba o valor do sal�rio;
receba o valor total de carros vendidos pelo vendedor
calcule e mostre o sal�rio final */
#include <iostream>
using namespace std;
int main(){
	float salario, totalcar;
	cout<<"Digite o valor do sal�rio: ";
	cin>>salario;
	cout<<"Digite o valor total dos carros: ";
	cin>>totalcar;
	cout<<"O sal�rio final do vendedor �: "<<salario + totalcar*5/100;
	
	return 0;
	
	
}
