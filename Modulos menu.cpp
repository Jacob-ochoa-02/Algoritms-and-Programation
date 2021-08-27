/**						Autor:Jacob Ochoa lopera
						Fecha:31/07/2021
						Practicar con modulos menu, ciclos y decisiones
						multiples												**/
						
#include <iostream>

using namespace std;

short menu(void);
bool esPrimo(int numero);
void primosGemelos(void);
void divisibilidad_11(void);
int main()
{
	short opc;
	do{
	opc=menu();
	switch(opc)
	{
		case 1: "\n	Primos Gemelos";
		primosGemelos();
		break;
		case 2: "\n Triangulo de Divisibilidad por once";
		divisibilidad_11();
		break;
		case 0:	"\n Bye Bye";
		break;
		default:
			cout<< "\n Opcion Invalida";
	}
	}
	while(opc!=0);
	return 0;

}

short menu(void){
	
	short opcion;
	
	system("cls");
	system("color 0B");
	cout<< "\t\t ****Menu de opciones****"<<endl;
	cout<< "\t 1. Primos Gemelos \n";
	cout<< "\t 2. Triangulo de divisibilidad por once \n";
	cout<< "\n\n\t 0. Bye Bye \n";
	cout<< "\n\n\t\t\t Ingrese la opcion ===>";
	cin>>opcion;
	while(opcion < 0 or opcion > 2){
		cout<<"\r Opcion invalida \n Favor ingresar una opcion valida";
		cin>> opcion;
	}
	return opcion;
}
void primosGemelos(void){
	int i;
	int n;
	cout<< "\n Ingrese Numero \n";
	cin>> n;
	while(n<2 or n>35000){
		cout<< "\n Ingrese numero valido 2-35000";
			cin>> n;
	}
	for(i = 2 ; i < n; i++){
		if(esPrimo(i)==true and esPrimo(i+2)==true){
			cout<<"\n "<< i <<" "<< i + 2<<"  Son Gemelos\n";
		}
	}system("pause");
}

bool esPrimo(int numero){
	int i;
	if(numero==0 or numero==1){
		return false;
		}else{
			for(i = 2;i < numero; i++){
				if(numero % i==0){
					return false;
					}
			} return true;
		}
}
void divisibilidad_11(void){
	int numero;
	int cociente, residuo, resultado;
	cout<<" Ingrese numero ===> ";
	cin>>numero;
	resultado=numero;
	while(resultado > 0 or resultado > 10){
		cociente = resultado / 10;
		residuo = resultado % 10;
		resultado = cociente - residuo;
		cout<<endl<<resultado;
	}
	if(resultado == 0 or resultado % 11 == 0){
		cout<<endl<< "Es Divisible :D\n";}
	else{
		cout<<endl<<"No es Divisible :C\n";
	}
	system("pause");
}

