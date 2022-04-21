#include <iostream>

using namespace std;
struct Persona{
	char nombre[30];
	int edad;
	int  dni;
}*p_persona;

p_persona = new Persona[20];
void ingresarDatos();
void mostrarDatos( Persona *);




int main(){
ingresarDatos();
mostrarDatos(p_persona);	

delete[] persona;
	return 0;
}

void ingresarDatos(){
	for (int i=0; i<3;i++){
		cout <<"digite su nombre : ";
		cin.getline((p_persona+i)->nombre,30,'\n');
		fflush(stdin);
		cout <<"ingrese edad : ";
		cin>>(p_persona+i)->edad;
		fflush(stdin);
		cout <<"ingrese nota : ";
		cin>>(p_persona+i)->dni;
		fflush(stdin);	
	}
}


void mostrarDatos( Persona *p_persona){
		for (int i=0; i<3;i++){
		cout <<" Nombre :"<<(p_persona+i)->nombre<<endl;
		cout <<" Edad : "<<(p_persona+i)->edad<<endl;
		cout <<" Nota : "<<(p_persona+i)->dni<<endl;
		
		}
	
}
