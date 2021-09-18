/***
					Autor:Jacob Ochoa Lopera
					Objetivo:Resolver punto 11 del taller
					Fecha: 13/09/2021
***/
#include <fstream>
#include <stdio.h>
#include <iostream>
#define TAM_MAX 30
using namespace std;

int C_ArchivoTotal();
void mostrarDatos(string vNom[], float litros[][1], int tipo[][1], float precio_F[][1],int n);
int leerArchivo(string vNom[], float litros[][1], int tipo[][1]);
void proceds(float litros[][1], int tipo[][1], float precio_F[][1], int n);
int guardar_proceds(string vNom[], float litros[][1], int tipo[][1], float precio_F[][1],int n);

int main(){
	int can;
	int i;
	int n;
	string vNom[TAM_MAX];
	float litros[TAM_MAX][1];
	int tipo[TAM_MAX][1];
	float precio_F[TAM_MAX][1];
	can=C_ArchivoTotal();
	if(can==-1){
		cout<<"\nLo siento, no se pudo abrir el archivo D:"<<endl;
	}
	n = leerArchivo(vNom,litros,tipo);
	if(n==-1){
		cout<<"\nLo siento, no se pudo abrir el archivo D:"<<endl;
	}else{
		proceds(litros,tipo,precio_F, n);
		mostrarDatos(vNom,litros,tipo,precio_F, n);
		can=guardar_proceds(vNom,litros,tipo,precio_F,n);
		if(can==-1){
		cout<<"\nLo siento, no se pudo guardar el archivo D:";
		}
	}
	return 0;
}
int C_ArchivoTotal(){
	string vNom;
	fstream archi;
	int i;
	char seguir;
	float litros[TAM_MAX][1];
	int tipo[TAM_MAX][1];
	archi.open("ArchiTot.txt", ios :: in | ios :: out | ios ::app);
	if(archi.fail()){
		cout<<"\nError al abrir el archivo";
		return -1;
	}
	seguir= 's';
	do
	{
		cout<< "\nIngrese nombre de la vaca ===>"<< " ";
		fflush(stdin);
		getline(cin, vNom);
		archi<<vNom<<"  ";
		for(i=0; i<1; i++){
			do{
				cout<<"\nIngrese la cantidad en litros ===>"<< " ";
				cin>>litros[i][1];
			}while(litros[i][1]< 1 or litros[i][1] > 400);
			archi<<litros[i][1];
		}
		for(i=0; i<1;i++){
			do{
				cout<<"\nQue tipo de vaca es?(1.Propia, 2.Compartida)"<<" ";
				cin>>tipo[i][1];
			}while(tipo[i][1]<1 or tipo[i][1]>2);
			archi<<" "<<tipo[i][1];
		}
	archi<<"\n";
	cout<<"\nTe gustaria seguir entrando datos?";
	cin>>seguir;
	}while(seguir == 's');
	archi.close();
	return 1;
}
int leerArchivo(string vNom[], float litros[][1], int tipo[][1]){
	int i, j;
	ifstream archi;
	archi.open("ArchiTot.txt");
	if(archi.fail()){
		cout<< "\nError al abrir el archivo D:";
		return -1;
	}
	else{
		cout<<"\nSe abrio correctamente el archivo :D";
		i=0;
		while(!archi.eof()){
			archi>>vNom[i]>>litros[i][0]>>tipo[i][0];
			i++;	
		}
		archi.close();
		return i-1;
	}
}
void mostrarDatos(string vNom[], float litros[][1], int tipo[][1], float precio_F[][1],int n){
	int i;
		cout<<"\nNombre\tLitros\tTipo\tPrecio"<<endl;
		cout<<"\t---------------------------------------------"<<endl;
	for (i=0;i<n;i++){
		cout<<vNom[i];
		cout<<"\t"<<litros[i][0];
		cout<<"\t"<<tipo[i][0];
		cout<<"\t"<<precio_F[i][0]<<"\n";
	}
	cout<<"---------------------------------------------";
}
void proceds(float litros[][1], int tipo[][1], float precio_F[][1], int n){
	int i;
	for(i=0;i<n;i++){
	if(litros[i][0]<50 and tipo[i][0]==1){
		precio_F[i][0]=((litros[i][0]*1500)+500);
	}
	if(litros[i][0]>=50 and tipo[i][0]==1){
		precio_F[i][0]=((litros[i][0]*1500)+550);
	}
	if(litros[i][0]<50 and tipo[i][0]==2){
		precio_F[i][0]=((litros[1][0]*1500)+1000);
	}
	if(litros[i][0]>=50 and tipo[i][0]==2){
		precio_F[i][0]=((litros[i][0]*1500)+1100);
	}
}
}
int guardar_proceds(string vNom[], float litros[][1], int tipo[][1], float precio_F[][1],int n){
	fstream archiS;
	archiS.open("VacasProced.txt", ios::out|ios::app);
	if(archiS.fail()){
		cout<<"\nError al abrir el archivo D:";
		return -1;
	}
	for(int i=0;i<n;i++){
		archiS<<vNom[i]<<"\t"<<tipo[i][0]<<"\t"<<precio_F[i][0]<<"\n";
	}	
	archiS.close();
}

