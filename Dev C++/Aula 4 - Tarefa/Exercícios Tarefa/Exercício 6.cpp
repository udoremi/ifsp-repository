#include <iostream>
using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");

	int num, parimpar;
	cout<<"Digite um n�mero inteiro: ";
	cin>>num;
	
	parimpar = num%2;
	
	if(parimpar==0){
		cout<<"O n�mero � par\n";
	}

	else if(parimpar!=0){
		cout<<"O n�mero � impar\n";
}
	system("PAUSE");
	return 0;
}
