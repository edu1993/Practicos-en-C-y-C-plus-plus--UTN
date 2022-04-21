//suma de los primeros numeros positivos con recursividad 
#include <iostream>
int sumarecur(int );

using namespace std; 

int  main(){
	int  n;
	cout << "ingrese un numero que actuara de limiente hasta donde sumar " ; cin >> n;
	cout <<"La suma es: "<< sumarecur(n);
	
}

int sumarecur (int n){
	if (n==1){
		
		return 1;
	}
	
	else {
		n=n+sumarecur(n-1);
		
		return n;
	}
	
	
	
}
