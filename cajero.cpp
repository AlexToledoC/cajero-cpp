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
sobrante1, monto_a_pagar, monto_retiro, billete500, sobrante500, NIP, nip = 1, celular, 
compania, acumulado, saldo_final, recarga, saldo_acumulado;

string otra_operacion;

double funcion_consultar_saldo(), funcion_recarga(), funcion_luz(), funcion_retiro(), 
funcion_otra_operacion(); 


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

double funcion_consultar_saldo(int nuevo_saldo)
{
	cout << "Ingrese su NIP: \n";
	cin >> NIP;
	if (nip == NIP)
	{
		saldo -= nuevo_saldo;
		cout << "Su saldo actual es: $" << saldo;
		funcion_otra_operacion();
	}
	else 
	{
		printf("La operación no se ha podido realizar, por favor intente más tarde.");
	}
}


double funcion_recarga()
{
	printf("Escoja la compañia: \n");
	printf("1. AT&T \n");
	printf("2. Telcel\n");
	printf("3. Movistar \n");
	printf("4. Unefon \n");
	cout << "Ingrese el respectivo numero (1-4): \n";
	cin >> compania;
	if (compania == 1 or compania == 2 or compania == 3 or compania == 4)
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
					cout << "Ha escogido una recarga de $20. \nIngrese el monto con el que va a pagar: \n$";
					cin >> monto_a_pagar;
					if (monto_a_pagar < 20)
					{
						printf("La operación no se ha podido realizar, por favor intente más tarde.");
					}
					else
					{
						cambio = monto_a_pagar - 20;
						printf("La operacion se ha realizado con exito. \n");
						cout << "Su cambio es $" << cambio;
					}
					funcion_otra_operacion();
					break;
				}
			case 2:
				{
					cout << "Ha escogido una recarga de $50. \nIngrese el monto con el que va a pagar: \n$";
					cin >> monto_a_pagar;
					if (monto_a_pagar < 50)
					{
						printf("La operación no se ha podido realizar, por favor intente más tarde.");
					}
					else
					{
						cambio = monto_a_pagar - 50;
						printf("La operacion se ha realizado con exito. \n");
						cout << "Su cambio es $" << cambio;
					}
					funcion_otra_operacion();
					break;
				}
			case 3:
				{
					cout << "Ha escogido una recarga de $100. \nIngrese el monto con el que va a pagar: \n$";
					cin >> monto_a_pagar;
					if (monto_a_pagar < 100)
					{
						printf("La operación no se ha podido realizar, por favor intente más tarde.");
					}
					else
					{
						cambio = monto_a_pagar - 100;
						printf("La operacion se ha realizado con exito. \n");
						cout << "Su cambio es $" << cambio;
					}
					funcion_otra_operacion();
					break;
				}
			case 4:
				{
					cout << "Ha escogido una recarga de $150. \nIngrese el monto con el que va a pagar: \n$";
					cin >> monto_a_pagar;
					if (monto_a_pagar < 150)
					{
						printf("La operación no se ha podido realizar, por favor intente más tarde.");
					}
					else
					{
						cambio = monto_a_pagar - 150;
						printf("La operacion se ha realizado con exito. \n");
						cout << "Su cambio es $" << cambio;
					}
					funcion_otra_operacion();
					break;
				}
				case 5:
				{
					cout << "Ha escogido una recarga de $200. \nIngrese el monto con el que va a pagar: \n$";
					cin >> monto_a_pagar;
					if (monto_a_pagar < 200)
					{
						printf("La operación no se ha podido realizar, por favor intente más tarde.");
					}
					else
					{
						cambio = monto_a_pagar - 200;
						printf("La operacion se ha realizado con exito. \n");
						cout << "Su cambio es $" << cambio;
					}
					funcion_otra_operacion();
					break;
				}
			case 6:
				{
					cout << "Ha escogido una recarga de $500. \nIngrese el monto con el que va a pagar: \n$";
					cin >> monto_a_pagar;
					if (monto_a_pagar < 500)
					{
						printf("La operación no se ha podido realizar, por favor intente más tarde.");
					}
					else
					{
						cambio = monto_a_pagar - 500;
						printf("La operacion se ha realizado con exito. \n");
						cout << "Su cambio es $" << cambio;
					}
					funcion_otra_operacion();
					break;
				}
			default:
				{
					printf("La operación no se ha podido realizar, por favor intente más tarde.");
					funcion_otra_operacion();
					break;
				}
				
		}
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
		cout << "Su cambio es $" << cambio;
		printf("\nSe le ha entregado: \n");
		//Cambio 200
		billete200 = cambio / 200;
		sobrante200 = cambio % 200;
		cout << billete200 << " billete(s) de $200 \n";
		//Cambio 100
		billete100 = sobrante200 / 100;
		sobrante100 = sobrante200 % 100;
		cout << billete100 << " billete(s) de $100 \n";
		//Cambio 50
		billete50 = sobrante100 / 50;
		sobrante50 = sobrante100 % 50;
		cout << billete50 << " billete(s) de $50 \n";
		//Cambio 20
		billete20 = sobrante50 / 20;
		sobrante20 = sobrante50 % 20;
		cout << billete20 << " billete(s) de $20 \n";
		//Cambio 10
		moneda10 = sobrante20 / 10;
		sobrante10 = sobrante20 % 10;
		cout << moneda10 << " moneda(s) de $10 \n";
		//Cambio 5
		moneda5 = sobrante10 / 5;
		sobrante5 = sobrante10 % 5;
		cout << moneda5 << " moneda(s) de $5 \n";
		//Cambio 2
		moneda2 = sobrante5 / 2;
		sobrante2 = sobrante5 % 2;
		cout << moneda2 << " moneda(s) de $2 \n";	
		//Cambio 1
		if (sobrante2 == 1)
		{
			printf("1 moneda de $1");
		}
		else
		{
			printf("0 monedas de $1");
		}
		funcion_otra_operacion();
	}
}


double funcion_retiro(int nuevo_saldo)
{
	cout << "Ingrese el monto a retirar \nMinimo $100.00 \nMaximo $9,300.00 \nUnicamente multiplos de 100: \n$";
	cin >> monto_retiro;
	if (monto_retiro <= 9300 and monto_retiro % 100 == 0)
	{
		//Cambio 500
		billete500 = monto_retiro / 500;
		sobrante500 = monto_retiro % 500;
		cout << "Se le ha entregado: \n" << billete500 << " billete(s) de $500 \n";
		//Cambio 200
		billete200 = sobrante500 / 200;
		sobrante200 = sobrante500 % 200;
		cout << billete200 << " billete(s) de $200 \n";
		//Cambio 100
		billete100 = sobrante200 / 100;
		cout << billete100 << " billete(s) de $100 \n";
		nuevo_saldo = saldo - monto_retiro;
		cout << "Su nuevo saldo es $" << nuevo_saldo;
		saldo = nuevo_saldo;
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
	printf("4. Retiro de efectivo \n");
	printf("5. Salir \n\n ");
	cout << "Escoja un numero (1-5): \n";
	cin >> operacion_a_realizar;
	switch (operacion_a_realizar)
	{
		case 1:
			{
				funcion_consultar_saldo(nuevo_saldo);
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
				funcion_retiro(nuevo_saldo);
				break;
			}
		case 5:
			{
				printf("Gracias por su visita.");
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
