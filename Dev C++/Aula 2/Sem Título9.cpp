// faça um programa que receba um número qualquer e mostre em seguida:
//o valor do seu antecessor, o valor do número digitado e o valor de seu sucessor
#include <iostream>
using namespace std;
int main(){
	float num;
	cout<<"Digite um número: ";
	cin>>num;
	cout<<"O número antecessor deste é: "<<num - 1;
	cout<<"\nO número sucessor deste é: "<<num + 1;
	
	return 0;
	
}
