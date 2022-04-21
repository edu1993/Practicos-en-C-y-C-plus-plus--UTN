#include <iostream>

using namespace std;

struct Persona{
	char nombre[30];
	int edad;
}persona,*p_persona;

void ingresarDatos();
void mostraDatos(Persona *);


int main(){
	ingresarDatos();
	mostraDatos(p_persona);	
	
}

void ingresarDatos(){
	cout << "digite su nombre :";
	cin.getline(p_persona->nombre,30,'\n');
	cout<< "digite su edad";
	cin>>p_persona->edad;
	
}

void mostraDatos(Persona *p_persona){
	cout<<"su nombre: "<<p_persona->nombre<< endl;
	cout <<"su edad :"<<p_persona->edad;
}
