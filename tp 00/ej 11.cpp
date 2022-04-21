/*

 ¿Qué despliegan por pantalla las siguientes sentencias?
 1- char Palabra[]=”UTN”, *p;  puts(Palabra);  p=Palabra; puts(++p); puts(p++); Palabra[3]=’\0’; puts(p); 
 2- int x=5, *px, y, *py, z=3, *pz; px=&x;  py=&y; pz=py; *px +=5; *py=11; printf(“%d,%d,%d”, x,y,*pz); 

Respuestas:
1) Salida:
UTN
TN
TN
N

2) Salida
10,11,11

*/
#include <iostream>


int main(){
	 char Palabra[]="UTN", *p;
	   puts(Palabra);
	     p=Palabra; 
		 puts(++p); 
		 puts(p++); 
		 Palabra[3]='\0';
		  puts(p);
		  
	int x=5, *px, y, *py, z=3, *pz;
	px=&x;
	py=&y;
	pz=py; 
	*px +=5;
	*py=11;
	printf("%d,%d,%d", x,y,*pz); 
	
}
