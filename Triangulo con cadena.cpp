/*******
				Objetivo:Escribir Triangulo con cadena de carácteres
				Autores:Todos
				14/08/2021
																	*******/

#include <string.h>
#include <iostream>
#define MAXCAD 31

using namespace std;

//--------------Prototipos
void rectangulo_cadena(char frase[]);
void triangulo_cadena(char frase[]);
int main(){
	char cadena[MAXCAD];
	cout<<"Ingrese cadena ===== >";
	cin.getline(cadena, 30,'\n');
		while(strlen(cadena) < 2 or strlen(cadena) > MAXCAD){
			cout<<"Ingrese cadena valida";
			cin.getline(cadena, 30, '\n');
		
		}
			cout<<"Triangulo de caracteres"<<endl;
			triangulo_cadena(cadena);
			cout<<"Rectangulo de caracteres"<<endl;
			rectangulo_cadena(cadena);
	return 0;
}
void triangulo_cadena(char frase[]){
	int n, i, j;
	n = strlen(frase);
	for(i = 1; i <= n; i++){
		for(j = 0; j < i;j++){
			cout<< frase[j];
		}
		cout<<endl;

	}system("pause");
}
void rectangulo_cadena(char frase[]){
	int n, i, j;
	n = strlen(frase);
	for(i = 1; i <= n; i++){
		for(j = 0; j < n;j++){
			cout<< frase[j];
		}
		cout<<endl;

	}system("pause");
}
