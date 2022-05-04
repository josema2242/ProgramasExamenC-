#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	int numero;
	
	cout<<"Ingresa el numero que quieres que se calcule su tabla de multiplicar"<<endl;
	cin>>numero;
	cout<<endl<<"La tabla de multiplicar del numero "<<numero<<" es:"<<endl<<endl;
	
	
	for(int i=1;i <= 10; i++){
		
		cout<<numero<<" x "<< i<< " = "<< numero*i<<endl;
		
	}
	
	cout<<endl;
	system("pause");
	return 0;
}
