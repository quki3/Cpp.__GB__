#include<iostream>

using namespace std;

int main(){
	float a,b,c,d ,resultado1 = 0,resultado2=0;
	
	cout<<"Digite el valor de a: ";cin>>a;
	cout<<"Digite el valor de b: ";cin>>b;
	cout<<"Digite el valor de c: ";cin>>c;
	cout<<"Digite el valor de d: ";cin>>d;
	
	resultado1 =(a/b)+1;
	resultado2 = (a+b)/(c+d);
	
	//para redondear un resultado
	cout.precision(2);
	cout<<"\nEl resultado es: "<<resultado1<<endl;
	cout<<"\nEl resultado dos es: "<<resultado2<<endl;
	
	return 0;
}