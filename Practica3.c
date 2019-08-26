#include <stdio.h>
#include <stdlib.h>

/* 
*Autor: Brenda Montserrat López Castro
*Fecha: 25/08/19
*Grupo: 08
*Horario: 9:00-11:00 hrs
*Matrícula:1744884
*/

int main() {
	float x, expUno, expDos, expTres, expCuat; /*declaración de variables*/
	printf( "Introducir un numero entero entre 0 y 10 para resolver la ecuacion \n (x-1)/4-(x-5)/36:"); /*pedir valores para x*/
	scanf( "%f", &x); /*recibir el valor de x dado por el usuario*/
	expUno = (x - 1) / 4 - (x - 5) / 36; /*realizar la primera operación*/
	getchar(); /*obtener resultados*/
	printf( "El resultado de la funcion algebraica es: %.3f\n", expUno); /*entregar resultados en pantalla*/ 	
		
	printf( "\n\n Introducir un numero entero entre 0 y 10 para resolver la ecuacion \n 6[(x+1)/8-(2x-3)/16]:"); /*pedir valores para x*/
	fflush( stdin );
	scanf( "%f", &x); /*recibir el valor de x dado por el usuario*/
	expDos = 6*((x + 1)/ 8 - (2*x - 3)/ 16); /*realizar la segunda operación*/
	getchar(); /*obtener resultados*/
	printf( "El resultado de la funcion algebraica es: %.3f\n", expDos); /*entregar resultados en pantalla*/ 
		
	printf( "\n\n Introducir un numero entero entre 0 y 10 para resolver la ecuacion \n 2/3[x-(1-(x-2)/3)]+1:"); /*pedir valores para x*/
	fflush( stdin );
	scanf( "%f", &x); /*recibir el valor de x dado por el usuario*/
	expTres = 2/3.f*(x - (1 - (x - 2)/3)) + 1; /*realizar la tercera operación*/
	getchar(); /*obtener resultados*/
	printf( "El resultado de la funcion algebraica es: %.3f\n", expTres); /*entregar resultados en pantalla*/ 
				
	printf( "\n\n Introducir un numero entero entre 0 y 10 para resolver la ecuacion \n 2-[-2(2+1)-(2-3)/(2)]:"); /*pedir valores para x*/
	fflush( stdin );
	scanf( "%f", &x); /*recibir el valor de x dado por el usuario*/
	expCuat = 2-(-2*(x + 1) - (x-3) / 2); /*realizar la cuarta operación*/
	getchar(); /*obtener resultados*/
	printf( "El resultado de la funcion algebraica es: %.3f\n", expCuat); /*entregar resultados en pantalla*/ 
	return 0;
}

