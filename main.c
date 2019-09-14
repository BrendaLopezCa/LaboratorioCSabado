#include <stdio.h>
#include <stdlib.h>
/*
Autor: Brenda Montserrat López Castro
Fecha: 14/Sep/2019
Grupo:08
Horario: 9:00-11-00 hrs
Matricula:1744884
*/
  
/******************* Actividad 1 ***************/

int main() {
	int suma, num; /*declaracion de variables*/
	char s, n;
	do{
		printf("\nIntroduzca un numero entero:\n"); /*pedir valores al usuario*/
		scanf("%d", &num); /*obtener valores*/
		fflush(stdin);
		suma=suma+num; /*sumar valores dentro de otra variable*/
		printf("\n¿Desea introducir otro numero(s/n)?:\n"); /*opcion si/no*/
		fflush (stdin);
		scanf("%c", &s); /*opcion si/no obtenida*/
		fflush(stdin);
	} 
	while ( s != 'n' );
		printf("La suma de los numeros introducidos es de: %d \n\n\n", suma); /*desplegar la suma*/
		
/******************* Actividad 2***************/
	do{
		num = 0;
		printf("\nIntroduzca un numero entero:\n"); /*pedir valores al usuario*/
		scanf("%d", &num);
		printf("\nEl numero introducido es: %d \n", num); /*desplegar valores*/
		fflush(stdin);
	
	} 
	while ( num < 100 );
		printf("\nEl numero introducido: %d, es mayor a 100", num);
	return 0;
}
