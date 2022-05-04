#include <iostream>

using namespace std;

int main() {
	
	int numero;
	cout<<"Ingresa un numero"<<endl;
	cin>>numero;
	
	
	if (numero % 4==0){
			
			cout<<endl<<"EL numero si es multiplo de 4 "<<endl;
			
	}else {
		cout<<endl<<"EL numero no es multiplo de 4 "<<endl;
	}
			
	system("pause");
	return 0;
}
