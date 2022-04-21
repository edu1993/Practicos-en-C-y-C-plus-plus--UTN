#include <iostream>

using namespace std;

int main(){
	int *v;
	v=new int[4];
	
	for(int i=0; i <4;i++){
		cout<<"Ingrese numero "<<i+1<<endl;
		cin>>*(v+i);
		
	}
	
		for(int i=0; i <4;i++){
		
		if (*(v+i)%2==0){
			cout<<"El numero "<< *(v+i)<<" en la posicion "<<i+1<<" es par "<<endl;
		}
		
	}
	
	delete[] v;
	
	
}
