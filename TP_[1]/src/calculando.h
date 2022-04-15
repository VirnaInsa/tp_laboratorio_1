/*
 * calculando.h
 *
 *  Created on: 10 abr 2022
 *      Author: vdavalos
 */

#ifndef CALCULANDO_H_
#define CALCULANDO_H_
/**
 *
 * @param precio : precio de vuelo
 * @param pagoTarjetaDebito Realiza el calculo de precio con el descuento comprando con tarjeta de debito
 */


void debito(float precio, float *pagoTarjetaDebito);
void credito(float precio, float *pagoTarjetaCredito);
void bitcoin(float precio, float *precioBitcoin);
void unitario(float precio , float kilometro , float *precioUnitario);
void diferencia( float precioAerolinea, float precioLatam, float *diferenciaPrecio);
/**
 *
 * @param diferenciaPrecio: Calcula la diferencia de preciio de vuelo entre Aerolineas y Latam
 * @param kilometro: kilometros recorridos por vuelo
 * @param precioAerolineas: Precio de vuelo de aerolineas
 * @param precioLatam: Precio de cuelo de Latam
 * @param precioTarjetaDebitoAerolinaeas: Calcula el precio comprando con Tarjeta de debito para Aerolineas
 * @param precioTarjetaDebitoLatam: Calcula el precio comprando con Tarjeta de debito para Latam
 * @param precioTarjetaCreditoAerolineas: Calcula el precio comprando con Tarjeta de credito para Aerolineas
 * @param precioTarjetaCreditoLatam: Calcula el precio comprando con Tarjeta de credito para Latam
 * @param precioBitcoinAerolineas: Calcula el precio de vuelo en bitcoin para Aerolineas
 * @param precioBitcoinLatam: Calcula el precio de vuelo en bitcoin para Latam
 * @param precioUnitarioAerolineas: Calcula el precio de vuelo por kilometros de Aerolineas
 * @param precioUnitarioLatam: Calcula el precio de vuelo por kilometros de Latam
 */
void mensaje(float diferenciaPrecio, float kilometro, float precioAerolineas, float precioLatam, float precioTarjetaDebitoAerolinaeas, float precioTarjetaDebitoLatam , float precioTarjetaCreditoAerolineas , float precioTarjetaCreditoLatam, float precioBitcoinAerolineas, float precioBitcoinLatam, float precioUnitarioAerolineas, float precioUnitarioLatam);



#endif /* CALCULANDO_H_ */
