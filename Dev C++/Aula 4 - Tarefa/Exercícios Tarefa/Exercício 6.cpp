#include <iostream>
using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");

	int num, parimpar;
	cout<<"Digite um número inteiro: ";
	cin>>num;
	
	parimpar = num%2;
	
	if(parimpar==0){
		cout<<"O número é par\n";
	}

	else if(parimpar!=0){
		cout<<"O número é impar\n";
}
	system("PAUSE");
	return 0;
}
