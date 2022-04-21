#include <iostream>

using namespace std;
void variarNumero(int *);

int main(){
	int  numero;
	variarNumero(&numero);
	return 0;
}

void variarNumero(int *p_numero){
	*p_numero=7;
	cout <<"Valor X: "<<*p_numero<<endl;
	(*p_numero)++;
	cout <<"Valor X++: "<<*p_numero<<endl;
	(*p_numero)--;
	cout <<"Valor X--: "<<*p_numero<<endl;
	(*p_numero)+=4;
	cout <<"Valor X += 4: "<<*p_numero<<endl;
	(*p_numero)-=8;
	cout <<"Valor X -=8 : "<<*p_numero<<endl;
	
}
