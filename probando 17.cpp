#include<iostream>
#include <stdlib.h>
struct persona{

char nombre[20];

char apellido[20];

int edad;

};

typedef persona* punt_pers; // puntero a struct

typedef punt_pers* array_punt_pers; // array de puntero a estructura

void ReserMemo(int);

void LeerDatos(array_punt_pers,int);

void MostrarDatos(array_punt_pers,int);



int main(){

int cant_personas;

printf("Ingrese la cantidad de personas que desea registrar:  ");

scanf("%i",&cant_personas);

fflush(stdin);

ReserMemo(cant_personas);

return 0;

}



void ReserMemo(int cant){

array_punt_pers ficha;

ficha= new punt_pers[cant];

int i;



    for(i=0;i < cant; i++);

    {

        ficha[i]=new persona;

    }



LeerDatos(ficha,cant);

}



void LeerDatos(array_punt_pers ficha, int cant)

{
      for (int i=0; i <cant ; i++){
      	printf("\n ingrese nombre \n");
      	gets(ficha.nombre);
      	fflush(stdin);
      	printf("\n ingrese apellido \n");
      	gets(*(ficha+i).apellido);
      	fflush(stdin);
      	printf("\n ingrese edad \n");
      	scanf("%d",&*(ficha+i).edad);
      	
	  }
     

MostrarDatos(ficha,cant);

}

void MostrarDatos(array_punt_pers ficha, int cant){

// completen

for(int i=0;i < cant; i++)

    {

        delete ficha[i];

    }

    delete ficha;

}
