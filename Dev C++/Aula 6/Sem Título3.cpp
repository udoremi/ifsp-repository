#include <iostream>
#include <string.h>
#include <locale.h>
using namespace std;

// faça um programa para identificar se determinada senha numerica digitada está correta. O usuario terá apenas 3 tentativas. Se o usuário errar a senha
//então mostre a frase "Você tem mais X tentativas", onde X é a quantidade restante de tentativas.
//Se o usuário acertar a senha, então mostrar a mensagem: "Acesso permitido!" e interromper a execução com o código break
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
