#include <iostream>
#include <string.h>
#include <locale.h>
using namespace std;

// fa�a um programa para identificar se determinada senha numerica digitada est� correta. O usuario ter� apenas 3 tentativas. Se o usu�rio errar a senha
//ent�o mostre a frase "Voc� tem mais X tentativas", onde X � a quantidade restante de tentativas.
//Se o usu�rio acertar a senha, ent�o mostrar a mensagem: "Acesso permitido!" e interromper a execu��o com o c�digo break
int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int contador=2,senha;
	
	while(contador>=0){
		cout<<"\nDigite a senha: \n";
		cin>>senha;
		if(senha==1234){
			cout<<"\nAcesso permitido!";
			break;
		}
		else if(contador==0){
			cout<<"\nSenha incorreta!";
			break;
		}
		else{
			cout<<"Senha incorreta. Faltam "<<contador<<" tentativa(s).";		
		}
		contador--;
	}
	return 0;
}
