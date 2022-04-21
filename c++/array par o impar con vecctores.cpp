#include <time.h> 
#include  <stdlib.h>
#include <stdio.h>
#include <iostream>

using namespace std;


int main(){
	srand(time(NULL));
	int v[10];
	int *pv=v;
	for (int i=0; i<10; i++){
		v[i]=rand()%100;
		
		
	}
	
		for (int i=0; i<10; i++){
		 if (*pv%2==0){
		 	
		 	cout<<"el numero "<<*pv<<" es par. su posicion de memoria es "<< pv<< endl;
		 	
		 }
		 pv++;
		
		
	}
	
	
	
	
	
}
