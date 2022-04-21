#include <iostream>
#include <conio.h>

using namespace std;

class matriz{
	
	int m[3][3]={{1,2,3},{4,5,6},{7,8,9}};

	friend void mul();
		
};

class vector{
	
	int v[3]={3,2,1};

	
	friend void mul();
		
	
};

void mul(matriz &m,vector &v){
	int vr[3],j=0,sum,rm;
	for (int h=0;h<3;h++){
		sum=0;
		for (int i=0;i<3;i++){
		rm=v.v[i]*m.m[j][i];
		sum+=rm;
			}
		vr[h]=sum;
		
		j++;
	}
	
	for (int l=0;l <3;l++){
		cout<<vr[l]endl;
	}
	
	 
	
	
}

int main(){
	vector vec;
	matriz ma;
	mul(ma,vec);
}


