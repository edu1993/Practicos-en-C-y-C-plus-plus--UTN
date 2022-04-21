#include <iostream>
#include <math.h>

using namespace std;
class complejo{
	private: 
	float x;
	float y;
	float modulo,angulo;
	public :
 	complejo();
 	void cartesiana(float , float);
 	void polares(float , float);//modulo,angulo
 	//el primer numero es el que se multiplica en el segundo objeto ingresado es donde se guarda
 	void sumar(complejo &,complejo &);
	void resta(complejo &,complejo &);	
	void mul(complejo &,complejo &);
	void divicion(complejo &,complejo &);
	void mostrar( int selec);//1 para polar,0 carteciano
	
		
	
};




void complejo::mostrar(int selec){
	if (selec ==1){
		cout<<"Mod: "<<modulo<<" , Angulo: "<<angulo<<endl;
	}
	else {
		cout<<x<<" + "<<y<<" i"<<endl;
	}
}


 complejo::complejo(){
	x=0;
	y=0;
	modulo=0;
	angulo=0;
	
}

void complejo::cartesiana(float a, float b){
	x=a;
	y=b;
	angulo= tan (y/x);
	modulo = sqrt(pow(x,2)+pow(y,2));
}

void complejo::polares(float a,float b){
	modulo=a;
	angulo=b;
	x=cos(angulo)*modulo;
	y=sin(angulo)*modulo;
}

void complejo::sumar(complejo &n,complejo &r){
	float rx,ry;
	rx= x+ n.x;
	ry = y + n.y;
	r.cartesiana(rx,ry);
	
}

void complejo::resta(complejo &n,complejo &r){
	float rx,ry;
	rx= x- n.x;
	ry = y - n.y;
	
	r.cartesiana(rx,ry);
	
}

void complejo::mul(complejo &n,complejo &r){
	float rx,ry;
	rx= x*n.x+(y*n.y*(-1));
	ry =x*n.y+n.x*y;
	
	r.cartesiana(rx,ry);

	
}

void complejo::divicion(complejo &n,complejo &r){
	float rx,ry;
	rx=(x*n.x+y*n.y)/(pow(n.x,2)+pow(n.y,2));	
	ry= (y*n.x-x*n.y)/(pow(n.x,2)+pow(n.y,2));
	r.cartesiana(rx,ry);
	
}

int main(){
	
complejo a;
complejo b;	
complejo c;
int tipo;	
int s;
int t_mostrar,n=1;
while (n==1){

cout <<"Calculadora numeros complejos"<<endl;
cout <<"1. Sumar"<<endl;
cout <<"2. Restar"<<endl;
cout <<"3. Multiplicar"<<endl;	
cout <<"4. Dividir"<<endl;
cout <<"5. Convertir "<<endl;
cout <<"Ingrese el numero de la operacion que desea realizar:  ";cin>> s;
system ("cls");
//INGREO DE LOS DOS NUMEROS A OPERAR
				cout<<"Numero a : \nIngrese 1 para ingresar en forma polar, y 2 para forma carteciana"<<endl;cin>>tipo;
						system("cls");
					if (tipo==1){
						float m;
						float angulo;
						cout<<"Ingrese modulo"<<endl;cin>>m;
						cout<<"Ingrese angulo"<<endl;cin>>angulo;
						a.polares(m,angulo);
					}
					if (tipo==2){
						float x;
						float y;
						cout<<"Ingrese parte real"<<endl;cin>>x;
						cout<<"Ingrese parte imaginaria"<<endl;cin>>y;
						a.cartesiana(x,y);
						
					}
					if(s != 5){
							system("cls");
					cout<<"Numero b: \nIngrese 1 para ingresar en forma polar, y 2 para forma carteciana"<<endl;cin>>tipo;
						system("cls");
					if (tipo==1){
						float m;
						float angulo;
						cout<<"Ingrese modulo"<<endl;cin>>m;
						cout<<"Ingrese angulo"<<endl;cin>>angulo;
						b.polares(m,angulo);
					}
					if (tipo==2){
						float x;
						float y;
						cout<<"Ingrese parte real"<<endl;
						cin>>x;
						cout<<"Ingrese parte imaginaria"<<endl;
						cin>>y;
						b.cartesiana(x,y);
						
					}
						
					}
				
system("cls");
//*****************************************************************************************
switch(s){
	
	case 1:
			a.sumar(b,c);
			cout<<"precione 1 para ver el resultado en polar y 0 para ver en caterciano"<<endl;
			cin>>t_mostrar;
			if (t_mostrar){
				c.mostrar(1);
			}
			else 
			{
				c.mostrar(0);
			}
			break;
	case  2:
			a.resta(b,c);
			cout<<"precione 1 para ver el resultado en polar y 0 para ver en caterciano"<<endl;
			cin>>t_mostrar;
			if (t_mostrar){
				c.mostrar(1);
			}
			else 
			{
				c.mostrar(0);
			}
			break;
		
		

	
	case  3:
			a.mul(b,c);
			cout<<"precione 1 para ver el resultado en polar y 0 para ver en caterciano"<<endl;
			cin>>t_mostrar;
			if (t_mostrar){
				c.mostrar(1);
			}
			else 
			{
				c.mostrar(0);
			}
			break;
		
		
	
	
	case  4:
			a.divicion(b,c);
			cout<<"precione 1 para ver el resultado en polar y 0 para ver en caterciano"<<endl;
			cin>>t_mostrar;
			if (t_mostrar){
				c.mostrar(1);
			}
			else 
			{
				c.mostrar(0);
			}
			break;
		
		
    case  5:
			
			cout<<"precione 1 para convertir a polar y 0 para convertir a caterciano"<<endl;
			system ("cls");
			cin>>t_mostrar;
			if (t_mostrar){
				a.mostrar(1);
			}
			else 
			{
				a.mostrar(0);
			}
			break;
		
	
	
	
}

				
cout<<"ingrese 1 para hacer una nueva operacion y 0 para salir"<<endl;
cin >> n;
system("cls");

}	
	
	

return 0;
}







