#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std ;

struct nodo{
 char  letra;
 struct nodo  *sgte;
};
void menu();
void insertarPila(nodo *&,char);
void sacarPila(nodo *&,char &);

int  main(void){
 nodo *pila = NULL ;
 char p;
 char r ;
    int op;
    
  /*
  do{
   cout<<"ingrese un caracter : " ;
   cin>>p;
   insertarPila(pila,p);
   cout<<"Desea continuar digitando numeros ..(s/n)" ;
   cin>>r;
  }while((r=='s')||(r=='S'));
  
  while(pila != NULL){
   sacarPila(pila,p);
   if(pila != NULL){
    cout<<p<<" , ";
   }else{
    cout<<p<<" . ";
   }
  }
 */
 int opcion;
 do{
  menu();
  cin>>opcion;
  switch(opcion){
   case 1:
   do{
   cout<<"ingrese un caracter : " ;
   cin>>p;
   insertarPila(pila,p);
   cout<<"Desea continuar digitando numeros ..(s/n)" ;
   cin>>r;
     }while((r=='s')||(r=='S'));
   break;
   case 2: 
   while(pila != NULL){
   sacarPila(pila,p);
   if(pila != NULL){
    cout<<p<<" , ";
   }else{
    cout<<p<<" . ";
   }
        }
    break;
   case 3: return 0;
   default: cout<<"\nIngrese una opcion valida...\n";break;
  }
  getch();
  system("cls");
 }while(opcion!=3);

   
   

 getch();
 return 0;
}

void insertarPila(nodo *&pila,char n){
 nodo *abel= new nodo();
 abel->letra=n;
 abel->sgte=pila;
 pila=abel;
 
 cout<<" ----  "<<n<<"\t "<<"se a guardado correctamente a pilas !\n";
 
}
void sacarPila(nodo *&pila,char &n){
 nodo *aux = pila ;
 n=aux->letra;
 pila=aux->sgte,
 delete aux ;
 
}


 void menu(){
  int op;
  cout<<"\t---------MENU----------\n";
  cout<<"(1)-insertar un caracter a la pila ."<<endl ;
  cout<<"(2)-mostrar los elementos de la pila ."<<endl ;
  cout<<"(3)-SALIR ."<<endl;
 }
