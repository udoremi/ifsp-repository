#include <iostream>
using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");

	float a,b,c;
	int I;
	
	cout<<"Digite 1 para ordem crescente";
	cout<<"\nDigite 2 para ordem decrescente";
	cout<<"\nDigite 3 para o maior número no meio\n";
	cin>>I;
	
	cout<<"Digite o primeiro número: ";
	cin>>a;
	cout<<"\nDigite o segundo número: ";
	cin>>b;
	cout<<"\nDigite o terceiro número: ";
	cin>>c;
	
	if(I==1){
	
	if((a>b)&&(a>c)&&(b>c)){
	
		cout<<"O número "<<a<<" é maior que "<<b<<" que é maior que "<<c;
	}
	else if((a>b)&&(a>c)&&(b<c)){
		
	    cout<<"O número "<<a<<" é maior que "<<c<<" que é maior que "<<b;	
	}
	else if((b>a)&&(b>c)&&(a>c)){
		
		cout<<"O número "<<b<<" é maior que "<<a<<" que é maior que "<<c;
    }
	else if((b>a)&&(b>c)&&(a<c)){
		
		cout<<"O número "<<b<<" é maior que "<<c<<" que é maior que "<<a;
	}
	else if((c>a)&&(c>b)&&(a>b)){
	
	cout<<"O número "<<c<<" é maior que "<<a<<" que é maior que "<<b;
	}
	else if((c>a)&&(c>b)&&(a<b)){
		
	cout<<"O número "<<c<<" é maior que "<<b<<" que é maior que "<<a;
	}
	}

	if(I==2){
	if((a<b)&&(a<c)&&(b<c)){
	
		cout<<c<<" "<<b<<" "<<a;
	}
	else if((a<b)&&(a<c)&&(b>c)){
		
	    cout<<b<<" "<<c<<" "<<a;	
	}
	else if((b<a)&&(b<c)&&(a<c)){
		
		cout<<c<<" "<<a<<" "<<b;
    }
	else if((b<a)&&(b<c)&&(a>c)){
		
		cout<<a<<" "<<c<<" "<<b;
	}
	else if((c<a)&&(c<b)&&(a<b)){
	
		cout<<b<<" "<<a<<" "<<c;
	}
	else if((c<a)&&(c<b)&&(a>b)){
		
		cout<<a<<" "<<b<<" "<<c;
	}
	}
	
	if(I==3){
	if((a>b)&&(a>c)&&(b>c)){
	
		cout<<b<<" "<<a<<" "<<a;
	}
	else if((a>b)&&(a>c)&&(b<c)){
		
	    cout<<c<<" "<<a<<" "<<b;	
	}
	else if((b>a)&&(b>c)&&(a>c)){
		
		cout<<a<<" "<<b<<" "<<c;
    }
	else if((b>a)&&(b>c)&&(a<c)){
		
		cout<<c<<" "<<b<<" "<<a;
	}
	else if((c>a)&&(c>b)&&(a>b)){
	
		cout<<a<<" "<<c<<" "<<b;
	}
	else if((c>a)&&(c>b)&&(a<b)){
		
		cout<<b<<" "<<c<<" "<<a;
	}
	}
	
	
	return 0;
}
