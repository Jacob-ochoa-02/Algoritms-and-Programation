/*************
PROGRAMA: Hallamos la media de las notas
NOMBRE: Jacobo Ochoa Lopera
FECHA: 07/05/2021
*************/

#include <iostream>
#define ESTMAXIMO 45

using namespace std;

int leerNotas(float notas[]);
void ordenarNotasSel(int n, float notas[]);
void escribirNotas(int n, float notas[]);							//encabezado o prototipo de la función//
void ordenarNotasBur (int n, float notas[]);
void escribirPerdieron (int n, float notas[]);
float media (float notas[], int n);

int main(){
	
	float notasEs[ESTMAXIMO];
	int n;
	int mitad;
	float mediana , diferencia, mediav;
	
	n= leerNotas(notasEs);
	
	cout << "DESORDENADO ";
	escribirNotas( n, notasEs);
	ordenarNotasBur(n , notasEs);
	cout << "ORDENADO POR BURBUJA \n";
	ordenarNotasSel(n,notasEs);
	escribirNotas(n,notasEs);
	
	
	mitad = n /2;
	
	if(n % 2 == 0){
		mediana = (notasEs[mitad] + notasEs[mitad - 1]) / 2;
	} else {
		mediana = notasEs[mitad];
	}
	
	cout << "La mediana es: " << mediana;
	diferencia = notasEs[mitad];
	cout << "\n    La diferencia es: " <<diferencia;
	
	escribirNotas (n , notasEs);
	escribirPerdieron (n, notasEs);
	
	cout<< "\n\n\n  La media es: "<< media(notasEs, n);
	
	return 0;
}
			//******Fin Main******//
int leerNotas (float notas[]){
	
	int i, n;
	
	cout << "Ingrese numero de estudiantes:";
	cin >> n;
	
	while (n < 1 or n > 45){
		cout << " Ingrese numero valido de estudiantes \n\n";
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

void ordenarNotasSel(int n , float notas[]){
	
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
	
	cout << "\n\n\n listado de notas \n";
	
	for (int i = 0; i < n; i++){
		cout << i + 1 << "\t" << notas[i] << endl;
		
	}
}

void ordenarNotasBur(int n , float notas[]){
	int i , j , intercambio;
	float aux;
	i = 0;
	intercambio = 0;
	
	while (i < n and intercambio != 0){
		intercambio = 0;
		
		for (j = 0; j < n-1; j++){
			if ( notas[j] > notas[j+1]){
				aux = notas[j];
				notas[j] = notas[j+1];
				notas [j+1] = aux;
				intercambio = intercambio +1;  
			}
		}
		i++;
	}
}

void escribirPerdieron (int n, float notas[]){
	int i;
	i = 0;
	
	while (i < n and notas[i] < 3.0){
		cout << notas[i] << endl;
		i++;
	}
}

float media (float notas[], int n){
	
	float suma, mediav;
	suma = 0;
	for(int i = 0; i < n; i++){
		suma = suma+ notas[i];	
	}
	mediav = suma / n;
	
	return mediav;
}




