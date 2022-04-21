/*
Ejercicio 2: Construya una clase Tiempo que contenga los siguientes atributos enteros: horas,
 minutos y segundos. Haga que la clase contenga 2 constructores, el primero debe tener 3 parámetros Tiempo(int,int,int) 
 y el segundo sólo tendrá un campo que serán los segundos y desensamble el número entero largo 
en horas, minutos y segundos.
*/
#include <iostream>
#include <stdlib.h>

using namespace std;

class Tiempo{
	private:
		int hs,min,seg;
	public:
		Tiempo(int,int,int);
		Tiempo(int);
		void mostrar();
};


Tiempo::Tiempo(int _hs,int _min,int _seg){
	hs=_hs;
	min=_min;
	seg=_seg;
	
}

Tiempo::Tiempo(int tiempo){
	hs= tiempo/3600;
	tiempo %=3600;
	min= tiempo/60;
	seg= tiempo %60;
}

void Tiempo::mostrar(){
	cout<<"La hs es ";
	if (hs<10){
			cout<<"0"<<hs;
	}
	else{
			cout<<hs;
	}
		cout<<":";
	
	if (min<10){
			cout<<"0"<<min;
	}
	else{
			cout<<min;
	}
	cout<<":";
		if (seg<10){
			cout<<"0"<<seg;
	}
	else{
			cout<<seg;
	}
	
	cout<<endl;

}

int main(){
 Tiempo uno(13,24,56);

 uno.mostrar();


 Tiempo	dos(9664);
 dos.mostrar();

	
	return 0;
}

