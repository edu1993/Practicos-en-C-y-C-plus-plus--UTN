#include <iostream>
#include <string.h>

using namespace std;
char palabra[50];
void ingrese ();
int contvocal(char *);

int main(){
	
ingrese ();
cout << "el numero de vocales es "<<contvocal(palabra);
	
	return 0;
}

void ingrese (){
	cout<<"ingrese palabra ";
	cin.getline(palabra,50,'\n');
	strupr(palabra);//pasa a mayuscula
}

int contvocal(char *palabra){
	int cont=0;
	while(*palabra){//mientras palabra no sea nulo
		switch(*palabra){
			case 'A':
			case 'E':
			case 'i':
			case 'O':
			case 'U': cont++;
		}
		palabra++;
	}
	return cont;
}

