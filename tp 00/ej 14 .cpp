/* 14. Escriba un programa que le permita cargar al usuario un vector con hasta 20 enteros. 
Declare y mantenga un vector de punteros a enteros de forma tal que este vector apunte a los elementos en orden ascendente.*/

#include <iostream>




int main(){
	int v[20];
	int *puntero[20];
	
	for(int i=0; i< 20;i++){
		puntero[i] = new int;
	} 
		
	     
	printf("Ingrese 20 numeros \n");
	
	for(int i=0; i< 20;i++){
		scanf("%d",&v[i]);
	
	}
	system ("cls");
		printf("\nVector\n");
	for(int i=0; i< 20;i++){
		printf(" %d ",v[i]);
	}
	
	for(int i=0; i< 20;i++){
		*puntero[19-i]=v[i];
	}
	printf("\nVector de punteros\n");
	for(int i=0; i< 20;i++){
		printf(" %d ",*puntero[i]);
	}
	
	

	
	

	return 0;
}


