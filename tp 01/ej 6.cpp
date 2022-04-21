
#include <iostream>
#include <stdlib.h>

using namespace std;

class Punto3D{
	private: 
	 float *x,*y,*z;
	public:
	Punto3D(float _x,float _y,float _z){
	x=new float;
	y=new float;
	z=new float;
	*x= _x;
	*y= _y;
	*z= _z;
}


	Punto3D(){
	x=new float;
	y=new float;
	z=new float;
	*x= 1;
	*y= 2;
	*z= 3;
}


~Punto3D(){
	delete x;
	delete y;
	delete z;
}
	void multiplica(int mult){
	(*x)= (*x)*mult;
	(*y)= (*y)*mult;
	(*z)=(*z)*mult;
	cout<<"Componentes multiplicadas por "<<mult<<endl;
}
	void visualiza(){
	cout<<"("<<*x<< " ; "<<*y<< " ; "<<*z<< ")"<<endl;
	
}
};







int main(){
 	Punto3D *p,*p2;
 	p=new Punto3D(8,9,10);
 	p2=new Punto3D();
 	
 	
 	p->visualiza();
 	p->multiplica(2);
 	p->visualiza();
 
 	cout<<"--------------------------"<<endl;

 	(*p2).visualiza();
    (*p2).multiplica(2);
 	(*p2).visualiza();
 	
	 
	 (*p2).~Punto3D();
 	p->~Punto3D();
 	
	

	return 0;
}
