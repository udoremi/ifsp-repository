#include <iostream>
using namespace std;
int main(){
//nesse exerc�cio vamos mostrar os resultados das opera��es b�sicas de matem�tica
//utilizando 3 vari�veis de n�meros reais (float)

float n1=40,n2=3,soma,diferenca,divisao,multiplicacao;

    soma=n1+n2;
    diferenca=n1-n2;	
	divisao=n1/n2;
	multiplicacao=n1*n2;
	
	cout<<"Soma: "<<soma<<"\nDiferen�a: "<<diferenca
	<<"\nDivis�o: "<<divisao<<"\nMultiplica��o: "<<multiplicacao;
	
	//gecthar cria uma pausa no sistema esperando o usu�rio digitar alguma coisa
	getchar();
	return 0;
}
