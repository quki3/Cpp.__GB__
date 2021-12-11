/*calcule el valor qeu toma la siguiente func para unos valores dados*/
/*librerias*/
#include<iostream>//es basica 
#include<math.h> //es para operaciones matimaticas complejas

using namespace std;

int main(){
	float x,y,resultado =0;
	
	cout<<"Digite el vvalor de x: ";cin>>x;
	cout<<"now y: ";cin>>y;
	
	resultado = (sqrt(x))/(pow(y,2)-1);	//sqrt = raiz cuatrada
					   		//pow(base,exponente)
	cout<<resultado<<endl;
	return 0;
}