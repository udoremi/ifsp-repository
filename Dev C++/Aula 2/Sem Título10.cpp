// fa�a um programa que receba as notas de 3 provas, calcule e mostre a m�dia aritm�tica
#include <iostream>
using namespace std;
int main(){
	float p1,p2,p3, mediaf;
	cout<<"Digite a nota da prova 1: ";
	cin>>p1;
	cout<<"Digite a nota da prova 2: ";
	cin>>p2;
	cout<<"Digite a nota da prova 3: ";
	cin>>p3;
	mediaf=(p1 +p2 +p3) / 3;
	cout<<"A m�dia final �: "<<mediaf;
	
	
	return 0;
	
}
