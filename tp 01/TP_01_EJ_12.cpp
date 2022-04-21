#include <iostream>

using namespace std;


class pila_enteros{
	private:
	int cont=0;	
	int *pila;
	int pos_en_pila=0;
	int max_pila;
	public:
		pila_enteros(int );
		void apilar(int);
		int desapilar();
		bool detector_vacia();
		bool detector_llena();
		void mostrar();
};

void pila_enteros::mostrar(){
	cout<<"la pila tiene estos valores"<<endl;
	for(int i=0; i <pos_en_pila;i++){
		cout<<pila[i]<<endl;
	}
	
}

pila_enteros::pila_enteros(int lugares){
	pila= new int[lugares];
	max_pila = lugares-1;
	
}

void pila_enteros::apilar(int n){
	if (detector_llena())
	{
		
		pila[pos_en_pila]=n;
		
		
		pos_en_pila++;
	
		
	}

		
	

}

int  pila_enteros::desapilar(){
        
          if (cont==0){
          	pos_en_pila--;
          	cont++;
		  }
        	int n;
	        n=pila[pos_en_pila];
	     	
		    pila[pos_en_pila]=NULL;
	    	pos_en_pila--;
	    	return n;
	
	
}

bool pila_enteros::detector_vacia()
{
	if (pos_en_pila==-1){
		return false;
		
	}
	
	else {
		return true;
	}

}


bool pila_enteros::detector_llena()
{
	if (pos_en_pila>max_pila){
		return false;
		
	}
	
	else {
		return true;
		
	}

}

int main(){
	int tama,s=0,numero;

	cout<<"ingrese el tamaño de la pila"<<endl;
	cin>>tama;
	pila_enteros pila(tama);
	//ingresar numeros a la pila
	while (pila.detector_llena())
	{	cout<<"ingrese numero"<<endl;
		cin>>numero;
		pila.apilar(numero);
			
	}

	//sacar numeros
	cout<<"los numeros de la pila son: "<<endl;
	while (pila.detector_vacia()){
		int numero;
		
			numero=pila.desapilar();
		
		 cout<<numero<<endl;

	}
	
	
	
}

 
