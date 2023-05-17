#include <iostream>
using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	float num, num2;
	
	
	cout<<"Escreva o primeiro número: ";
	cin>>num;
	cout<<"Escreva o segundo número: ";
	cin>>num2;
	
	if(num>num2){
	cout<<"O número "<<num<<" é maior que o "<<num2;
}
	else if(num2>num)
	cout<<"O número "<<num2<<" é maior que o "<<num;
	return 0;	
	
}
