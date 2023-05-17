/*
faça um programa que receba três notas de um aluno, calcule e mostre a média aritmetica e a mensagem
constante na tabela a seguir. Aos alunos que ficaram para exame, calcule e mostre a nota que deverão tirar para serem aprovados
considerando que a média exigida é 6.0, ou seja, para calcular a nota que o aluno terá que tirar no exame usa-se a formula:
notaExame = 12 - media
*/
#include <iostream>
using namespace std;
int main(){

float notamedia, nota1,nota2,nota3;

cout<<"Informe a primeira nota: \n";
cin>> nota1;
cout<<"Informe a segunda nota: \n";
cin>>nota2;
cout<<"Informe a terceira nota: \n";
cin>> nota3;

	notamedia = (nota1+nota2+nota3) / 3;
	if(notamedia>0&&notamedia<3){
		cout<<"Aluno reprovado!\n";
	
	}
	  else if(notamedia>=3&&notamedia<6){
	  
		cout<<"Aluno em Exame. Nota de exame: "<<(12-notamedia)<<"\n";
		
	}
	    else{
		cout<<"Aluno Aprovado!\n";
	}
	
	
	system("PAUSE");
	return 0;
}
