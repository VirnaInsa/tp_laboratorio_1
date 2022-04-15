/*
 * calculando.c
 *
 *  Created on: 10 abr 2022
 *      Author: vdavalos
 */

#include <stdio.h>
#include <stdlib.h>

void debito(float precio, float *pagoTarjetaDebito)
{
	*pagoTarjetaDebito = precio* 0.9;
}
void credito(float precio, float *pagoTarjetaCredito)
{
	*pagoTarjetaCredito = precio * 1.25;
}
void bitcoin(float precio, float *precioBitcoin)
{
	*precioBitcoin = precio /4606954.55;
}
void unitario(float precio , float kilometro , float *precioUnitario)
{
	*precioUnitario = precio / kilometro;
}
void diferencia( float precioAerolinea, float precioLatam, float *diferenciaPrecio)
{
	*diferenciaPrecio = precioAerolinea - precioLatam;

}

void mensaje(float diferenciaPrecio, float kilometro, float precioAerolineas, float precioLatam, float precioTarjetaDebitoAerolinaeas, float precioTarjetaDebitoLatam , float precioTarjetaCreditoAerolineas , float precioTarjetaCreditoLatam, float precioBitcoinAerolineas, float precioBitcoinLatam, float precioUnitarioAerolineas, float precioUnitarioLatam)
{
	printf("\n KMs Ingresados: %2.f", kilometro);
	printf("\n Precio Aerolineas: $%2.f", precioAerolineas);
	printf("\na) Precio con tarjeta de débito: $%.2f", precioTarjetaDebitoAerolinaeas);
	printf("\nb) Precio con tarjeta de crédito: $%.2f", precioTarjetaCreditoAerolineas);
	printf("\nc) Precio pagando con bitcoin : $%f", precioBitcoinAerolineas);
	printf("\nd) Precio unitario: $%.2f", precioUnitarioAerolineas);
	printf("\n");
	printf("\n Precio Latam: $%2.f", precioLatam);
	printf("\na) Precio con tarjeta de débito: $%.2f", precioTarjetaDebitoLatam);
	printf("\nb) Precio con tarjeta de crédito: $%.2f", precioTarjetaCreditoLatam);
	printf("\nc) Precio pagando con bitcoin : $%f", precioBitcoinLatam);
	printf("\nd) Precio unitario: $%.2f", precioUnitarioLatam);
	printf("\n");
	printf("\n La diferencia de precio es : $%2.f", diferenciaPrecio );

}
