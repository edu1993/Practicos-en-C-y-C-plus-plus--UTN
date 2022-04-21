//trasmicion de direciones
#include <iostream>

using namespace std;
void intercambio (float*,float*);

int main(){
	float n1=20.8,n2=6.78;
	
	cout<<"primer numero : "<<n1<<endl;
	cout<<"segundo numero : "<<n2<<endl;
	intercambio(&n1,&n2);
	cout<<"primer numero : "<<n1<<endl;
	cout<<"segundo numero : "<<n2<<endl;
	
}


void intercambio(float *d1,float *d2){
	float aux;
	
	aux=*d1;
	*d1=*d2;
	*d2= aux;
	
	
	
}
