//Ejercicio 1: Hacer un programa para agregar números enteros a una pila, 
//hasta que el usuario lo decida, 
//después mostrar todos los números introducidos en la pila.

#include <iostream>
#include <stdlib.h>
#include <conio.h>

using namespace std;

struct nodo{
	int dato;
	nodo *sig;
};

void agregar(nodo *&,int);
void sacar(nodo *&,int &);

int main(){
	nodo *pila=NULL;
	int dato;
	char rpt;
	do {
		cout<<"ingrese numero"<<endl;
		cin>>dato;
		agregar(pila,dato);
		cout<<"desea agregar nuevo elemento s/n"<<endl;
		cin>>rpt;
		
	}while(rpt=='s');
	
	cout<<"sacando todo elementos de pila"<<endl;
	while(pila !=NULL){
		sacar(pila,dato);
			if(pila != NULL){
			
			cout<<dato<<" , ";
		}
		else{
			cout<<dato<<" . ";
		}
	}
}

void agregar(nodo *&pila,int n){
	nodo *nuevo_nodo= new nodo();
	nuevo_nodo->dato=n;
	nuevo_nodo->sig=pila;
	pila=nuevo_nodo;
	cout<<" \t elemnto "<<n<<" agregado a pila "<<endl;
}

/*void agregar(nodo *&pila,int n){
 nodo *nuevo_nodo= new nodo();
 nuevo_nodo->dato=n;
 nuevo_nodo->sig=pila;
 pila=nuevo_nodo;
 
 cout<<" ----  "<<n<<"\t "<<"se a guardado correctamente a pilas !\n";
 
}*/


void sacar(nodo *&pila,int &n){
 nodo *aux = pila ;
 n=aux->dato;
 pila=aux->sig,
 delete aux ;
 
}

