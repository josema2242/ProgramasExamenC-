#include <iostream>

using namespace std;

int main() {
	
	int numero;

	
	cout<<"Ingresa el numero "<<endl;
	cin>>numero;
	
	if (numero<0){
		cout<<"EL numero es negativo, ingresar un numero positivo "<<endl;
	}else {
		if (numero % 2==0){
			
			cout<<"EL numero es un par positivo "<<endl;
			
	}else {
		cout<<"EL numero es un inpar positivo "<<endl;
	}
		
	}
		system("pause");
		return 0;	
}
