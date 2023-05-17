#include <iostream>
using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	float num1, num2, num3;
	cout<<"Digite o primeiro número: ";
	cin>>num1;
	cout<<"Digite o segundo número: ";
	cin>>num2;
	cout<<"Digite o terceiro número: ";
	cin>>num3;
	
	if((num1>num2)&&(num1>num3)&&(num2>num3)){
	
		cout<<"O número "<<num1<<" é maior que "<<num2<<" que é maior que "<<num3;
	}
	else if((num1>num2)&&(num1>num3)&&(num2<num3)){
		
	    cout<<"O número "<<num1<<" é maior que "<<num3<<" que é maior que "<<num2;	
	}
	else if((num2>num1)&&(num2>num3)&&(num1>num3)){
		
		cout<<"O número "<<num2<<" é maior que "<<num1<<" que é maior que "<<num3;
    }
	else if((num2>num1)&&(num2>num3)&&(num1<num3)){
		
		cout<<"O número "<<num2<<" é maior que "<<num3<<" que é maior que "<<num1;
	}
	else if((num3>num1)&&(num3>num2)&&(num1>num2)){
	
	cout<<"O número "<<num3<<" é maior que "<<num1<<" que é maior que "<<num2;
	}
	else if((num3>num1)&&(num3>num2)&&(num1<num2)){
		
	cout<<"O número "<<num3<<" é maior que "<<num2<<" que é maior que "<<num1;
	}
	
	
	
	system("PAUSE");
	return 0;
}
//123 132 213 231 312 321	
	
