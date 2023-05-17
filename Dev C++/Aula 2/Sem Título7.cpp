/* o custo de um carro novo ao consumidor é a soma do custo de fábrica
mais a porcentagem do distribuidor e dos impostos (aplicado ao custo de fábrica)
supondo que o percentual do distribuidor seja 13%, e os impostos 18%, escreva um programa para ler:
custo de fábrica e mostrar o custo digitado, valor do percentual do distribuidor, valor do imposto
e valor total final
*/
#include <iostream>
using namespace std;
int main(){
	float custofab, percdist, imposto;
	cout<<"Informe o valor do custo de fábrica: ";
	cin>>custofab;
	cout<<"O custo de fábrica com o percentual do distribuidor é: "<<custofab*0.13;
	cout<<"O custo de fábrica com os impostos é: "<<custofab*0.18;
	
	imposto=custofab*0.18;
	percdist=custofab*0.13;
	
	cout<<"O valor final do produto é: "<<custofab+imposto+percdist;
	
	
	
	return 0;
}
