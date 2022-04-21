
#include <iostream>
#include <stdlib.h>

using namespace std;

class Caja{
	private:
		float *largo;
		float *ancho;
		float  *alto;
		
	public:
		void cargarDatos(float l,float an,float al){
			largo= new float;
			ancho = new float;
			alto= new float;		
		
			*largo=l;
			*ancho=an;
			*alto=al;
		}
		
		
		
	void imprimirDatos(){
			cout<<"\nLargo: "<<(*largo)<<"\nAncho: "<<(*ancho)<<"\nAlto: "<<(*alto)<<endl;
		}
	
	void duplicarLargo(){
			*largo *= 2;
		}
		
		void volumen(){
			     float res= (*largo)*(*ancho)*(*alto);
			     cout<<"Volumen: "<<res;
		}
	
	 void caja_res(Caja &a, Caja &b){
	      	largo= new float;
			ancho = new float;
			alto= new float;
			
			*largo= *a.largo +*b.largo;
			*ancho= *a.ancho +*b.ancho;
			*alto = *a.alto + *b.alto;		
		
	 	
	 }	
		
	

};


	
void  borrar(Caja &a){//borra el objeto
	delete &a;		   
}




int main(){
Caja *c1,*c2,*c3;
c1=new Caja;
c2= new Caja;
c3= new Caja;

c1->cargarDatos(1,1,1);
c2->cargarDatos(2,3,4);

c3->caja_res(*c1,*c2);
//c3->imprimirDatos();

borrar(*c3);

c3->imprimirDatos();
c1->imprimirDatos();
	return 0;
}
