#include <iostream>
#include <string.h>
#include <locale.h>
using namespace std;

//um professor precisa calcular a media aritmetica de 4 notas
//as notas de cada prova variam de 0 a 10
//fa�a um programa utilizando um la�o de repeti��o que receba as 4 notas 
//e mostre a m�dia. Fa�a com while 
int main(){
	setlocale(LC_ALL,"Portuguese");

	int contador=1;
	float nota, media=0,contanota;

	while(contador<=4){
		cout<<"Digite a nota "<<contador<<": ";
		cin>>nota;
		contanota = contanota + nota;//acumula notas
		contador++;//conta itera��es
	
	}
	media = contanota / (contador-1);
	cout<<"A m�dia final �: "<<media;


	return 0;
}
