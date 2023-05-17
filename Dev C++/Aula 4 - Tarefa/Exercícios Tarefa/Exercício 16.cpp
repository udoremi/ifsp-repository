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
		cout<<"\nClassificação A";
	}
	else if(alt<1.20&&peso>=60&&peso<=90){
		cout<<"\nClassificação D";
	}
	else if(alt<1.20&&peso>90){
		cout<<"\nClassificação G";
	}
	if(alt>=1.20&&alt<=1.70&&peso<60){
		cout<<"\nClassificação B";
	}
	else if(alt>=1.20&&alt<=1.70&&peso>=60&&peso<=90){
		cout<<"\nClassificação E";
	}
	else if(alt>=1.20&&alt<=1.70&&peso>90){
		cout<<"\nClassificação H";
	}
	if(alt>1.70&&peso<60){
		cout<<"\nClassificação C";
	}
	else if(alt>1.70&&peso>=60&&peso<=90){
		cout<<"\nClassificação F";
	}
	else if(alt>1.70&&peso>90){
		cout<<"\nClassificação I";
	}

	return 0;
}
