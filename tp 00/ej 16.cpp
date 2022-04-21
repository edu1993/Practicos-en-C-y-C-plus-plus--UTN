#include<iostream>
#include <stdlib.h>
using namespace std;
struct persona{

char nombre[20];

char apellido[20];

int edad;

};

typedef persona *punt_pers; // puntero a struct

typedef punt_pers  *array_punt_pers; // array de puntero a estructura

void ReserMemo();

void LeerDatos(array_punt_pers);

void MostrarDatos(array_punt_pers);



int main(){



printf("Ingrese 20 personas: \n");


fflush(stdin);

ReserMemo();

return 0;

}



void ReserMemo(){

array_punt_pers ficha;

ficha= new punt_pers[20];

int i;



    for(i=0;i < 20; i++) {

        ficha[i]=new persona;

    }



LeerDatos(ficha);

}



void LeerDatos(array_punt_pers ficha)

{
	int i;

    for(i=0;i < 20; i++){
		printf("\nPersona numero: %d \n",i+1);
        printf("Ingrese nombre: \n");
        cin >> ficha[i]->nombre;
        fflush(stdin);
		printf("Ingrese apellido: \n");
       	cin >> ficha[i]->apellido;
        printf("Ingrese edad: \n");
		fflush(stdin);
        cin >> ficha[i]->edad;
        printf(" \n");
    }


MostrarDatos(ficha);

}

void MostrarDatos(array_punt_pers ficha){
system ("cls");
system("color 0a");
int i;

    for(i=0;i < 20; i++){

        printf("\nNombre: %s \n",ficha[i]->nombre);
    	printf("Apellido: %s \n",ficha[i]->apellido);
    	printf("Edad: %d\n",ficha[i]->edad);
    }




for(int i=0;i < 20; i++)

    {

        delete ficha[i];

    }

    delete ficha;

}
