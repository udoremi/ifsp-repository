#include <iostream>
using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
    int sal, servico;
    float imposto, gratif, saltotal;
    
    cout<<"Digite o sal�rio: ";
    cin>>sal;
    cout<<"Digite o tempo de servi�o em anos: ";
    cin>>servico;

    if(sal<200){
        cout<<"\nO sal�rio base �: R$"<<sal;
    }
	else if(sal>=200&&sal<=450){
        imposto = sal * 0.97;
        cout<<"\nO sal�rio base descontado de impostos �: R$"<<imposto;
    } 
	else if(sal>450&&sal<700){
        imposto = sal * 0.92;
        cout<<"\nO sal�rio base descontado de impostos �: R$" << imposto;
    } 
	else if(sal>=700){
        imposto = sal * 0.88;
        cout<<"\nO sal�rio base descontado de impostos �: R$" << imposto;
    } 
	else{
        cout<<"\nOp��o inv�lida";
    }
    
    if(sal>500){
        if (servico<3){
            gratif = imposto + 20;
            cout<<"\nO sal�rio com gratifica��o �: R$"<<gratif;
        }
		else if(servico>=3){
            gratif = imposto + 30;
            cout<<"\nO sal�rio com gratifica��o �: R$"<<gratif;
        } 
		else{
            cout<<"\nOp��o inv�lida";
        }
    } else if(sal<=500){
        if (servico<3){
            gratif = imposto + 23;
            cout<<"\nO sal�rio com gratifica��o �: R$"<<gratif;
        } 
		else if(servico>=3&&servico<=6){
            gratif = imposto + 35;
            cout<<"\nO sal�rio com gratifica��o �: R$"<<gratif;
        } 
		else if(servico>6){
            gratif=imposto + 33;
            cout<<"\nO sal�rio com gratifica��o �: R$"<<gratif;
        } 
		else{
            cout<<"\nOp��o inv�lida";
        }
    }

    saltotal = (gratif+imposto) / 2;

    if(saltotal<350){
        cout<<"\nClassifica��o A";
    } 
	else if(saltotal>=350&&saltotal<=600){
        cout<<"\nClassifica��o B";
    } 
	else if(saltotal>600){
        cout<<"\nClassifica��o C";
    }
    
    return 0; 
}
