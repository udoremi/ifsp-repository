#include <iostream>
using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	float num, num2;
	
	
	cout<<"Escreva o primeiro n�mero: ";
	cin>>num;
	cout<<"Escreva o segundo n�mero: ";
	cin>>num2;
	
	if(num>num2){
	cout<<"O n�mero "<<num<<" � maior que o "<<num2;
}
	else if(num2>num)
	cout<<"O n�mero "<<num2<<" � maior que o "<<num;
	return 0;	
	
}
