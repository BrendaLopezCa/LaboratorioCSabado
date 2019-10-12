#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>

/* 
Autor: Brenda Montserrat López Castro
Fecha: 12/octubre/2019
Grupo: 08
Horario: sábados 9-11 a.m.
Matrícula: 1744884
*/

/*         Actividad 1          */
int main() {
	char arreglo[20] = {'A','A','A','A','A','A','B','B','B','B','B','C','C','C','C','C','D','D','D','D'}; /*declaración de variables y arreglos*/
	int i, acum1=0, acum2=0, acum3=0, acum4=0; 
	char char1 = 'A', char2 = 'B', char3 = 'C', char4 = 'D';
	char cadena1[20]; 
	int x, y, z;
	printf("\nEscriba una oracion o palabra de no mas de 20 caracteres: \n\n"); /*pedir al usuario los valores de la cadena de caracteres*/
	scanf("%s", &cadena1[20]); /*recibir los valores de cadena*/
	x=strlen(cadena1);  
	x=x-1; 
	for(y=0,z=x;y<=x/2;y++,z--) /*ciclo for para establecer si la palabra introducida es un polindromo mediante comparación de caracteres*/
	{
		if(cadena1[y] == cadena1[z])
			printf("La cadena es polindromo\n"); /*verdadero*/
		else
			printf("La cadena no es polindromo\n"); /*falso*/
	}
/*          Actividad 2          */

	for(i=0;i<20;i++) /*ciclo for para ir almacenando la cantidad de caracteres en el arreglo*/
	{
		if(arreglo[i] == char1) /*ciclo if anidado para sumar a los contadores la cantidad de caracteres del arreglo*/
			acum1 = acum1 + 1;
		else if(arreglo[i] == char2)
				acum2 = acum2 + 1;
		else if(arreglo[i] == char3)
				acum3 = acum3 + 1;
		else if(arreglo[i] == char4)
				acum4 = acum4 + 1;
	}
	printf("\n\n%c : %d \n", char1, acum1); /*se muestra la cantidad de veces que los caracteres se repitieron en pantalla*/
	printf("%c : %d \n", char2, acum2);
	printf("%c : %d \n", char3, acum3);
	printf("%c : %d \n", char4, acum4);

	return 0; /*fin del programa*/
}
