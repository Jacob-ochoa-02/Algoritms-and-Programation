/*********************
1
3 3
5 5 5
7 7 7 7
9 9 9 9 9
11 11 11 11 11 11
Autor: Jacobo Ochoa Lopera
Tema: Arreglo de triangulos

1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
16 17 18 19 20 21
22 23 24 25 26 27 28
29 30 31 32 33 34 35 36

********************/

#include <iostream>

using namespace std;

void trianguloImp(int n);
void trianguloFloyd(int n);
int menu();

int main ()
{
	int n, opcion;
	do
	{
		cout <<"Ingrese numero =====> "; 
		cin>>n;
	}	while (n < 1 or n > 24);
	
	opcion = menu();
	while(opcion != 0)
	{
		switch(opcion)
		{
			case 1: system("cls");
				cout << "************* triangulo impar \n";
				trianguloImp(n);
				system("pause");
				break;
			case 2: system("cls");
				cout << "************* triangulo Floyd \n";
				trianguloFloyd(n);
				system("pause");
				break;
			case 0: cout << "*** Salir ***";
				break;
			default: cout << "Error de opcion";
		}
		opcion = menu();
	}
	return 0;
}

void trianguloImp(int n)
{
	int i, j;
	int impar;
	i = 1;
	impar = 1;
	while(i <= n)
	{
		j = 1;
		while(j <= impar)
		{
			cout<< i << " ";
			j++;
		}
		i = i + 2;
		impar++;
		cout << endl;
	}
}

void trianguloFloyd(int n)
{
	int i, j;
	int fila, numero;
	i = 1;
	fila = 1;
	numero = 1;
	while(i <= n)
	{
		j = 1;
		while(j <= fila)
		{
			cout<< numero << " ";
			j++;
			numero++;
		}
		i++;
		fila++;
		cout << endl;
	}
}
int menu()
{
	int opcion;
	system("cls");  //Para limpiar la pantalla
	system("Color 0A");
	cout << "\n\n ********* Menu de opciones ************" << endl;
	cout << "1- Triangulo Impar" << endl;
	cout << "2- Triangulo Floyd" << endl;
	cout << "0- Salir" << endl;
	
	do 
	{
		cout << "Ingrese opcion =====> ";
		cin >> opcion;
	}
		while(opcion < 0 or opcion >2);
	
	return opcion;
}












