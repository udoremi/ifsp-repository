/* a nota final de um estudante È calculada a partir de tr s notas atribuidas, respecxtivamente,
a um trabalho de lab, a uma avaliacao semestral e um exame final. a media das tres notas mencionadas obedece aos pesos a seguir
.
faÁa um programa que receba as tr s notas, calcule e mostre a media ponderada e o conceito que segue a tabela
*/
#include <iostream>
using namespace std;
int main(){
	
	float lab, sem, examef, mediapon;
	
	cout<<"Informe a nota do trabalho de laboratÛrio: ";
	cin>>lab;
	cout<<"\nInforme a nota da avaliaÁ„o semestral: ";
	cin>>sem;
	cout<<"\nInforme a nota do exame final: ";
	cin>>examef;
	
	mediapon = ((lab*0.2) + (sem*0.3 ) + (examef*0.5));
	if(mediapon>=0&&mediapon<5){
		cout<<"nota E\n";
	}
	else if(mediapon>=5&&mediapon<6){
		cout<<"nota D\n";
	}
	else if(mediapon>=6&&mediapon<7){
		cout<<"nota C\n";
	}
	else if(mediapon>=7&&mediapon<8){
		cout<<"nota B\n";
	}
	else{
		cout<<"nota A\n";
	}
	system("PAUSE");
	return 0;
}
