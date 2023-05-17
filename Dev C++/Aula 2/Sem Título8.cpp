/* Uma revendedora de carros usados paga a seus funcionários vendedores um salário fixo
por mês mais 5% sobre o valor das vendas efetuadas. Escreva um programa que receba o valor do salário;
receba o valor total de carros vendidos pelo vendedor
calcule e mostre o salário final */
#include <iostream>
using namespace std;
int main(){
	float salario, totalcar;
	cout<<"Digite o valor do salário: ";
	cin>>salario;
	cout<<"Digite o valor total dos carros: ";
	cin>>totalcar;
	cout<<"O salário final do vendedor é: "<<salario + totalcar*5/100;
	
	return 0;
	
	
}
