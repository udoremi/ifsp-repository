#include <iostream>
#include <string.h>
#include <locale.h>
using namespace std;

//um professor precisa calcular a media aritmetica de 4 notas
//as notas de cada prova variam de 0 a 10
//faça um programa utilizando um laço de repetição que receba as 4 notas 
//e mostre a média. Faça com while 
int main(){
	setlocale(LC_ALL,"Portuguese");

	int contador=1;
	float nota, media=0,contanota;

	while(contador<=4){
		cout<<"Digite a nota "<<contador<<": ";
		cin>>nota;
		contanota = contanota + nota;//acumula notas
		contador++;//conta iterações
	
	}
	media = contanota / (contador-1);
	cout<<"A média final é: "<<media;


	return 0;
}
