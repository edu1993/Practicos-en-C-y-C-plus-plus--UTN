#include <iostream>
// fucion recursiva que calcula un numero elevadao
using namespace std;

int potencia(int,int );

int main(){
  int base,exponente;
  
  cout << "digite la base: "; cin >>base;
  cout << "digite el exponente: "; cin>> exponente;
  cout << "la potencia es: "<< potencia(base,exponente);
  
  	
  return 0;	
}

int potencia(int x, int y ){
	if (y==0) return 1;
	else{
		x=x*potencia(x,y-1);
		return x;
		
	}
	
	
}
