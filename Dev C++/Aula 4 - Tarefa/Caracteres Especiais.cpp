#include <locale.h> //biblioteca para línguas
#include <iostream>
#include <string.h>

using namespace std;
int main(){
	setlocale(LC_ALL,"Portuguese");
	//define a língua portuguesa para caracteres especiais
	
	cout<<"Aqui é dia\n";
	
	system("PAUSE");
	return 0;	

	
}
