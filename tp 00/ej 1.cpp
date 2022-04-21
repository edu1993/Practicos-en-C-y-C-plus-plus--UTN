#include <iostream>

using namespace std;
void variarLetra(char *);

int main(){
	char letra;
	variarLetra(&letra);
	return 0;
}

void variarLetra(char *p_letra){
	*p_letra='a';
	cout <<"Valor char: "<<*p_letra<<endl;
	*p_letra='d';
	cout <<"Valor char: "<<*p_letra<<endl;
	*p_letra=toupper(*p_letra);
	cout <<"Valor char: "<<*p_letra<<endl;
}
