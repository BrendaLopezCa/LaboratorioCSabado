#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

/* 
Autor: Brenda Montserrat López Castro
Fecha: 12/octubre/2019
Grupo: 08
Horario: sábados 9-11 a.m.
Matrícula: 1744884
*/

/*         Actividad 1          */
int main() {
	char cadena1[20] = {"A-Z"}, cadena2[20] = {"Z-A"}, array[20] = {"A-Z"};/*declaracion de las cadenas y arreglos de cadenas a establecer*/
	int i, j;
	printf("Ingrese una frase no mayor a 20 caracteres\n"); /*pedir caracteres al usuario*/
	scanf("%s %s",  &cadena1[20], &cadena2[20]); /*obtener caracteres y almacenarlos en los arrays*/
	if (cadena1[20] == cadena2[20]) /*ciclo "if" para comparar los caracteres obtenidos y determinar si la cadena es un palíndromo*/
		printf("La cadena de texto es un palíndromo\n\n\n"); /*verdadero*/
	else
		printf("La cadena de texto no es un palíndromo\n\n\n"); /*falso*/


/*          Actividad 2          */

	printf("Ingrese 20 caracateres");
	scanf("%s", &array[20]);
	{	
		for ()
	}
	return 0;
}
