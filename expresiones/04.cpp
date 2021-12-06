/*la calificacion media de un estudiante es la media ponderada de tress notas la nota de practicas
que cuenta un 30 % del total, la notra teorica que cuenta un
60% y la nota de participacion que cuenta un 10% restante. escriba un programa 
que lea de la entrada estandar las tres notas de un alumno y escriba en la salida
estandar su nota fina;*/
//incluimos la libreria default de c++
#include<iostream>

//using std para cout
using namespace std;

int main(){
	//definimos la variables
	float practica,teorica,participacion,res;
	
	//le pedimos los valores al user
	cout<<"\n nota practica: ";cin>>practica;
	cout<<"\n nota teorica: ";cin>>teorica;
	cout<<"\n nota participacion: ";cin>>participacion;
	
	//sacamos el pporcentage
	practica *= 0.30;//practica = practica * 0.30
	teorica *= 0.60;
	participacion *= 0.10;
	
	res = practica+teorica+participacion;
	cout<<res;
	
	return 0;
}

