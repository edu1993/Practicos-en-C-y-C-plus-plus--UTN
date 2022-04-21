/* matrices dinamicas

ejmplo:rellenar uba matriz N*M y mostrar su contenido

**puntero_matriz -> *puntero_fila -> [int] [int] [int]
					*puntero_fila -> [int] [int] [int]
					*puntero_fila -> [int] [int] [int]

*/
#include <iostream>
#include <stdlib.h>

using namespace std;

void ingresar();
void mostrar(int **,int ,int);

int **puntero_matriz;
int filas,columnas;

int main(){
	 ingresar();
	 mostrar(puntero_matriz,filas,columnas);
	 
	 for(int i=0; i <filas; i++ ){
	 	delete[] puntero_matriz[i];
	 }
	
	delete[] puntero_matriz;
	
}


void ingresar(){
	cout<<"Digite el numero de fila: ";
	cin>>filas;
	cout<<"Digite el numero de fila: ";
	cin>>columnas;
	
puntero_matriz = new int*[filas] ;
	for(int i=0; i < filas; i++){
		puntero_matriz[i]= new int[columnas]; 
	}
	
	cout<< "digitando elementos de la matriz"<<endl;
	
	for (int i=0; i <filas; i++){
		for(int j=0; j <columnas; j++){
			cout<<"digite un numero ["<<i<<"] ["<<j<<"]: ";
			cin>>*(*(puntero_matriz+i)+j);
			
		}
	}
	
}

void mostrar(int **puntero_matriz,int filas,int columnas){
	cout <<"\n\nimprimiendo matriz\n";
		for (int i=0; i <filas; i++){
		for(int j=0; j <columnas; j++){
			cout<<"\t"<<*(*(puntero_matriz+i)+j);
			
		}
		cout<<"\n";
		
	}
}
