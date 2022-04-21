#include <iostream>
#include <string>

using namespace std;

int main(){
	int *numero=NULL;
	char *letra=NULL;
	string *palabra=NULL;
	numero= new int;
	letra=new char;
	palabra= new string;
	cout<< "Ingrese un numero"<<endl;
	cin>>*numero;
	cout<< "Ingrese una letra"<<endl;
	cin>>*letra;
	cout<< "Ingrese una palabra"<<endl;
	cin>>*palabra;
	system ("cls");
	cout<<"Numero: "<<*numero<<endl<<"Letra: "<<*letra<<endl<<"Palabra: "<<*palabra<<endl;
	delete numero;
	delete letra;
	delete palabra;
		
	return 0;
}

