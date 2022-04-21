#include <iostream>
using namespace std;
void mostrarVector(int *,int);
void duplicarValores(int *,int );
void sumaElementos(int *,int );
void elementoMenor(int*,int);

int main(){
	int vect[]={2, 16, -4, 29,  234, 12, 0, 3};
	int tam=sizeof(vect)/sizeof(*vect);
	
	mostrarVector(vect,tam);
    duplicarValores(vect,tam);
	mostrarVector(vect,tam);
	sumaElementos(vect,tam);
	elementoMenor(vect,tam);
	
	return 0;
	
}


void mostrarVector(int *p_vector,int tam){
	cout<<"\nLos elementos del vector son: \n";
	for (int i=0; i <tam;i++){
		cout<<*(p_vector+i)<<"\t";
		
	}
	cout<<"\n";
	
	
}

void duplicarValores(int *p_vector,int tam){
	cout<<"\nValores del vector duplicados\n";
	for (int i=0; i <tam;i++){
		*(p_vector+i)=*(p_vector+i)*2;
		
	}

	
	
}

void sumaElementos(int *p_vector,int tam){
	int suma=0;
	cout<<"\n Suma de los elementos del vector: ";
	for (int i=0; i <tam;i++){
		suma+=*(p_vector+i);
		
	}
	cout <<suma<< endl;	
}

void elementoMenor(int *p_vector,int tam){
	int menor=*p_vector;
	cout<<"\n El elemento menor es: ";
	for (int i=1; i <tam;i++){
		if (*(p_vector)<=menor)
		{
			menor=*p_vector;
		}
		p_vector++;
	}
	cout <<menor<< endl;
	

	
	
}

