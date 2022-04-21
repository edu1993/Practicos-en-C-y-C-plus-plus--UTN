

//Ejercicio extra ._.)/

#include <iostream>
#include <stdlib.h>

using namespace std;

struct Nodo{
 int dato;
 Nodo *siguiente;
};
int contador=0;


void insertarPila(Nodo*&, int );
void mostrarDatos(Nodo*&, int&);
int main(){
 Nodo *pila = NULL;
 int dato;
 char rpt;
 
 do {
  cout<<"Digite un dato: ";
  cin>>dato;
  insertarPila(pila,dato);
  contador++;
   cout<<"\nDeseas agregar otro elemento a PILA(s/n): ";
          cin>>rpt;
 }while ((rpt =='S'||(rpt =='s')));
 

    mostrarDatos(pila,dato);
 system("Pause");
 return 0;
}


void insertarPila(Nodo *&pila, int n){
 Nodo *nuevo_nodo = new Nodo();
 nuevo_nodo-> dato =n;
 nuevo_nodo->siguiente=pila;
 pila =nuevo_nodo;
 cout<<"\tEl elemento "<<n<<" ha sido agregadp a Pila corectamente";
}

void mostrarDatos(Nodo *&pila, int &n ){
 
 for(int i =0; i<contador;i++){
 
    cout<<"Numero "<<n+i<<endl;
     }
}
