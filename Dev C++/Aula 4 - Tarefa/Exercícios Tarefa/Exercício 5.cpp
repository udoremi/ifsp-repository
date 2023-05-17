#include <iostream>
using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	float num1,num2,num3,num4;
	cout<<"Escreva o primeiro número em ordem crescente: ";
	cin>>num1;
	cout<<"Escreva o segundo número em ordem crescente: ";
	cin>>num2;
	cout<<"Escreva o terceiro número em ordem crescente: ";
	cin>>num3;
	cout<<"Escreva o quarto número(sem regra de ordem): ";
	cin>>num4;

	if(num4 < num1){
    cout<< num3 << " " <<  num2 << " " <<  num1 << " " << num4;
}
	else if(num4 < num2){
    cout<< num3<< " " <<  num2 << " " <<  num4 << " " << num1;
}
	else if(num4 < num3){
	
    cout<< num3 << " " <<  num4 << " " <<  num2 << " " << num1;
}
	else{
    cout<< num4 << " " <<  num3 << " " <<  num2 << " " << num1;
}


	return 0;
}
//4321 3421 3241 3214
