//metodos contructores y modificadores (getters y setters)
#include <iostream>
#include <stdlib.h>

using namespace std;
class Punto{
	private:
		int x,y;
	public:
		Punto();
		void setPunto(int ,int);
		int getPuntox();
		int getPuntoy();
};

Punto::Punto(){
	
}
//establecemos valores a los atributos
void Punto::setPunto(int _x,int_y){
	x=_x;
	y=_y;
}

int Punto::getPuntox(){
	return x;
}

int Punto::getPuntoy(){
	return y;
}


int main(){
Punto punto1;
punto1.setPunto(10,20);
cout<<"("<<punto1.getPuntox()<<" ; "<<punto1.getPuntoy()<<")"<<endl;

	return 0;
}
