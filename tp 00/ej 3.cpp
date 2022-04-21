#include <iostream>

using namespace std;

int main(){
	int a=5,b=10,c;
	int *p1,*p2,*p3;
	p1=&a;
	p2=&b;
	p3=&c;
	
	*p3=*p1+*p2;
	cout<<"A+B=C :"<<*p3<<endl;
	*p3=*p2-*p1;
	cout<<"B-A=C :"<<*p3<<endl;
	(*p3)*=2;
	cout<<"2*C :"<<*p3<<endl;
	*p1=*p3+*p2;
	cout<<"C+B=A :"<<*p1<<endl;
	cout<<"Direccion memoria a :"<<p1<<endl;
	cout<<"Direccion memoria b :"<<p2<<endl;
	cout<<"Direccion memoria c :"<<p3<<endl;
}
