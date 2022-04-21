
#include <iostream>
#include <stdlib.h>

using namespace std;

class Punto3D{
	private: 
	 float x,y,z;
	public:
	void inicializa(float,float,float); 
	void multiplica(int);
	void visualiza();
};
void Punto3D::inicializa(float _x,float _y,float _z){
	x= _x;
	y= _y;
	z= _z;
	
}

void Punto3D::multiplica(int mult){
	x= x*mult;
	y= y*mult;
	z=z*mult;
	cout<<"Componentes multiplicadas por "<<mult<<endl;
}

void Punto3D::visualiza(){
	cout<<"("<<x<< " ; "<<y<< " ; "<<z<< ")"<<endl;
	
}

int main(){
	Punto3D p;
	p.inicializa(23,4,65);
	p.visualiza();
	p.multiplica(2);
	p.visualiza();

	return 0;
}
