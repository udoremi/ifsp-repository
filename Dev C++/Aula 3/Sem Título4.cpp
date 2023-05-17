//faça um programa que receba dois números e mostre o maior
#include <iostream>
using namespace std;
int main(){
	
int num,num2;
cout<<"Escreva um numero: ";
cin>>num;
cout<<"\nEscreva outro numero: ";	
cin>>num2;
	
if(num>num2){
	cout<<"\nO numero "<<num<<" eh maior que "<<num2<<"";
}	
	else{
		cout<<"\nO numero "<<num2<<" eh maior que "<<num<<"";
	}
	
	return 0;
}
