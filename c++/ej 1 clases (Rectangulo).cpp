#include <iostream>
#include <stdlib.h>

using namespace std;

class Rectangulo{
	private:
		float largo;
		float ancho;
	public:
		Rectangulo(float,float);
		void perimetro();
		void area();
};

Rectangulo::Rectangulo(float l,float a){
	largo=l;
	ancho=a;
};

void Rectangulo::area(){
	float res;
	res=largo*ancho;
	cout<<"El area es "<<res<<endl;
}

void Rectangulo::perimetro(){
	float res;
	res=(largo*2)+(ancho*2);
	cout<<"El perimetro es "<<res<<endl;
}

int main(){
	Rectangulo r= new Rectangulo(100);
    for(int i=0; i <100;i++){
    	r.Rectangulo(i/2,i/3);
    	r.area();
    	r.perimetro();
	}
}



