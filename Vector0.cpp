/***
					Autor:Jacob Ochoa Lopera
					Objetivo:Resolver vector 1 del taller
					Fecha: 14/09/2021
***/
#include <stdio.h>
#include <iostream>
#define TAM_MAX 50

using namespace std;

int main(){
	int n, i;
	int vecA[TAM_MAX],vecB[TAM_MAX],vecC[TAM_MAX];
	cout<<"\t¿Cuantos numeros deseas sumar?\n";
	cin>>n;
	for(i=1;i<n;i++){
		cout<<"\nIngresa el valor del vector A: ";
		cin>>vecA[i];
		cout<<"\nIngresa el valor del vector B: ";
		cin>>vecB[i];		
	}
	for(i=1;i<n;i++){
		vecC[i]=(vecA[i]+vecB[i]);
	}
	for(i=1;i<n;i++){
		cout<<"Este es el vector C: "<<vecC[i];
	}
	
	return 0;
}
