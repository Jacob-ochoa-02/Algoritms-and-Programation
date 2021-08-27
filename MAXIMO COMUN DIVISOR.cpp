/****					
				Autor:Jacob Ochoa lopera
				Fecha: 06/08/2021
				Objetivo: Calcular MCD;					****/				

#include <math.h>
#include <iostream>

using namespace std;

int simplificar_quebrado(int n, int d);	


int main(){
	int n, d;
	int residuo, cociente, mcd;
	cout<< "\n Ingresar el numerador---->  ";
	cin>> n;
	cout<< "\n Ingresar el denominador---->   ";
	cin >> d;
	residuo = n % d;
	mcd = n % d;
	cout << n  << "/" << d<< "\n = \n" << n/mcd<< "/" << d/mcd ;
	return 0;
}	
int simplificar_quebrado(){
	
	int n, d, r;
	int residuo, cociente, mcd;
	residuo = n%d;
	while (r != 0){
		n = d;
		d = residuo;
		residuo = n%d;
		
	}
	
}
