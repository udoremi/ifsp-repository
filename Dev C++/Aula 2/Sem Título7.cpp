/* o custo de um carro novo ao consumidor � a soma do custo de f�brica
mais a porcentagem do distribuidor e dos impostos (aplicado ao custo de f�brica)
supondo que o percentual do distribuidor seja 13%, e os impostos 18%, escreva um programa para ler:
custo de f�brica e mostrar o custo digitado, valor do percentual do distribuidor, valor do imposto
e valor total final
*/
#include <iostream>
using namespace std;
int main(){
	float custofab, percdist, imposto;
	cout<<"Informe o valor do custo de f�brica: ";
	cin>>custofab;
	cout<<"O custo de f�brica com o percentual do distribuidor �: "<<custofab*0.13;
	cout<<"O custo de f�brica com os impostos �: "<<custofab*0.18;
	
	imposto=custofab*0.18;
	percdist=custofab*0.13;
	
	cout<<"O valor final do produto �: "<<custofab+imposto+percdist;
	
	
	
	return 0;
}
