/*
 ============================================================================
 Name        : TP_[1].c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "calculando.h"

int main(void) {
	int opcion;
	float kilometro;
	float precioAerolineas;
	float precioLatam;
	float precioTarjetaDebitoAerolinaeas;
	float precioTarjetaDebitoLatam;
	float precioTarjetaCreditoAerplineas;
	float precioTarjetaCreditoLatam;
	float precioBitcoinAerolineas;
	float precioBitcoinLatam;
	float precioUnitarioAerolineas;
	float precioUnitarioLatam;
	float diferenciaPrecio;
	int flagKm = 0;
	int flagPrecio = 0;
	int flagCalculo = 0;


	do{

		printf("\n1. Ingresar Kilómetros"
				"\n2. Ingresar Precio de Vuelos"
				"\n3. Calcular todos los costos"
				"\n4. Informar Resultados"
				"\n5. Carga forzada de datos"
				"\n6. Salir");
		printf("\nIngrese opcion: ");
		scanf("%d", &opcion);

		switch(opcion){
		case 1:
			do{
				printf("\nIngresar Kilómetros: ");
				scanf("%f", &kilometro);

			}while(kilometro <=0);
			flagKm = 1;
			break;
		case 2:
			do {
				printf("- Precio vuelo Aerolíneas: \n");
				scanf("%f", &precioAerolineas);

				}while(precioAerolineas <= 0);
			do {
				printf("- Precio vuelo Latam: \n");
				scanf("%f", &precioLatam);

				}while(precioLatam <= 0);
			flagPrecio = 1;
			break;
		case 3:

			if (flagKm == 0 ){
			do{
				printf("\nIngresar Kilómetros: ");
				scanf("%f", &kilometro);
			}while(kilometro <=0);
			flagKm =1;
			}

			if (flagPrecio == 0){
			do {
				printf("- Precio vuelo Aerolíneas: \n");
				scanf("%f", &precioAerolineas);

			}while(precioAerolineas <= 0);
			do {
				printf("- Precio vuelo Latam: \n");
				scanf("%f", &precioLatam);

			}while(precioLatam <= 0);
			flagPrecio = 1;}
			debito(precioAerolineas, &precioTarjetaDebitoAerolinaeas);
			debito(precioLatam, &precioTarjetaDebitoLatam);
			credito(precioAerolineas, &precioTarjetaCreditoAerplineas);
			credito(precioLatam, &precioTarjetaCreditoLatam);
			bitcoin(precioAerolineas, &precioBitcoinAerolineas);
			bitcoin(precioLatam, &precioBitcoinLatam);
			unitario(precioLatam,kilometro, &precioUnitarioAerolineas);
			unitario(precioAerolineas,kilometro, &precioUnitarioLatam);
			diferencia(precioAerolineas, precioLatam, &diferenciaPrecio);

			flagCalculo =1;
			break;
		case 4:
			if(flagCalculo == 0){
				printf("\nNo se puede informar los resultados sin calcular los costos");
				flagCalculo =1;
			}else {
				mensaje(diferenciaPrecio, kilometro, precioAerolineas, precioLatam, precioTarjetaDebitoAerolinaeas, precioTarjetaDebitoLatam, precioTarjetaCreditoAerplineas, precioTarjetaCreditoLatam, precioBitcoinAerolineas, precioBitcoinLatam, precioUnitarioAerolineas, precioUnitarioLatam);
			}

			break;
		case 5:
			kilometro= 7090;
			precioAerolineas= 162965;
			precioLatam =  159339;


			debito(precioAerolineas, &precioTarjetaDebitoAerolinaeas);
			debito(precioLatam, &precioTarjetaDebitoLatam);
			credito(precioAerolineas, &precioTarjetaCreditoAerplineas);
			credito(precioLatam, &precioTarjetaCreditoLatam);
			bitcoin(precioAerolineas, &precioBitcoinAerolineas);
			bitcoin(precioLatam, &precioBitcoinLatam);
			unitario(precioLatam, kilometro, &precioUnitarioAerolineas);
			unitario(precioAerolineas, kilometro, &precioUnitarioLatam);
			diferencia(precioAerolineas, precioLatam, &diferenciaPrecio);


			mensaje(diferenciaPrecio, kilometro, precioAerolineas, precioLatam, precioTarjetaDebitoAerolinaeas, precioTarjetaDebitoLatam, precioTarjetaCreditoAerplineas, precioTarjetaCreditoLatam, precioBitcoinAerolineas, precioBitcoinLatam, precioUnitarioAerolineas, precioUnitarioLatam);
			break;
		case 6:
			break;
		}

	}while(opcion != 6);


}
