// escreva um algoritmo para ler uma temperatura em graus fahrenheit e mostrar o valor correspondente em graus celsius
// c/5 = F - 32/9
#include <iostream>
using namespace std;
int main(){
	float celsius, fah;
	cout<<"Digite uma temperatura em graus fahrenheit: ";
	cin>>fah;
	celsius = 5*(fah-32/9);
	cout<<"A temperatura em graus celsius é: "<<celsius;
	
	return 0;
	
}
