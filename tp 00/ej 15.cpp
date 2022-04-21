/* 15. Declare una estructura capaz de contener los datos básicos de una persona. 
Mediante el uso de punteros y la gestión de la memora dinámicamente,  
asigne el valor de cada dato y muestre el contenido asignado. */

#include <iostream>
#include <stdio.h>
using namespace std;

struct persona{
	char nombre[20];
	char apellido[20];
	int edad;
	char sexo[10];
} *pun ;

void pedirdatos();
void mostrardatos(persona *);

int main()
{
	pedirdatos();
	mostrardatos(pun);
	delete pun;
	system("pause");
	return 0;
}

void pedirdatos(){
	pun= new persona;
	cout<<"Ingrese su nombre: ";
	cin.getline(pun->nombre,20,'\n');
	cout<<"Ingrese su apellido: ";
	cin.getline(pun->apellido,20,'\n');
	cout<<"Ingrese su edad: ";
	cin>>pun->edad;
	fflush(stdin);
	cout<<"Ingrese su sexo: ";
	cin.getline(pun->sexo,10,'\n');
}

void mostrardatos(persona *pun){
	cout<<"\nSu nombre es: "<<pun->nombre<<endl;
	cout<<"Su apellido es: "<<pun->apellido<<endl;
	cout<<"Su edad es: "<<pun->edad<<endl;
	cout<<"Su sexo es: "<<pun->sexo<<endl;
}
