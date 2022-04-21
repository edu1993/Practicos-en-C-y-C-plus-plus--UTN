//clases en c++

#include <iostream>
#include <stdlib.h>

using namespace std;

class Persona{
	private://solo los metodos pueden jugar con los atributos
		int edad;
		string nombre;
	public:
		Persona(int,string);//contructor 
		void leer();
		void correr();
};
//contructor,nos sirve para inicializar los atrributos de la clase
Persona::Persona(int _edad,string _nombre){
	edad=_edad;
	nombre=_nombre;
}
void Persona::leer(){
	cout<<"soy "<<nombre<<" y estoy leyendo un libro"<<endl;
}

void Persona::correr(){
	cout<<"soy "<<nombre<<" y estoy corriendo"<<" tengo "<<edad<<" anios "<<endl;	
}

int main(){
	Persona p= Persona (20,"Eduardo");//forma 1 de crear objeto
	p.leer();
	Persona p2(23,"newton");//forma 2 de crear objeto
	p2.correr();
	Persona p3(34,"juan");
	p3.correr();
	p3.leer();
	
	return 0;
}
