#include <iostream>
#include <string.h>
#include <locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int i;
	for(i=1;i<10;i++){
		cout<<"\ni: "<<i;
	}
	
	return 0;
}
