#include <iostream>
#include <string.h>
#include <locale.h>
using namespace std;

//faça um programa que mostre todos os numeros divisiveis por 3, no intervalo de 50 a 200 
int main(){
	setlocale(LC_ALL,"Portuguese");

	int i;
	
	for(i=50;i<=200;i++){
		if(i%3==0){
			cout<<" "<<i;
		}
	}

	return 0;
}
