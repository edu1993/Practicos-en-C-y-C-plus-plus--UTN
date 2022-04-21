#include<iostream>
using namespace std;
struct persona{

char nombre[20];

char apellido[20];

int edad;

};

typedef persona *punt_pers; // puntero a struct

typedef punt_pers  *array_punt_pers; // array de puntero a estructura

void ReserMemo(int);

void LeerDatos(array_punt_pers,int);

void MostrarDatos(array_punt_pers,int);



int main(){

int cant_personas;

printf("Ingrese la cantidad de personas que desea registrar:  ");

scanf("%d",&cant_personas);

fflush(stdin);

ReserMemo(cant_personas);

return 0;

}



void ReserMemo(int cant){

array_punt_pers ficha;

ficha= new punt_pers[cant];

int i;



    for(i=0;i < cant; i++) {

        ficha[i]=new persona;

    }



LeerDatos(ficha,cant);

}



void LeerDatos(array_punt_pers ficha, int cant)

{
	int i;

    for(i=0;i < cant; i++){

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


MostrarDatos(ficha,cant);

}

void MostrarDatos(array_punt_pers ficha, int cant){
system ("cls");
system("color 0a");
int i;

    for(i=0;i < cant; i++){

        printf("\nNombre: %s \n",ficha[i]->nombre);
    	printf("Apellido: %s \n",ficha[i]->apellido);
    	printf("Edad: %d\n",ficha[i]->edad);
    }




for(int i=0;i < cant; i++)

    {

        delete ficha[i];

    }

    delete ficha;

}
