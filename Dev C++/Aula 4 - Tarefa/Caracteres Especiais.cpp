#include <locale.h> //biblioteca para l�nguas
#include <iostream>
#include <string.h>

using namespace std;
int main(){
	setlocale(LC_ALL,"Portuguese");
	//define a l�ngua portuguesa para caracteres especiais
	
	cout<<"Aqui � dia\n";
	
	system("PAUSE");
	return 0;	

	
}
