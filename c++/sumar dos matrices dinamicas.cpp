#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

void ingresar();//ingresa tamaño de la matriz
void rellenar(int **);
void mostrar(int **);
void sumar(int**,int**,int**);

int **m1,**m2,**mr;
int f,c;
int variarRand=0;
int main(){
	ingresar();
	cout <<"\n Matriz 1 \n ";
	rellenar(m1);
	mostrar(m1);
	cout <<"\n Matriz 2 \n ";
	variarRand+=(time(NULL));
	rellenar(m2);
	mostrar(m2);
	cout <<"\n Suma : \n ";
	sumar(m1,m1,mr);
	mostrar(mr);
	
}


void ingresar(){
	
	cout <<"ingrese numero de filas: "; cin>> f;
	cout <<"ingrese numero de columnas: "; cin>> c;
	m1= new int*[f];
	m2= new int*[f];
	mr = new int *[f];
	for (int i=0; i < f; i++){
		m1[i]=new int [c];
		m2[i]=new int [c];
		mr[i]=new int [c];
	}
   		
}


void rellenar(int **m){
	srand(time(NULL)-variarRand);
	for(int i=0; i<f;i++){
		for(int j=0; j <c; j++){
			*(*(m+i)+j)=rand()%(100-150+1)+150;
			
		}
	}
	
}

void mostrar (int ** m){
	
	for (int i=0; i <f; i++){
		for(int j=0; j <c ; j++)
		{
			cout <<*(*(m+i)+j)<<"\t";
		}
		cout <<"\n ";
	}
	cout<<"\n \n";
}

void sumar(int**A,int**B,int**R){
		for(int i=0; i<f;i++){
		for(int j=0; j <c; j++){
		    *(*(R+i)+j)= *(*(A+i)+j)+ *(*(B+i)+j);
			
		}
	}
	
}


