#include<iostream>

using namespace std;

int main(){
	//declaramos variables
	float a,b,c,d,f,e,res=0;
	
	//pedimos por scrin valores
	cout<<"\n Digite el valor de a: ";cin>>a;
	cout<<"\n now b: ";cin>>b;
	cout<<"\n now c: ";cin>>c;
	cout<<"\n now d: ";cin>>d;
	cout<<"\n now e: ";cin>>e;
	cout<<"\n now f: ";cin>>f;
	
	//hacemos la operacion matematica
	res = (a+(b/c))/(d+(e/f));
	
	//redondeamos el resultado
	cout.precision(2);
	
	//mostramos por scrin la res
	cout<<"\n Res: "<<res;
	
	return 0;
	
	
	
}