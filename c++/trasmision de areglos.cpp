#include <iostream>

using namespace std;

int max(int*,int);

int main(){
	const int nElementos=5;
	int numeros[nElementos]={1,2,3,4,5};

	cout <<"el max es:"<<max(numeros,nElementos);
}

int max(int*v,int el){
	int	max=0;
	
	for(int i=0; i<el; i++){
		if(*(v+1)>max){
			max= *(v+i);
		}
		
	}
	
	
	
}
