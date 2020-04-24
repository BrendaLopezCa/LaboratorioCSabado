#include <stdio.h>
#include <stdlib.h>

/* Nombre del alumno: Brenda Montserrat López Castro
 * Fecha: 31/08/2019
 * Grupo: 08
 * Horario: 9:00-11:00 hrs
 * Matrícula: 1744884 */
 
 /*****************************************************************************************
       Activdad 1 */

int main() {
	int A=5, B=3, C=-12, x, y, z, num, numDos; /*declaracion de variables*/
	printf("Introduzca un numero:"); /*introduccion de datos en pantalla*/
	scanf("%d", &num);
	printf("Introduzca otro numero:");
	scanf("%d", &numDos);
	if (num>numDos){
		printf("\nEl numero mas grande de los dos introducidos es: %d", num); /*impresion del resultado*/
	} else{
		printf("\nEl numero mas grande de los dos introducidos es: %d\n\n", numDos);
	}
	
	/******************************************************** Actividad 2 ***************************************************************************/
	
	printf("\nDados los valores de 3 numeros A, B, C que corresponden a 5,3 y -12 respectivamente, se muestra en pantalla si las condiciones declaradas son verdaderas o falsas.\n\n");
	if (A>3){  /*decision operativa del programa*/
	printf("La condicion de A>3 es verdadera\n"); /*impresion del resultado*/
	} else{
	printf("La condicion de A>3 es falsa\n");	/*impresion del resultado*/
	} 
	if (A>C){  /*decision operativa del programa*/
		printf("La condicion de A>C es verdadera\n"); /*impresion del resultado*/
	} else{
		printf("La condicion de A>C es falsa\n"); /*impresion del resultado*/
	}
	if (B!= C){  /*decision operativa del programa*/
		printf("La condicion de que B sea diferente de C es verdadera\n"); /*impresion del resultado*/
	} else{
		printf("La condicion de que B sea diferente de C es falsa\n"); /*impresion del resultado*/
	}
	if (A == 3){  /*decision operativa del programa*/
		printf("La condicion de A=3 es verdadera\n"); /*impresion del resultado*/
	} else{
		printf("La condicion de A=3 es falsa\n"); /*impresion del resultado*/
	}
	if (A*B == 15){  /*decision operativa del programa*/
		printf("La condicion de AxB=15 es verdadera\n");  /*impresion del resultado*/
	} else{
		printf("La condicion de AxB=15 es falsa\n");  /*impresion del resultado*/
	}
	if (C/B<A){  /*decision operativa del programa*/
		printf("La condicion de C/B<A es verdadera\n");  /*impresion del resultado*/
	} else{
		printf("La condicion de C/B<A es falsa\n");  /*impresion del resultado*/
	}
	if (C/B == -10){  /*decision operativa del programa*/
		printf("La condicion de C/B=10 es verdadera\n");  /*impresion del resultado*/
	} else{
		printf("La condicion de C/B=10 es falsa\n");  /*impresion del resultado*/
	}
	if (A+B+C == 5){  /*decision operativa del programa*/
		printf("La condicion de que A+B+C=5 es verdadera\n");  /*impresion del resultado*/
	} else{
		printf ("La condicion de que A+B+C=5 es falsa\n");  /*impresion del resultado*/
	}
	if ((A+B == 8) && (A-B == 2)){  /*decision operativa del programa*/
		printf("La condicion de A+B=8 y A-B=2 es verdadera\n");  /*impresion del resultado*/
	} else{
		printf("La condicion de A+B=8 y A-B=2 es falsa\n");  /*impresion del resultado*/
	}
	if ((A+B == 8) || (A-B == 6)){  /*decision operativa del programa*/
		printf("La condicion de que A+B=8 o A-B=6 es verdadera\n");  /*impresion del resultado*/
	} else{
		printf("La condicion de que A+B=8 o A-B=6 es falsa\n");  /*impresion del resultado*/
	}
	if ((A>3) && (B>3) && (C<3)){  /*decision operativa del programa*/
		printf("La condicion de A>3, B>3 y C<3 es verdadera\n");  /*impresion del resultado*/
	} else{
		printf("La condicion de A>3, B>3 y C<3 es falsa\n");  /*impresion del resultado*/
	}
	
/******************************************************************* Activdad extra *****************************************************************************/

	printf("\n\nIntroduzca un numero entero:"); /*introduccion de datos en pantalla*/
	scanf("%d", &x);
	printf("Introduzca otro numero entero:");
	scanf("%d", &y);
	printf("Introduzca otro numero entero:");
	scanf("%d", &z);
	if (x>3){  /*decision operativa del programa*/
		printf("\nLa condicion de %d>3 es verdadera\n", x);  /*impresion del resultado*/
	} else{
		printf("La condicion de %d>3 es falsa\n", x);  /*impresion del resultado*/
	}
	if (x>z){  /*decision operativa del programa*/
		printf("La condicion de %d>%d es verdadera\n", x, z);  /*impresion del resultado*/
	} else{
		printf("La condicion de %d>%d es falsa\n", x, z);  /*impresion del resultado*/
	}
	if (y != z){  /*decision operativa del programa*/
		printf("La condicion de que %d sea diferente de %d es verdadera\n", y, z);  /*impresion del resultado*/
	} else{
		printf("La condicion de que %d sea diferente de %d es falsa\n", y, z);  /*impresion del resultado*/
	}
	if (x == 3){  /*decision operativa del programa*/
		printf("La condicion de %d=3 es verdadera\n", x);  /*impresion del resultado*/
	} else{
		printf("La condicion de que %d=3 es falsa\n", x);  /*impresion del resultado*/
	}
	if (x*y == 15){  /*decision operativa del programa*/
		printf("La condicion de %dx%d es verdadera\n", x, y);  /*impresion del resultado*/
	} else{
		printf("La condicion de %dx%d es falsa\n", x, y);  /*impresion del resultado*/
	}
	if (z/y<x){  /*decision operativa del programa*/
		printf("La condicion de %d/%d<%d es verdadera\n", z, y, x);  /*impresion del resultado*/
	} else{
		printf("La condicion de %d/%d<%d es falsa\n", z, y, x);  /*impresion del resultado*/
	}
	if (z/y == -10){  /*decision operativa del programa*/
		printf("La condicion de %d/%d=-10 es verdadera\n", z, y);  /*impresion del resultado*/
	} else{
		printf("La condicion de %d/%d=-10 es falsa\n", z, y);  /*impresion del resultado*/
	}
	if (x+y+z == 5){  /*decision operativa del programa*/
		printf("La condicion de %d+%d+%d=5 es verdadera\n", x, y, z);  /*impresion del resultado*/
	} else{
		printf("La condicion de %d+%d+%d=5 es falsa\n", x, y, z);  /*impresion del resultado*/
	}
	if ((x+y == 8) && (x-y == 2)){  /*decision operativa del programa*/
		printf("La condicion de que %d+%d=8 y %d-%d=2 es verdadera\n", x, y);  /*impresion del resultado*/
	} else{
		printf("La condicion de que %d+%d=8 y %d-%d=2 es falsa\n", x, y);  /*impresion del resultado*/
	}
	if ((x+y == 8) || (x-y == 6)){  /*decision operativa del programa*/
		printf("La condicion de que %d+%d=8 o %d-%d=6 es verdadera\n", x, y);  /*impresion del resultado*/
	} else{
		printf("La condicion de que %d+%d=8 o %d-%d=6 es falsa\n", x, y);  /*impresion del resultado*/
	}
	if (x>3 && y>3 && z<3){  /*decision operativa del programa*/
		printf("La condicion de que %d>3, %d>3 y %d<3 es verdadera\n", x, y, z);  /*impresion del resultado*/
	} else{
		printf("La condicion de que %d>3, %d>3 y %d<3 es falsa\n", x, y, z);  /*impresion del resultado*/
	}
	return 0;
}
