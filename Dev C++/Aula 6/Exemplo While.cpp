#include <iostream>
#include <string.h>
#include <locale.h>
using namespace std;

// 
int main(){
	setlocale(LC_ALL,"Portuguese");

	int contador=1;
	
	while(contador<=10){
		if(contador%5==0){
			cout<<"\n"<<contador;
		}
		else{
		}
		
		contador++;	
	}
	return 0;
}
