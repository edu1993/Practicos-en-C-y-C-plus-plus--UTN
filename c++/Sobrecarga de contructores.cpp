#include <iostream>
#include <stdlib.h>

using namespace std;

class Fecha{
	private:
		int dia;
		int mes;
		int anio;
	public:
		Fecha(int,int,int);//contructor 1
		Fecha(long);//contrutor 2
		void mostrarFecha();
};


//contructor 1
//fecha dia/mes/anio
Fecha::Fecha(int _dia,int _mes, int _anio){
	anio= _anio;
	dia= _dia;
	mes=_mes;
}

//contructor 2
// anioMesDia
Fecha::Fecha(long fecha){
	anio=int (fecha/10000);//extraer el año
	mes=int((fecha-anio*10000)/100);//extraer el mes
	dia=int((fecha-anio*10000-mes*100)); //extraer el dia
}



void Fecha::mostrarFecha(){
	cout <<"La fecha es: "<<dia<<"/"<<mes<<"/"<<anio<<endl;
}
int main(){
 Fecha hoy(30,3,2020);
 Fecha ayer(20200329);
 hoy.mostrarFecha();
 ayer.mostrarFecha();
	
}


