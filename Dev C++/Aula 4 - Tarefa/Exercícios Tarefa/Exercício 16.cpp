#include <iostream>
using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");

	float alt, peso;
	
	cout<<"Digite a altura em metros:\n";
	cin>>alt;
	cout<<"Digite o peso em quilos:\n";
	cin>>peso;
	
	if(alt<1.20&&peso<60){
		cout<<"\nClassifica��o A";
	}
	else if(alt<1.20&&peso>=60&&peso<=90){
		cout<<"\nClassifica��o D";
	}
	else if(alt<1.20&&peso>90){
		cout<<"\nClassifica��o G";
	}
	if(alt>=1.20&&alt<=1.70&&peso<60){
		cout<<"\nClassifica��o B";
	}
	else if(alt>=1.20&&alt<=1.70&&peso>=60&&peso<=90){
		cout<<"\nClassifica��o E";
	}
	else if(alt>=1.20&&alt<=1.70&&peso>90){
		cout<<"\nClassifica��o H";
	}
	if(alt>1.70&&peso<60){
		cout<<"\nClassifica��o C";
	}
	else if(alt>1.70&&peso>=60&&peso<=90){
		cout<<"\nClassifica��o F";
	}
	else if(alt>1.70&&peso>90){
		cout<<"\nClassifica��o I";
	}

	return 0;
}
