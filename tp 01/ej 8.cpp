
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
	*y= 1;
	*z= 1;
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

float escalar(Punto3D &aux){
	float res_prod=((*x ) * *aux.x )+((*y ) * *aux.y )+((*z ) * *aux.z );
	return res_prod;
}

void sumaVec(Punto3D &a){
	*x += *a.x;
	*y += *a.y;
	*z += *a.z;
}

};







int main(){
 	Punto3D *p,*p2;
 	p=new Punto3D(5,6,7);
 	p2=new Punto3D();
 	
 	
 	p->visualiza();
 	//p->multiplica(2);
 	p->visualiza();
 
 	cout<<"--------------------------"<<endl;

 	(*p2).visualiza();
    //(*p2).multiplica(2);
 	(*p2).visualiza();
 	
 	cout<<"producto escalar: "<<(*p2).escalar(*p) <<endl;
 	
 	(*p).sumaVec()
	
	 
	 (*p2).~Punto3D();
 	p->~Punto3D();
 	
	

	return 0;
}
