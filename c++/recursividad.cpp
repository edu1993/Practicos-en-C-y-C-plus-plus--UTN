/*  FACTORIAL DE UN NUMERO  
FACTORIAL(N)=1  , SI N=0;
N*FACTORIAL(N-1), SI N>0;
*/

#include <iostream>

using namespace std;
unsigned long long int factorial(int n);
int main(){
	unsigned long long int n;
	cout<< "ingrese un numero "; cin>>n;
	cout << "el factorial es: "<< factorial(n)<< endl;
	
	 return 0;
	}
	
unsigned long long int factorial(int n){
	if (n==0){
		return 1;
		
	}
	else {
		n=n*factorial(n-1);
		return n;
	}
	
	
}	
	
	

