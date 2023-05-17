/* tendo como dados de entrada o nome, a altura e o sexo de uma pessoa, construa um programa em C 
que calcule o peso ideal, usando as formulas:
homens: (72.7*h) - 58
mulheres: (62.1*h) - 44.7
h = altura
*/
#include <iostream>
#include <string.h>
using namespace std;

int main(){
	//vamos declarar as variáveis
	float altura, pesoideal;
	//variavel string
	char nome[30];
	char sexo[1];
	
	  cout<<"Digite seu nome: \n";
	  cin>>nome;
	  
	  cout<<"\nDigite sua altura: \n";
	  cin>> altura;
	  
	  cout<<"\nDigite o sexo(m ou f): \n";
	  cin>> sexo;
	  
	  //vamos verificar se o valor digitado é m ou f
	  if(strcmp(sexo,"m")==0){
	  pesoideal = (72.7*altura)-58;
	  cout<<"\n O peso ideal masculino: "<<pesoideal<<"kg\n";	
	  }
	  
	  else{
	  	pesoideal = (62.1*altura)-44.7;
	  	cout<<"\nO peso ideal feminino: "<<pesoideal<<"kg\n";
	  }
	  
	
	return 0;
}
