/*
//lectura o entada de datos

#include<iostream>

using namespace std;

int main(){
	float numero;
	
	cout<<"DIgite un numero";
	
	//cin>> guarda un numero en una variable
	cin>>numero;
	
	cout<<"\nEl numero que digito es: " <<numero;
	
	return 0;
}

// ejercicio 1 suma resta multiplicacion y divicion de dos numeros pedidos
#include<iostream>

using namespace std;

int main(){
	int n1,n2,suma = 0,resta = 0, multiplicacion=0,divicion=0;
	
	cout<<"Digite un numero: ";cin>>n1;
	cout<<"Digite otro numero: ";cin>>n2;
	
	suma=n1+n2;
	resta=n1-n2;
	multiplicacion=n1*n2;
	divicion=n1/n2;
	
	cout<<"\n La suma: "<<suma;
	cout<<"\n La resta es: "<<resta;
	cout<<"\n La multiplicacion es: "<<multiplicacion;
	cout<<"\n La divicion es: "<<divicion;
	
	return 0;
}
*/

//ejercicio 3. Realice un programa quer lea de la entrada estandar los siguientes datos de una persona:
//edad,sexo,altura en metros.
//leerlos y mostrarlos

#include<iostream>

using namespace std;

int main(){
	int edad;
	//char lee solo una letra por eso [numero de caracteres que queremos leer] y solucionamos
	char sexo[10];
	float altura;
	
	cout<<"Digite su edad: ";cin>>edad;
	cout<<"Digite su sexo: ";cin>>sexo;
	cout<<"Digite su altura en metros: ";cin>>altura;
	cout<<"\nEdad:"<<edad;
	cout<<"\nSexo: "<<sexo;
	cout<<"\nAltura en metros: "<<altura;
	
	return 0;
}

