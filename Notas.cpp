/*************


*************/

#include <iostream>
#define ESTMAXIMO 45

using namespace std;

int leerNotas(float notas[]);
void ordenarNotas(int n, float notas[]);
void escribirNotas(int n, float notas[]);

int main(){
	
	float notasEs[ESTMAXIMO];
	int n;
	int mitad;
	float mediana;
	
	
	n= leerNotas(notasEs);
	ordenarNotas(n,notasEs);
	mitad = n /2;
	
	if(n % 2 == 0){
		mediana = (notasEs[mitad] + notasEs[mitad - 1]) / 2;
	} else {
		mediana = notasEs[mitad];
	}
	
	cout << "La mediana es: " , mediana;
	escribirNotas(n , notasEs);
	
	return 0;
}

int leerNotas (float notas[]){
	
	int i, n;
	
	cout << "Ingrese numero de estudiantes";
	cin >> n;
	
	while (n < 1 or n > 45){
		cout << " Ingrese numero valido de estudiantes";
		cin >> n;
	}
	
	for(i=0 ; i < n; i++){
		
		do{
			cout << "Ingrese nota estudiante " << i << "Entre 0.0 y 5.0";
			cin >> notas [i];
		} while(notas[i] < 0.0 or notas[i] > 5.0);
			
	}
	return n;
}

void ordenarNotas(int n, float notas[]){
	
	float menor;
	int i , j , posMenor;
	
	for(i =0; i < n ; i++){
		menor = notas[i];
		posMenor = i;
		
		for ( j = i+1; j < n; j++){
			if ( notas[j] < menor){
				menor = notas [j];
				posMenor = j;
			}
		}
		notas[posMenor] = notas [i];
		notas[i] = menor;
	}
}

void escribirNotas(int n , float notas[]){
	
	cout << " listado de notas \n";
	
	for (int i = 0; i < n; i++){
		cout << i + 1 << endl << notas[i] << endl;
		
	}
}
