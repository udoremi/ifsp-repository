#include <iostream>
using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");

	float a,b,c;
	int I;
	
	cout<<"Digite 1 para ordem crescente";
	cout<<"\nDigite 2 para ordem decrescente";
	cout<<"\nDigite 3 para o maior n�mero no meio\n";
	cin>>I;
	
	cout<<"Digite o primeiro n�mero: ";
	cin>>a;
	cout<<"\nDigite o segundo n�mero: ";
	cin>>b;
	cout<<"\nDigite o terceiro n�mero: ";
	cin>>c;
	
	if(I==1){
	
	if((a>b)&&(a>c)&&(b>c)){
	
		cout<<"O n�mero "<<a<<" � maior que "<<b<<" que � maior que "<<c;
	}
	else if((a>b)&&(a>c)&&(b<c)){
		
	    cout<<"O n�mero "<<a<<" � maior que "<<c<<" que � maior que "<<b;	
	}
	else if((b>a)&&(b>c)&&(a>c)){
		
		cout<<"O n�mero "<<b<<" � maior que "<<a<<" que � maior que "<<c;
    }
	else if((b>a)&&(b>c)&&(a<c)){
		
		cout<<"O n�mero "<<b<<" � maior que "<<c<<" que � maior que "<<a;
	}
	else if((c>a)&&(c>b)&&(a>b)){
	
	cout<<"O n�mero "<<c<<" � maior que "<<a<<" que � maior que "<<b;
	}
	else if((c>a)&&(c>b)&&(a<b)){
		
	cout<<"O n�mero "<<c<<" � maior que "<<b<<" que � maior que "<<a;
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
