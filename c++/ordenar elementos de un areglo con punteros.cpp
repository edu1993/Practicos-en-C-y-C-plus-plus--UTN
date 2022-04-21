#include <iostream>
#include <stdlib.h>

using namespace std;

void pedirdatos();
void ordenar(int *, int);
void mostrar(int*,int);
int nElementos,*elemento;

int main(){
	pedirdatos();
	ordenar(elemento, nElementos);
	mostrar(elemento,nElementos);
	delete[] elemento;
	
}
void pedirdatos(){
	cout << "digite elementos del areglo :";
	cin>>nElementos;
	elemento= new int[nElementos];
	for(int i=0; i <nElementos; i++){
		cout <<"ingrese elemento: ["<<i<<"]";
		cin>>*(elemento+i);
		
		
	}
	
}

void ordenar(int *elemento, int nElementos){
	int aux;
	for (int i=0; i <nElementos;i++){
		for (int j=0; j<nElementos-1;j++){
			if (*(elemento+j)>*(elemento+j+1)){
				aux=*(elemento+j);
				*(elemento+j)=*(elemento+j+1);
				*(elemento+j+1)=aux;
			}
		}
		
	}
	
	
}

void mostrar(int*elemento,int nElementos){
	cout <<" areglo ordenado"<<endl;
	for (int i=0; i < nElementos; i++){
		cout <<*(elemento+i);
		
	}
	
}
