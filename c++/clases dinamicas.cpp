
#include <iostream>
#include <stdlib.h>

using namespace std;

class Punto{
	private:
		int x,y;
	public:
		Punto (int, int);
		void mul(int m);
		void mostrar();
		
};

Punto::Punto(int _x,int _y){
	x= _x;
	y= _y;
	
	
}

void Punto::mul(int m){
	x= x*m;
	y=y*m;
}

void Punto::mostrar(){
	cout<<"("<<x<<" , "<<y<<")"<<endl;
}

int main(){
Punto *p1,*p2;
p1 = new Punto();
p2 = new Punto(3,4);
p2->mostrar();

delete p1;
}
