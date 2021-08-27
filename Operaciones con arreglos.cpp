/***					Autores: Todos
						Objetivo:Implementar operaciones con arreglos
						Fecha:21/08/2021				***/

#include <iostream>
#include <string>
#include <iomanip>
#include <stdio.h>
#define TAMMAX 45
#define TAMMIN 1

using namespace std;

int llenarVectorUsu(string vec_nombre[], float vec_notas[]);
void mostrarVector(string vec_nombre[], float vec_notas[], int n);
void ordenBaraja(string vec_nombre[],float vec_notas[], int n);

int main(){
	int n;
	string vec_nombre[TAMMAX];
	float vec_notas[TAMMAX];
	n = llenarVectorUsu(vec_nombre,vec_notas);
	mostrarVector(vec_nombre, vec_notas, n);
	ordenBaraja(vec_nombre, vec_notas, n);
	mostrarVector(vec_nombre, vec_notas, n);	
	cout<<"Ordenado\n\n"<<endl;
	return 0;
}

int llenarVectorUsu(string vec_nombre[], float vec_notas[]){
	
	int n;
	do{
		cout<<"Ingrese tamaño del vector entre  "<<TAMMIN<<" Y "<<TAMMAX<<endl;
		cin>> n;
		}while(n < TAMMIN or n > TAMMAX);
	
	for(int i = 0; i < n; i++){
		cout<<"Ingrese nombre del estudiante "<< i+1 <<"\t";
		fflush(stdin);
		cin>> vec_nombre[i];
		cin>> vec_notas[i];
		while(vec_notas[i]> 5.0 or vec_notas[i] < 0.0){
			cout <<"Nota invalida  "<<endl;
			cin >> vec_notas[i];
		}
	}return n;
}

void mostrarVector(string vec_nombre[], float vec_notas[], int n){
	system("cls");
	cout << "Estudiantes\n"<<endl;
	for(int i = 0; i < n; i++){
		cout << vec_nombre[i]<<"\t"<<vec_notas[i]<<endl;
		
	}
	system("pause");
}

void ordenBaraja(string vec_nombre[],float vec_notas[], int n){
	float clave;
	int i, j;
	string nombre;
	for(i=1; i < n; i++){
		clave = vec_notas[i];
		nombre = vec_nombre[i];
		j= i-1;
	
	while((j >= 0)and (vec_notas[j]>clave)){
		vec_notas[j+1] = vec_notas[j];
		vec_nombre[j+1] = vec_nombre[j];
		j--;
	}
	vec_notas[j+1]=clave;
	vec_nombre[j+1]=clave;
}
	system("pause");
}
