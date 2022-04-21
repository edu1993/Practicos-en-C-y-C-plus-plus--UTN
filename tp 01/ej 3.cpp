
#include <iostream>
#include <stdlib.h>

using namespace std;

class Punto3D{
	private: 
	 float x,y,z;
	public:
	Punto3D(float,float,float);
	void multiplica(int);
	void visualiza();
};

Punto3D::Punto3D(float _x,float _y,float _z){
	x= _x;
	y= _y;
	z=_z;
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
 	Punto3D *p,*p2;
 	p=new Punto3D(8,9,10);
 	p2=new Punto3D(7,8,9);
 	
 	p->visualiza();
 	p->multiplica(45);
 	p->visualiza();
 	
 	cout<<"--------------------------"<<endl;

 	(*p2).visualiza();
    (*p2).multiplica(45);
 	(*p2).visualiza();
 	
 	
 	
	

	return 0;
}
