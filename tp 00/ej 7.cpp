#include <iostream>
#include <stdio.h>

using namespace std;

void longitud(char *);

int main(){
	char cadena[50];
	cout <<"Ingrese cadena de caracteres"<<endl;
	cin.getline(cadena,50,'\n');
	longitud(cadena);
	
}


void longitud(char *a){
int cont=0;
	for (int i=0; *(a+i)!=NULL;i++){
		
		cont++;
		
	}
	
	cout<<"\nEl largo de de la cadena es: "<<cont<<endl;
	
}
