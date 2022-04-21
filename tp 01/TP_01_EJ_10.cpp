#include <iostream>
#include <math.h>
using namespace std;

class conjunto{
	private:
	int *e; //vector donde se guardaran los elementos
	int tam;
	public:
	
	conjunto(int );
	conjunto(const conjunto &);
	~conjunto();
	void mostrar();
	void ingresar();
	void borrar(int );
	bool elemento_pertenece(int );
	void vaciar();	
	void agregar(int x);
	void igual(conjunto );	
	conjunto interseccion(conjunto);
	conjunto union_c(conjunto);
};

conjunto::conjunto(int t){
	tam=t;
	e=new int[tam];
	for (int i=0; i <tam ;i++) e[i]=0;					
}

conjunto::conjunto(const conjunto &q){
	tam= q.tam;
	e =new int [tam];
	for (int i=0; i <tam ;i++) e[i]=q.e[i];
}

conjunto::~conjunto(){	
delete [] e;
} 

void conjunto::mostrar(){
	for (int i=0; i <tam ;i++){
		cout<<e[i]<<"\t"; 
	} 
	cout<<"\n";
}

void conjunto::borrar(int x){
		
		if (this->elemento_pertenece(x)){		
		int *aux= new int[tam-1];
		
			for(int i =0,j=0; i <tam;i++){
				if (e[i]==x){
					i++;
					aux[j]=e[i];
					j++;
				}
				else{
					aux[j]=e[i];
					j++;
				}
				
			
				
			}	
			delete[] e;
			tam  = tam-1;
			 e= new int[tam];
			for(int i =0; i <tam;i++){
				e[i]= aux[i];
			}
			delete []	aux;	
			cout<<"Borrado exitoso"<<endl;
					
	}
	else	{
		cout<<"No se pudo borrar"<<endl;
		}
}

void conjunto::ingresar(){
	cout<<"Ingrese elementos del conjunto "<<endl;
	for (int i=0; i <tam ;i++){
		cout<<"Elemento "<<i+1<<" de "<<tam<<endl;
		cin >>e[i];
	}
	cout<<"Elementos ingresados con exito"<<endl;
}

bool conjunto::elemento_pertenece(int elem){
	bool reg;
	for (int i=0; i <tam; i++){
		if(e[i]==elem){
			//cout<<"el elemento "<<elem<<" se encuentra en el conjunto"<<endl;
			reg=true;
			break;
		}
		if(i==tam-1){
			//cout<<"el elemento "<<elem<<" no se encuentra en el conjunto"<<endl;
			reg=false;
		}
	}
	return reg;
}

void conjunto::vaciar(){
	tam=0;
	delete[] e;
}

void conjunto::agregar(int x){
	if (!this->elemento_pertenece(x))
	{		
		int tamr=tam+1;
		int *aux = new int[tamr];
		for(int i=0; i <tam;i++){
			aux[i]=e[i];
			
		}
		aux[tamr-1]=x;
		
		delete[] e;
		tam=tamr;
		e = new int[tam];
		for(int i=0; i <tam;i++){
			e[i]=aux[i];
			
		}
		delete[] aux;
		cout<<"Agregado al conjunto"<<endl;
	}
	else
	{
		cout<<"No agregado al conjunto"<<endl;
	}
}

conjunto conjunto::interseccion(conjunto a) 
{
	int cont=0, tam_max, k=-1;
	
	if(tam >= a.tam){
		tam_max = tam;
	}
	else{
		tam_max = a.tam;
	}
	
	
	for(int i=0 ; i<tam_max ; i++)	
	{									
		for(int j=0 ; j<a.tam ; j++)
		{
			if(e[i] == a.e[j])
			cont++;
		}
	}
	
	conjunto p(cont);
	for(int i=0 ; i<tam ; i++)		
	{
		for(int j=0 ; j<a.tam ; j++)
		{
			if(e[i] == a.e[j])
			{
				k++;
				p.e[k] = e[i];
			}
		}
	}

	return p;
}

conjunto conjunto::union_c(conjunto a)	//Devolver un nuevo conjunto con la union de ambos
{
	int j=0, aux, cont=0;
	conjunto p(tam+a.tam);
	
	for(int i=0 ; i<tam ; i++)		//Llenar el nuevo conjunto con los elementos compartidos
	p.e[i] = e[i];
	for(int i=tam ; i<(tam+a.tam) ; i++)
	{
		p.e[i] = a.e[j];
		j++;
	}	
	
	for(int i=0 ; i<(tam+a.tam) ; i++)		//Eliminar los elementos repetidos
	{
		for(int j=0 ; j<(tam+a.tam) ; j++)
		{
			if(i!=j)
			{
				if(p.e[i] == p.e[j])
				{
					cont++;
					for(int k=j ; k<(tam+a.tam) ; k++)
					p.e[k] = p.e[k+1];
				}
			}
		}
	}
	
	p.tam = p.tam - (sqrt(cont));		
			
	return p;
}

void conjunto::igual(conjunto a)	//Verificar si dos conjuntos son iguales
{
	int cont=0;
	bool iguales = false;
	
	if(tam == a.tam)
	{
		for(int i=0 ; i<tam ; i++)
		{
			for(int j=0 ; j<tam ; j++)
			{
				if(e[i] == a.e[j])
				cont++;
			}
		}
		
		if(cont == tam){
			cout<<"Conjuntos  iguales"<<endl;
		}
		
		else{
			cout<<"Conjuntos no iguales"<<endl;
		}
		
	}
	else{
			cout<<"Conjuntos no iguales"<<endl;
	}
	

}




int main(){
	
	conjunto a(2);//se inizializan los conjuntos en tamaño 2
	conjunto b(2);
	cout <<"Conjunto A ingresar "<<endl;
	a.ingresar();
	cout <<"Conjunto B ingresar "<<endl;
	b.ingresar();
	cout <<"Se muestra A "<<endl;
	a.mostrar();
	cout <<"Conjunto B ingresar "<<endl;
	b.mostrar();
	cout <<"Se agraga 3 al conjunto A "<<endl;
	a.agregar(3);
	cout <<"Se comparacion conjuntos A Y B "<<endl;
	a.igual(b);
	cout <<"Se muestra A "<<endl;
	a.mostrar();
	cout <<"Intersecion entre A y B"<<endl;
	conjunto c= a.interseccion(b);
	cout <<"Se muestra C (intersepcion entre A y B)"<<endl;
	c.mostrar();
	cout <<"Union entre A y B"<<endl;
	conjunto d= a.union_c(b);
	cout <<"Se muestra D (Union entre A y B)"<<endl;
	d.mostrar();
	
	
	return 0;
}

