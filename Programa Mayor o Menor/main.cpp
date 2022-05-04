#include <iostream>

using namespace std;

int main() {
	
	int numero;

	
	cout<<"Ingresa el numero "<<endl;
	cin>>numero;
	
	if (numero<0){
		cout<<"EL numero es negativo, ingresar un numero positivo "<<endl;
	}else {
		if (numero==100){
			cout<<"EL numero es igual a 100 "<<endl;	
		}else {
			if (numero<100){
				cout<<"EL numero es menor a 100 "<<endl;
			}else {
				cout<<"EL numero es mayor a 100 "<<endl;
			}
	}
		
	}
		system("pause");
		return 0;	
}
