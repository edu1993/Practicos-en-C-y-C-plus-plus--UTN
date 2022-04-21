/* Asignacion dinamica de arreglos 

new: reserva el numero de bytes solicitado por la declaracion.
delete: libera un bloque de bytes reservado con anterioridad.

ej: pedir al usuario n calificaciones y almacenarlas en un areglo dinamico;
*/

#include <iostream>
#include <stdlib.h>

using namespace std;

void pedirnotas();
void mostrarnotas();
int numcalif,*calif;

int main(){
	pedirnotas();
	mostrarnotas();
	delete[] calif;//libera espacio en bytes
	
}

void pedirnotas(){
	cout<<"Digite el numero de calificaciones: "; cin>> numcalif; 
	calif= new int[numcalif];
	for(int i=0; i <numcalif; i++){
		cout<<"ingrese una nota";
		cin>> calif[i];
		
		
	}
}

void mostrarnotas(){
	cout<<"\n\n Mostrandonotas del usuario\n";
	for (int i=0; i <numcalif; i++){
		cout<<calif[i]<<endl;
		
		
	}
	
}
