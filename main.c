#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* 
Autor: Brenda Montserrat López Castro
Fecha: 21/09/19
Grupo: 08
Horario: Sábados 9-11 hrs
Matrícula: 1744884 
*/

/***********Actividad 1****************/


int main() {
	float prom, calif, suma=0; /*declaracion de variables*/
	int i=0, num, exp, r;
		for (i=1; i<=10; i++) /*ciclo for, de repetición hasta que la condicion de que i sea menor o igual a 10 se cumpla*/
		{
		printf("\nIngrese la calificacion del examen %d: ", i);
		scanf("%f", &calif);			
		fflush(stdin);
		suma = suma + calif; /*se suman las calificaciones para posteriormente brindar el promedio*/
	}
	printf("\nLa suma del promedio de los examenes del alumno es de: %.2f", suma); /*suma de calificaciones en pantalla*/
	prom = suma/10; /*cálculo del promedio*/
	printf("\nEl promedio del alumno es de: %.2f\n", prom);
		if (prom>7) /*ciclo if para mostrar en pantalla los casos de si el alumno aprueba o reprueba según los resultados del promedio*/
		 	printf("\nEl alumno esta aprobado.");
		else 
			printf("\nEl alumno esta reprobado.");
		fflush(stdin);
	
/*****************Actividad 2*************/
	
	for (i=0; i<50; i++) /*ciclo para pedir al usuario de un número que se elevará a la potencia dada por el mismo usuario*/
	{
		printf("\n\n\nIngrese un numero base:\n"); /*se piden valores*/
		scanf("%d", &num);
		fflush(stdin);
		printf("Ingrese el exponente al que desea elevar dicho numero:\n"); 
		scanf("%d", &exp);
		fflush(stdin);
		r= pow(num, exp); /*con la función pow se eleva el número deseado al exponente introducido*/
		printf("\nEl resultado de elevar el numero %d al exponente %d es: %d", num, exp, r); /*se imprime el resultado*/
	}
	return 0; /*regreso de 0*/
}
