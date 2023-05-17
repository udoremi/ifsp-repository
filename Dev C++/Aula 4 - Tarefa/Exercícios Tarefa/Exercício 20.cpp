#include <iostream>
using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int angulo;
	
	cout<<"Escreva um ângulo entre 1 e 360 graus: ";
	cin>>angulo;

	if(angulo>=1&&angulo<=90){
		cout<<"\nQuadrante 1";
	}
	else if(angulo>=91&&angulo<=180){
		cout<<"\nQuadrante 2";
	}
	else if(angulo>=181&&angulo<=270){
		cout<<"\nQuadrante 3";
	}
	else if(angulo>=271&&angulo<=360){
		cout<<"\nQuadrante 4";
	}
	else{
		cout<<"Ângulo inválido";
	}

	return 0;
}
