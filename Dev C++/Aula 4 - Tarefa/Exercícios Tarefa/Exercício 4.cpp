#include <iostream>
using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	float num1, num2, num3;
	cout<<"Digite o primeiro n�mero: ";
	cin>>num1;
	cout<<"Digite o segundo n�mero: ";
	cin>>num2;
	cout<<"Digite o terceiro n�mero: ";
	cin>>num3;
	
	if((num1>num2)&&(num1>num3)&&(num2>num3)){
	
		cout<<"O n�mero "<<num1<<" � maior que "<<num2<<" que � maior que "<<num3;
	}
	else if((num1>num2)&&(num1>num3)&&(num2<num3)){
		
	    cout<<"O n�mero "<<num1<<" � maior que "<<num3<<" que � maior que "<<num2;	
	}
	else if((num2>num1)&&(num2>num3)&&(num1>num3)){
		
		cout<<"O n�mero "<<num2<<" � maior que "<<num1<<" que � maior que "<<num3;
    }
	else if((num2>num1)&&(num2>num3)&&(num1<num3)){
		
		cout<<"O n�mero "<<num2<<" � maior que "<<num3<<" que � maior que "<<num1;
	}
	else if((num3>num1)&&(num3>num2)&&(num1>num2)){
	
	cout<<"O n�mero "<<num3<<" � maior que "<<num1<<" que � maior que "<<num2;
	}
	else if((num3>num1)&&(num3>num2)&&(num1<num2)){
		
	cout<<"O n�mero "<<num3<<" � maior que "<<num2<<" que � maior que "<<num1;
	}
	
	
	
	system("PAUSE");
	return 0;
}
//123 132 213 231 312 321	
	
