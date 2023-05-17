#include <iostream>
using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
    int sal, servico;
    float imposto, gratif, saltotal;
    
    cout<<"Digite o salário: ";
    cin>>sal;
    cout<<"Digite o tempo de serviço em anos: ";
    cin>>servico;

    if(sal<200){
        cout<<"\nO salário base é: R$"<<sal;
    }
	else if(sal>=200&&sal<=450){
        imposto = sal * 0.97;
        cout<<"\nO salário base descontado de impostos é: R$"<<imposto;
    } 
	else if(sal>450&&sal<700){
        imposto = sal * 0.92;
        cout<<"\nO salário base descontado de impostos é: R$" << imposto;
    } 
	else if(sal>=700){
        imposto = sal * 0.88;
        cout<<"\nO salário base descontado de impostos é: R$" << imposto;
    } 
	else{
        cout<<"\nOpção inválida";
    }
    
    if(sal>500){
        if (servico<3){
            gratif = imposto + 20;
            cout<<"\nO salário com gratificação é: R$"<<gratif;
        }
		else if(servico>=3){
            gratif = imposto + 30;
            cout<<"\nO salário com gratificação é: R$"<<gratif;
        } 
		else{
            cout<<"\nOpção inválida";
        }
    } else if(sal<=500){
        if (servico<3){
            gratif = imposto + 23;
            cout<<"\nO salário com gratificação é: R$"<<gratif;
        } 
		else if(servico>=3&&servico<=6){
            gratif = imposto + 35;
            cout<<"\nO salário com gratificação é: R$"<<gratif;
        } 
		else if(servico>6){
            gratif=imposto + 33;
            cout<<"\nO salário com gratificação é: R$"<<gratif;
        } 
		else{
            cout<<"\nOpção inválida";
        }
    }

    saltotal = (gratif+imposto) / 2;

    if(saltotal<350){
        cout<<"\nClassificação A";
    } 
	else if(saltotal>=350&&saltotal<=600){
        cout<<"\nClassificação B";
    } 
	else if(saltotal>600){
        cout<<"\nClassificação C";
    }
    
    return 0; 
}
