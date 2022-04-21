#include <iostream>

using namespace std;

void mostrarMatriz(int m[][4] );
void duplicarMatriz(int m[][4] );
void sumaMatriz(int m[][4] );//suma
void elementoMenor(int m[][4] );

int main(){
	int m[2][4]={{2,16,-4,29},{234,12,0,3}};//tomo como **m == m[][]

	mostrarMatriz(m);
	duplicarMatriz(m);
	mostrarMatriz(m);
	sumaMatriz(m);
	elementoMenor(m);
	
}


	void  mostrarMatriz(int m[][4] ){
		cout<<"\n Elementos de la matriz \n";
		for (int i=0; i< 2;i++){
		for(int j=0; j <4; j++){
			cout<<*(*(m+i)+j);
			if ((*(*(m+i)+j))>100)cout<<".";
			if ((*(*(m+i)+j))>10)cout<<"..";
			else cout<<"....";
			
			
		}
		cout <<"\n";
	}
	
	}
	
	void  duplicarMatriz(int m[][4] ){
		cout<<"\n La matriz a sido duplicada \n";
		for (int i=0; i< 2;i++){
		for(int j=0; j <4; j++){
			*(*(m+i)+j)*=2;
		}
		
	}
	
	}
	
	void  sumaMatriz(int m[][4] ){
		int suma=0;
		cout<<"\n La suma de los elementos de la matriz es: ";
		for (int i=0; i< 2;i++){
		for(int j=0; j <4; j++){
			suma+=*(*(m+i)+j);
		}
		
	}
	cout<<suma<<"\n";
	}	
	
	
	void  elementoMenor(int m[][4] ){
		int menor=**m;//toma el primer elemento de la matriz
	
		cout<<"\n El elemento menor es: ";
		for (int i=0; i< 2;i++){
		for(int j=0; j <4; j++){
			if ((*(*(m+i)+j))< menor) 	menor=*(*(m+i)+j);
		
			
		}
		
	}
		cout<<menor<<"\n";
	}	
