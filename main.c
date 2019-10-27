#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#define NN 5


/*
Autor: Brenda Montserrat López Castro
Fecha: 26/octubre/2019
Grupo: 08
Horario: sábados 9-11 a.m.
Matrícula: 174484
*/

typedef struct /*Declaración de estructuras que contengan los datos a pedir, aquí se almacenan los datos del estudiante*/
{
	char *nombreEstudiante; 
	int edad;
	char sexo;
	int *calif;
}Estudiante;

typedef struct /*Declaración de estructuras que contengan los datos a pedir, aquí se almacenan las calificaciones*/
{
	int numest;
	Estudiante *estu;
}RegistroCalif;

void main () /*Declarado como void porque no regresa ningún valor*/
{

	char Nombre [30]; /*Declaración de variables*/
	RegistroCalif rest;
	int i, n, sumnot=0, mayor=0;
	float prom, promMayor=0;
	
	printf("Ingrese el numero de estudiantes: "); /*Datos a pedir por teclado*/
	scanf("%d", &rest.numest);
	rest.estu=(Estudiante*) malloc(rest.numest * sizeof(Estudiante)); /*Se crea una variable con punteros para guardar el número de estudiantes, se asigna el tamaño a la estructura*/
	if (rest.estu==NULL)
	{
		printf("Insuficiente espacio de memoria");
		exit(1);
	}
	for (i=0; i<rest.numest; i++) /*Se piden los datos en un ciclo para llenar las estructuras*/
	{
		printf("Nombre del estudiante: "); /*Nombre a recibir en estructura del estudiante*/
		fflush(stdin);
		gets(Nombre);
		
		rest.estu[i].nombreEstudiante=(char*)malloc(sizeof(char)*(strlen(Nombre))+1); /*Se utilizan punteros para llamar a un espacio de memoria de la estructura donde se guardan los datos*/
		strcpy (rest.estu[i].nombreEstudiante, Nombre); /*se copia el nombre de estudiante en la estructura*/
		printf("Edad[%d]: ", i+1); /*Datos en pantalla*/
		fflush(stdin);
		scanf("%d", &rest.estu[i].edad);
		printf("Sexo[%d]: ", i+1); /*Datos en pantalla*/
		fflush(stdin);
		scanf("%c", &rest.estu[i].sexo);
		rest.estu[i].calif=(int*)malloc(NN*sizeof(int));
			if (rest.estu[i].calif==NULL)
			{
				printf("Insuficiente espacio de memoria");
				exit (1);
			}
		printf("Las calificaciones del estudiante %d son: \n", i+1); /*Datos a entregar por pantalla*/
		sumnot=0;
		prom=0;
			for (n=0; n<5; n++) 
			{
				printf("Calificacion[%d]:", n+1); /*Datos en pantalla*/
				scanf("%d", &rest.estu[i].calif[n]); /*Se piden las 5 calificaciones y se guardan en la memoria de un solo estudiante*/
				sumnot+=rest.estu[i].calif[n];
			}
		prom=sumnot/5; /*Suma de calificaciones entre 5*/
		
		if (prom>promMayor) /*Si el prom es mayor al promedio más alto, el ciclo se cumple*/
		{
			mayor=i;
			promMayor=prom;
		}

	}
	printf("El estudiante con mayor promedio es: %s\n", rest.estu[mayor].nombreEstudiante); /*Resultado en pantalla del estudiante con mayor promedio*/
}

