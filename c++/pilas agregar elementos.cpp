//insertar elementos en la pila
#include <iostream>

using namespace std;
struct Nodo{
	int dato;
	Nodo *siguiente;
};
void agregarPila(Nodo *&,int);

int main(){
	Nodo *pila =NULL;
	int n1,n2;
	cout<<"digite un numero: ";
	cin>>n1;
	agregarPila(pila,n1);
	cout<<"digite un numero: ";
	cin>>n1;
	agregarPila(pila,n2);
	
	
	return 0;
}

void agregarPila(Nodo *&pila,int n){
	Nodo *nuevo_nodo =new Nodo();
	nuevo_nodo->dato =n;
	nuevo_nodo->siguiente=pila;
	
	
}
