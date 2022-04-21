#include <iostream>

using namespace std;
/************************************************************************************************************************************/
class matriz;
class vector{
	private:
		int tam;
		int *v;
	public:
     vector(int );
     ~vector();
	void ingresar();
	void mostrar();	
	void producto(matriz );
	
	
};

vector::vector(int t){
	tam=t;
	v=new int[tam];
}

vector::~vector(){
	delete[] v;
}

void vector::ingresar(){
	cout<<"ingrese los valores del vector"<<endl;
	for(int i=0;i <tam;i++){
		cin>>v[i];
	}
}

void vector::mostrar(){
	cout<<"*********"<<endl;
	cout<<"los valores del vector son"<<endl;
	for(int i=0;i <tam;i++){
		cout<<v[i]<<endl;
	}
	cout<<"*********"<<endl;
}



/*****************************************************************************************************************************************************/


class matriz{
	private:
		int x,y;
		int **m;
	public:
		matriz(int,int);
		~matriz();
		void ingresar(); 
		void mostrar();
		friend void vector::producto(matriz ma);
};

matriz::matriz(int a,int b){
	x=a;
	y=b;
	m= new int *[x];
	for(int i=0; i <x;i++){
		m[i]= new int[y];
	}
	
	
}

matriz::~matriz(){
		for(int i=0; i <x;i++){
		delete m[i];
	}
	
	delete[] m;
}

void matriz::ingresar(){
	cout<<"ingrese los valores de la matriz"<<endl;
	for(int i=0;i <x;i++){
			for(int j=0;j <y;j++){
					cout<<"Valor x :"<<i<<" y :"<<j<<endl;
					cin>>m[i][j];
							
				}
	}
}


void matriz::mostrar(){
	cout<<"Los valores de la matriz"<<endl;
	for(int i=0;i <x;i++){
			for(int j=0;j <y;j++){
					cout<<m[i][j]<<"\t";
					
							
				}
				
			cout<<endl;	
	}
}




/************************************************************************************************************************************************/

void vector::producto(matriz ma){
		if(tam==ma.y){
			int *t;
			t= new int[tam];
			for(int i=0; i <ma.x;i++){
				t[i]=0;
					for(int j=0; j <tam;j++){
							t[i]+=ma.m[i][j]*v[j];
				
						}
				
			}
			cout<<"La multiplicacion fue "<<endl;
			 for(int k=0; k <ma.x;k++) cout<<t[k]<<endl;
		}
		else {
			cout<<"no es posible realizar la multiplicacion "<<endl;
		}
 
}
			
				
						
 


/*****************************************************************************************************************************************************/


int main(){
	matriz a(6,6);
	a.ingresar();
	a.mostrar();
	vector b(3);
	b.ingresar();
	cout<<"El producto entre la matriz y el vector es:"<<endl;
	b.producto(a);
	
	
	return 0;
}
