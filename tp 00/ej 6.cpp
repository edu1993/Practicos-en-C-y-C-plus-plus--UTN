#include <iostream>
#include <clocale>
using namespace std;
struct Fechanacimiento{
	int dia;
	int mes;
	int an;
};

struct Persona{
	char nombre[40];
	int edad;
	int dni;
	Fechanacimiento fn;	
	
};

void ingresarDatos(Persona *);
void mostrarDatos(Persona *);

int main(){
	setlocale(LC_CTYPE,"Spanish");//setea la consola al español
	Persona *p_persona;
    p_persona= new Persona;
    ingresarDatos(p_persona);
	mostrarDatos(p_persona);
	
	delete p_persona;
	return 0;
}


void ingresarDatos(Persona *p_persona){
	
	cout<<"\n Igrese datos de la persona \n";
	fflush(stdin);
	cout<<"Ingrese nombre "<<endl;
	cin.getline(p_persona->nombre,40,'\n');
	cout<<"\nIngrese edad "<<endl;
	cin>>p_persona->edad;
	cout<<"\nIngrese dni "<<endl;
	cin>>p_persona->dni;
	cout<<"\nIngrese Fecha de nacimiento "<<endl;
	cout<<"\nDia "<<endl;
	cin>>p_persona->fn.dia;
	cout<<"\nMes"<<endl;
	cin>>p_persona->fn.mes;
	cout<<"\naño"<<endl;
	cin>>p_persona->fn.an;
	system("cls");
	
}


void mostrarDatos(Persona *p_persona){
	cout<<"Nombre: "<<p_persona->nombre<<endl;
	cout<<"Edad: "<<p_persona->edad<<endl;
	cout<<"D.N.I : "<<p_persona->dni<<endl;
	cout<<"Fecha nacimiento: "<<p_persona->fn.dia<<"/"<<p_persona->fn.mes<<"/"<<p_persona->fn.an<< endl;
	
	
}
