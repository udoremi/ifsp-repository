#include <iostream>
#include <string.h>
#include <locale.h>
using namespace std;

//faça um programa que passe por um laço 100 vezes e mostre apenas os numeros inteiros impares
// num / 2 !=0 -> impar
int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int i;
	for(i=1;i<=100;i++){
	
		
		if(i % 2 != 0){
			cout<<" "<<i;
		}	
	}
	return 0;
}
