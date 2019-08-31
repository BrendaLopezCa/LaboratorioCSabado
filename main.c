#include <stdio.h>
#include <stdlib.h>

/* Nombre del alumno: Brenda Montserrat López Castro
 * Fecha: 31/08/2019
 * Grupo:
 * Horario: 9:00-11:00 hrs
 * Matrícula: 1744884 */
 
 /*****************************************************************************************
       Activdad 1 */

int main() {
	int A=5, B=3, C=-12, x, y, z;
	float num, numDos;
	printf("Introduzca un numero:");
	scanf("%f", &num);
	printf("introduzca otro numero:");
	scanf("%f", &numDos);
	if (num>numDos){
		printf("El numero mas grande de los dos introducidos es: %.3f", num);
	} else{
		printf("El numero mas grande de los dos introducidos es: %.3f", numDos);
	}
	/*************************** Actividad 2 ****************************************/
	printf("Dados los valores de 3 numeros A, B, C que corresponden a 5,3 y -12 respectivamente, se muestra en pantalla si las condiciones declaradas son verdaderas o falsas");
	if (A>3){
	printf("La condicion de A>3 es verdadera");
	} else{
	printf("La condicion de A>3 es falsa");	
	} 
	if (A>C){
		printf("La condicion de A>C es verdadera");
	} else{
		printf("La condicion de A>C es falsa");
	}
	if (B! = C){
		printf("La condicion de que B sea diferente de C es verdadera");
	} else{
		printf("La condicion de que B sea diferente de C es falsa");
	}
	if (A == 3){
		printf("La condicion de A=3 es verdadera");
	} else{
		printf("La condicion de A=3 es falsa");
	}
	if (A*B == 15){
		printf("La condicion de AxB=15 es verdadera");
	} else{
		printf("La condicion de AxB=15 es falsa");
	}
	if (C/B<A){
		printf("La condicion de C/B<A es verdadera");
	} else{
		printf("La condicion de C/B<A es falsa");
	}
	if (C/B == -10){
		printf("La condicion de C/B=10 es verdadera");
	} else{
		printf("La condicion de C/B=10 es falsa");
	}
	if (A+B+C == 5){
		printf("La condicion de que A+B+C=5 es verdadera");
	} else{
		printf ("La condicion de que A+B+C=5 es falsa");
	}
	if ((A+B == 8) && (A-B == 2)){
		printf("La condicion de A+B=8 y A-B=2 es verdadera");
	} else{
		printf("La condicion de A+B=8 y A-B=2 es falsa");
	}
	if ((A+B == 8) || (A-B == 6)){
		printf("La condicion de que A+B=8 o A-B=6 es verdadera");
	} else{
		printf("La condicion de que A+B=8 o A-B=6 es falsa");
	}
	if ((A>3) && (B>3) && (C<3)){
		printf("La condicion de A>3, B>3 y C<3 es verdadera");
	} else{
		printf("La condicion de A>3, B>3 y C<3 es falsa");
	}
	
/************************************** Activdad extra **************************************/
	printf("Introduzca un numero entero:");
	scanf("%d", &x);
	printf("Introduzca otro numero entero:");
	scanf("%d", &y);
	printf("Introduzca otro numero entero:");
	scanf("%d", &z);
	
	return 0;
}

