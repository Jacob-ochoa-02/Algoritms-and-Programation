/*					
					Autores:	Jacob Ochoa Lopera
								Juan sebastián López Rodríguez
					Objetivo:	Calculadora Pitagorica
*/

#include <math.h>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int menu();    	// declaracion del menú del programa
float suma();
float resta();
float multiplicacion();
float division();
float hipotenusa();
float cateto();
float Area_triangulo();
float Hallar_lado_triangulo();
float Hallar_Areacuadrado();
int main(){
	int opcion;
	do{
		opcion=menu();
		switch(opcion){
			case 0 : cout<<"--->Gracias por usar el programa!!<---";
			break;
			case 1: suma();
			break;
			case 2: resta();
			break;
			case 3: multiplicacion();
			break;
			case 4: division();
			break;
			case 5: hipotenusa();
			break;
			case 6: cateto();
			break;
			case 7: Area_triangulo();
			break;
			case 8: Hallar_lado_triangulo();
			break;
			case 9: Hallar_Areacuadrado();
			break;
			default : cout << " ---->Ingrese Dato valido<---- ";
		}

	} while (opcion != 0);
	
}

int menu(){
	int opcion;
	system("cls");
	system("color 0B");
	cout<<"--------------------------------\n\t Menu Principal\n--------------------------------\n";
	cout<<"1. Suma"<<endl;
	cout<<"2. Resta"<<endl;
	cout<<"3. Multiplicacion"<<endl;
	cout<<"4. Division"<<endl;
	cout<<"5. Hallar Hipotenusa"<<endl;
	cout<<"6. Hallar cateto"<<endl;
	cout<<"7. Hallar Area del triangulo"<<endl;
	cout<<"8. Hallar Lado faltante"<<endl;
	cout<<"9. Hallar Area de un cuadrado"<<endl;
	cout<<"0. Bye Bye\n--------------------------------"<<endl;
	cout<<"Ingresa una opcion---->"<<endl;
	cin>>opcion;
		return opcion;
}
float suma(){
	system("cls");
	int n;
	float suma = 0;
	float valor;
	int i;
	cout<<"Ingrese cantidad a sumar  ";
	cin>> n;
	for(i=0;i<n;i++){
		cout<<"Ingresa tus valores "<<i+1<<":  ";
		cin>>valor;
		suma = suma+valor;
	}
	cout<<"Tu suma es la siguiente :D  :"<<suma;
	system("pause");
}
float resta(){
	system("cls");
	int n;
	float resta = 0;
	float valor;
	int i;
	cout<<"Ingrese cantidad a restar  ";
	cin>> n;
	cout<<"Ingresa numero al que vas a restar ";
	cin>>resta;
	for(i=0;i<n;i++){
		cout<<"Ingresa tus valores "<<i+1<<":  ";
		cin>>valor;
		resta = resta-valor;
	}
	cout<<"Tu resta es la siguiente :D  :"<<resta;
	system("pause");
}
float multiplicacion(){
	system("cls");
	int n;
	float multiplicacion = 1;
	float valor;
	int i;
		cout<<"Ingrese cantidad a multiplicar ";
		cin>> n;
	
	for(i=0;i<n;i++){
		cout<<"Ingresa tus valores "<<i+1<<":  ";
		cin>>valor;
		multiplicacion = multiplicacion*valor;
	}
	cout<<"Tu multiplicacion es la siguiente :D  :"<<multiplicacion;
	system("pause");
}
float division(){
	system("cls");
	int n;
	float division = 0;
	float valor;
	int i;
		cout<<"Ingrese cantidad a dividir  ";
		cin>> n;
		cout<<"Ingresa numero al que vas a dividir ";
		cin>>division;
	
	for(i=0;i<n;i++){
		cout<<"Ingresa tus valores "<<i+1<<":  ";
		cin>>valor;
		division = division/valor;
	}	
	cout<<"Tu division es la siguiente :D  :"<<division;
	system("pause");
}

float hipotenusa(){
	system("cls");
	float a,b,r;
		cout<<"Ingresa el valor del primer cateto :D ==>   "<<endl;
		cin>>a;
		cout<<"Ingresa el valor del segundo cateto :D ==>   "<<endl;
		cin>>b;
		
		r = sqrt((pow(a,2))+(pow(b,2)));
		cout<<"La hipotenusa es la siguente :D ==>  "<<endl<<r<<endl;
	
	system("pause");
}
float cateto(){
	system("cls");
	float a,b,r;
		cout<<"Ingresa el valor de la hipotenusa :D ==>  "<<endl;
		cin>>a;
		cout<<"Ingresa el valor del cateto :D ==>  "<<endl;
		cin>>b;
		
		r = sqrt((pow(a,2)-pow(b,2)));
		cout<<"El valor del cateto faltante es el siguiente :D ==>  "<<endl<<r<<endl;
	
	system("pause");
}
float Area_triangulo(){
	system("cls");
	float a, b, r;
		cout<<"Ingresa la base de tu triangulo :D ==>"<<endl;
		cin>>a;
		cout<<"Ingresa la altura de tu triangulo :D ==>"<<endl;
		cin>>b;
	
		r = (a*b)/2;
		cout<<"El valor del Area que buscabas es el siguiente :D ==>"<<endl<<r<<endl;
		
	system("pause");
}
float Hallar_lado_triangulo(){
	system("cls");
	float area, b, r;
		
		cout<<"Ingresa el Area de tu triangulo :D ==>"<<endl;
		cin>>area;
		
		cout<<"Ingresa la base o altura de tu triangulo :D ==>"<<endl;
		cin>>b;
		
		r = (area*2)/b;
		
		cout<<"El valor de tu lado faltante es el siguiente :D ==>"<<endl<<r<<endl;
		
	system("pause");
}

float Hallar_Areacuadrado(){
	system("cls");
	float area,lado1,lado2;
	
	cout<<"Ingresa el lado 1 de tu cuadrado";
	cin>>lado1;
	cout<<"Ingresa el lado 2 de tu cuadrado";
	cin>>lado2;
	area=(lado1*lado2);
	cout<<"El Area de tu cuadrado es la siguiente :D"<<endl<<area<<endl;
	system("pause");
}

