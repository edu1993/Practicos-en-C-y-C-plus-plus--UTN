
#include <iostream>
#include <stdlib.h>

using namespace std;
class Perro{
	private:
		string nombre,raza;
	public:
	Perro(string,string);
	~Perro();//destructor
	void mostrarDatos();
	void jugar();	
};

Perro::Perro(string n,string r){
	nombre=n;
	raza=r;
}
//destructor
Perro::~Perro(){
}
void Perro::mostrarDatos(){
	cout<<"Nombre: "<<nombre<<endl;
	cout<<"Raza: "<<raza<<endl;
}

void Perro::jugar(){
	cout<<"El perro "<<nombre<<" esta jugando"<<endl;
}

int main(){
	Perro perro1("fido","terrier");
	perro1.mostrarDatos();
	perro1.jugar();
	perro1.~Perro();//destruye objeto
	return 0;
}
