#include <iostream>


using namespace std;

int main() {
	
	int op;

	
	cout<<"Ingresa del numero de un deporte "<<endl;
	cout<<"1.    para futbol "<<endl;
	cout<<"2.    para Golf "<<endl;
	cin>>op;
	
	
	switch (op)	{
		case 1: 
				cout<<"Implementos deportivos para jugar Futbol: "<<endl;
				cout<<"Balon de Futbol"<<endl;
				cout<<"camiseta"<<endl;
				cout<<"Short"<<endl;
				cout<<"Calcetines"<<endl;
				cout<<"Tenis"<<endl;		
				break;
		case 2:
				cout<<"Implementos deportivos para jugar Golf: "<<endl;
				cout<<"ropa comoda para jugar al golf"<<endl;
				cout<<"Palo de golf"<<endl;
				cout<<"Bolas de Golf"<<endl;
				break;
		
		default: 
		cout<<"Ingrese una opcion de las anteriores "<<endl;	
	}

			
	system("pause");
	return 0;
}
