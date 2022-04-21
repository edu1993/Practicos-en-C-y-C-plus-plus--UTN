/* puntros- declaracion de punteros

&n = la dirrecion de n
*n = la variable cuya direccion esta almacenada en n

*/

#include <iostream>

using namespace std;


int main(){
	int num,*dir_num;
	
	
	num =20;
	dir_num=&num;
	cout << "numero :" << *dir_num <<endl;
	cout <<"direccion de memoria: "<< dir__num << endl;
	
	
}
