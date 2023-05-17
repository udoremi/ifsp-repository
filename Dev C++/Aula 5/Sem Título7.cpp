#include <iostream>
#include <string.h>
#include <locale.h>
using namespace std;

// 
int main(){
	setlocale(LC_ALL,"Portuguese");
 
	int i, result, num;
	
		cout<<"Digite o número a ser multiplicado: ";
		cin>>num;
		
	for(i=0;i<=10;i++){
		result = i * num;
		cout<<"\n"<<num<<"x"<<i<<"="<<result;
	}

	return 0;
}
