
#include <iostream>
#include "string.h"

using namespace std;

 
char invertir(char *);
 
int  main()
{
 char cadena[50];
 
cout <<"ingrese cadena"<<endl;
 cin.getline(cadena,50,'\n');
 invertir(cadena);
 cout<<"cadena invertida"<<cadena<<endl;
 
}
 
char invertir(char *cadena)
{
 char *ptr_cadena, *ptr_tmp, *tmp;
 int largo;
 ptr_cadena=cadena;
 largo=strlen(ptr_cadena);
 ptr_tmp=ptr_cadena+largo-1;

 for(int i=0;i<largo/2;i++)
 {
  *tmp=*ptr_cadena;
  *ptr_cadena=*ptr_tmp;
  *ptr_tmp=*tmp;
  *ptr_cadena++;
  *ptr_tmp--;
 }
 
 
}

