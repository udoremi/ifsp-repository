// fa�a um programa que receba um n�mero qualquer e mostre em seguida:
//o valor do seu antecessor, o valor do n�mero digitado e o valor de seu sucessor
#include <iostream>
using namespace std;
int main(){
	float num;
	cout<<"Digite um n�mero: ";
	cin>>num;
	cout<<"O n�mero antecessor deste �: "<<num - 1;
	cout<<"\nO n�mero sucessor deste �: "<<num + 1;
	
	return 0;
	
}
