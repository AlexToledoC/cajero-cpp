/* Ejercicio: cajero
Autor: Alejandro Toledo Cuenca	
Fecha de creación: 10/11/2021
Descripción: simular un cajero automático */

#include <conio.h>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std; 
int main(), operacion_a_realizar, saldo = 50000, nuevo_saldo, monto_luz, cambio,
billete200, billete100, billete50, billete20, moneda1, moneda2, moneda5, moneda10, 
numero, sobrante200, sobrante100, sobrante50, sobrante20, sobrante10, sobrante5, sobrante2, 
sobrante1, monto_a_pagar, monto_retiro, billete500, sobrante500, NIP, celular, compania,
acumulado, saldo_final, recarga;

string otra_operacion;

double funcion_consultar_saldo(), funcion_recarga(), funcion_luz(), funcion_retiro(), 
funcion_otra_operacion(); //funcionrecargado(recarga), recarga; 


//double funcionrecargado(recarga)
//{
//	nuevo_saldo = saldo - recarga;
//	printf("Su compra de tiempo aire se ha realizado \n");
//	cout << "Su nuevo saldo es: $" << nuevo_saldo;
//	funcion_otra_operacion();
//	acumulado = nuevo_saldo;					
//	break;
//}


double funcion_otra_operacion()
{
	cout << "\nDesea realizar otra operacion? Escriba si o no: \n";
	cin >> otra_operacion;
	if (otra_operacion == "si" or otra_operacion == "Si" or otra_operacion == "si ")
	{
		main();
	}
	else
	{
		printf("\nGracias por su visita.");
	}
}

double funcion_consultar_saldo()
{
	cout << "Ingrese su NIP: \n";
	cin >> NIP;
	cout << "Su saldo actual es: $" << saldo;
	funcion_otra_operacion();
}


double funcion_recarga()
{
	cout << "Ingrese su NIP: \n";
	cin >> NIP;
	printf("Escoja la compañia: \n");
	printf("1. AT&T \n");
	printf("2. Telcel\n");
	printf("3. Movistar \n");
	cout << "Ingrese su respectivo numero (1-3) \n";
	cin >> compania;
	if (compania == 1 or compania == 2 or compania == 3)
	{
		cout << "Digite su numero celular: \n";
		cin >> celular;
		printf("¿Cuanto tiempo aire desea comprar? \n");
		printf("1. $20 \n");
		printf("2. $50 \n");
		printf("3. $100 \n");
		printf("4. $150 \n");
		printf("5. $200 \n");
		printf("6. $500 \n");
		cout << "Escoja una opcion (1-6): \n";
		cin >> recarga;
		switch (recarga)
		{
			case 1:
				{
					printf("Vamos bien");
//					funcionrecargado(20);
					funcion_otra_operacion();
				}
			case 2:
				{
//					funcionrecargado(50);
					printf("Vamos bien");
					funcion_otra_operacion();
				}
			case 3:
				{
//					funcionrecargado(50);
					printf("Vamos bien");
					funcion_otra_operacion();
				}
			case 4:
				{
//					funcionrecargado(50);
					printf("Vamos bien");
					funcion_otra_operacion();
				}
			case 5:
				{
//					funcionrecargado(50);
					printf("Vamos bien");
					funcion_otra_operacion();
				}
			case 6:
				{
//					funcionrecargado(50);
					printf("Vamos bien");
					funcion_otra_operacion();
				}
			default:
				{
					printf("La operación no se ha podido realizar, por favor intente más tarde.");
					funcion_otra_operacion();
				}
				
		}
//		saldo_final = acumulado;
	}
	else
	{
		printf("La operación no se ha podido realizar, por favor intente más tarde.");
		funcion_otra_operacion();
	}
	
}


double funcion_luz()
{
	cout << "Ingrese el monto a pagar: \n$";
	cin >> monto_a_pagar;
	cout << "\nIngrese el monto con el que desea pagar:\n$";
	cin >> monto_luz;
	cambio = monto_luz - monto_a_pagar;
	if (cambio < 0)
	{
		printf("La operación no se ha podido realizar, por favor intente más tarde.");
	}
	else
	{
		//Cambio 200
		billete200 = cambio / 200;
		sobrante200 = cambio % 200;
		cout << "Su cambio es \n" << billete200 << " billete(s) de 200 \n";
		//Cambio 100
		billete100 = sobrante200 / 100;
		sobrante100 = sobrante200 % 100;
		cout << billete100 << " billete(s) de 100 \n";
		//Cambio 50
		billete50 = sobrante100 / 50;
		sobrante50 = sobrante100 % 50;
		cout << billete50 << " billete(s) de 50 \n";
		//Cambio 20
		billete20 = sobrante50 / 20;
		sobrante20 = sobrante50 % 20;
		cout << billete20 << " billete(s) de 20 \n";
		//Cambio 10
		moneda10 = sobrante20 / 10;
		sobrante10 = sobrante20 % 10;
		cout << moneda10 << " moneda(s) de 10 \n";
		//Cambio 5
		moneda5 = sobrante10 / 5;
		sobrante5 = sobrante10 % 5;
		cout << moneda5 << " moneda(s) de 5 \n";
		//Cambio 2
		moneda2 = sobrante5 / 2;
		sobrante2 = sobrante5 % 2;
		cout << moneda2 << " moneda(s) de 2 \n";	
		//Cambio 1
		if (sobrante2 == 1)
		{
			printf("1 moneda de 1");
		}
		else
		{
			printf("0 monedas de 1");
		}
		funcion_otra_operacion();
	}
}


double funcion_retiro()
{
	cout << "Ingrese el monto a retirar \nMinimo $100.00 \nMaximo $9,000.00 \nUnicamente multiplos de 100: \n$";
	cin >> monto_retiro;
//	if (monto_retiro == 400)
//	{
//		printf("Se le ha entregado: \n2 billete(s) de $200");
//	}
//	else if (monto_retiro == 300)
//	{
//		printf("Se le ha entregado:\n 1 billete(s) de $200 \n1 billete(s) de $100");
//	}
//	else if (monto_retiro == 200)
//	{
//		printf("Se le ha entregado 1 billete(s) de $200");
//	}
//	else if (monto_retiro == 100)
//	{
//		printf("Se le ha entregado 1 billete(s) de $100");
//	}
	if (monto_retiro <= 9000 and monto_retiro % 100 == 0)
	{
		//Cambio 500
		billete500 = monto_retiro / 500;
		sobrante500 = monto_retiro % 500;
		cout << "Se le ha entregado: \n" << billete500 << " billete(s) de 500 \n";
		//Cambio 200
		billete200 = billete500 / 200;
		sobrante200 = sobrante500 % 200;
		cout << billete200 << " billete(s) de $200 \n";
		//Cambio 100
		billete100 = billete200 / 100;
		cout << billete100 << " billete(s) de $100 \n";
		nuevo_saldo = saldo - monto_retiro;
		cout << "Su nuevo saldo es $" << nuevo_saldo;
	}
	else
	{
		printf("La operación no se ha podido realizar, por favor intente más tarde.");
	}
	funcion_otra_operacion();
}


int main()
{
	system("cls");
	printf("Que operacion desea realizar?\n\n");
	printf("1. Consulta de saldo\n");
	printf("2. Comprar tiempo aire\n");
	printf("3. Pago de luz\n");
	printf("4. Retiro de efectivo\n\n ");
	cout << "Escoja un numero (1-4): \n";
	cin >> operacion_a_realizar;
	switch (operacion_a_realizar)
	{
		case 1:
			{
				funcion_consultar_saldo();
				break;
			}
		case 2:
			{
				funcion_recarga();
				break;
			}
		case 3:
			{
				funcion_luz();
				break;
			}
		case 4:
			{
				funcion_retiro();
				break;
			}
		default:
			{
				printf("Por favor, ingresa una opción correcta.");
				funcion_otra_operacion();
				break;
			}
	}
}
