#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	int numero, contador, i;
	
	cout<<"Ingresa el numero para calcularle su tabla de division"<<endl;
	cin>>numero;
	
	contador=0;
	i=1;
	
	cout<<"La tabla de dividir del numero "<<numero<<" es: "<<endl<<endl;
	
	while (i <= 10) {
		cout<<contador<<" / "<<numero<<" = "<<contador/numero<<endl;
		contador=contador+numero;
		i++;
	}
	
	cout<<endl;
	
	system("pause");
	return 0;
}
