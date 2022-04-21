#include <iostream>

using namespace std;

void cargar(int*,int *);
int ampliar(int *,int);
void mostrar(int*,int*);

int main(){
	int *p=NULL,tam=1;
	p= new int[tam];
  	cargar(p,&tam);
    mostrar(p,&tam);
	return 0;
}

void cargar(int *p,int *tam){
		char s_n='s';
		
	while(s_n != 'n'){
		cout<<"ingrese numero"<<endl;
		cin>>*(p+((*tam)-1));
		cout<<"desea ingresar un nuevo numero precione s(si) o n(no) : "; cin>>s_n;
		if(s_n=='s'){
			(*tam)=ampliar(p,*tam);
		}
			
	}
		system("cls");
}

int ampliar(int *p,int tam){//amplia el buffer del vector para ingresar nuevos valores 
	int *aux;
	aux=new int [tam];
	for(int i=0;i<tam; i++){
		*(aux+i)=*(p+i);
		
		}
		
		delete[] p;
		p=new int[tam+1];
		for(int i=0;i<tam; i++){
		*(p+i)=*(aux+i);
		
		}
      tam++;
      return tam;		
}

void mostrar(int* p,int *tam){
		
		cout<<"Elementos ingrsados: "<<endl;
    for(int i=0; i< *tam; i++){
			cout<<*(p+i)<<endl;
		}
	}
