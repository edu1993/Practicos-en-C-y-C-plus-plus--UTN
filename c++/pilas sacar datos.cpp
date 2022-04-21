//insertar /quitar
#include <iostream>

using namespace std;

struct Nodo{
	int dato;
	Nodo *siguiente;
};
void agregarPila(Nodo *&,int);
void sacarPila(Nodo *&,int &);

int main(){
	Nodo *pila =NULL;
	int dato,n=4;
	
	cout<<"digite un numero: ";
	cin>>dato;
	agregarPila(pila,dato);
	cout<<"digite un numero: ";
	cin>>dato;
	agregarPila(pila,dato);
	
	cout <<"\n sacando elementos"<<endl;
	
do{
		
  sacarPila(pila, dato);
   if(pila !=NULL){
   cout<<dato<<",";
   }
   else{
   	
   cout<<dato<<".";
   }
 
 }while(pila != NULL);

	
		
	return 0;
}

void agregarPila(Nodo *&pila,int n){
	Nodo *nuevo_nodo =new Nodo();
	nuevo_nodo->dato =n;
	nuevo_nodo->siguiente=pila;
	pila=nuevo_nodo;
	cout<<"el numero fue agregado a pila: "<<n<<endl;
	
	}
	
	

	void sacarPila(Nodo *&pila,int &n){
	
		Nodo *aux=pila;
		n= aux->dato;
		
		pila = aux->siguiente;
		delete aux;
		
	}
	
