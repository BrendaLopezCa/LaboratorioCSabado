#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* 
Autor: Brenda Montserrat López Castro
Fecha: 26/Octubre/2019
Grupo: 08
Horario: Sábados 9-11 a.m.
Matrícula: 1744884
*/
 
/**********************Actividad 1*****************/
void primo(int num); /*Funciones globales especificadas*/ 

long int potencia (int num, int exp);

int main() { /*Programa "main" donde se pedirán todos los datos al usuario*/
	int num, exp; /*Declaración de variables*/
	printf("Ingrese un numero entero o mayor a cero:\n"); /*Pedir y recibir los datos del usuario por teclado*/
	scanf("%d", &num);
	while (num<0) /*Ciclo while para determinar si el número introducido es correcto para que el programa funcione*/
	{
		printf("El numero debe ser mayor a cero. \n"); /*Si el usuario da un número erróneo, se encarga de pedirlo de nuevo*/
		scanf("%d", &num);
		fflush(stdin);
	}	
	primo (num); /*cuando tenga el dato correcto, se llama a la función para que realice la operación necesaria*/
	fflush(stdin);
	/****************Actividad 2*****************/
	printf("Ingrese un numero entero:\n"); /*Pedir y recibir los datos del usuario por teclado*/
	scanf("%d", &num);
	printf("Ingrese la potencia a la que desea elevar dicho numero:\n");
	scanf("%d", &exp);
	potencia (num, exp); /*cuando tenga el dato correcto, se llama a la función para que realice la operación necesaria*/
	return 0;
}

/***********Actividad 1: Función*************/
void primo(int num) /*Función global ya estabecida que no regresa ningún valor*/
{
	int i, div, primo=1; 
	for (div=2; div<num; div++) /*Ciclo for para determinar si el número introducido es número primo*/ 
	{
       	if(num%div==0){ /*Determina que no es número primo*/
	  		primo=0;
	  		printf("El numero %d no es primo\n\n", num); /*Determina que no es número primo*/
	   	}
       	else if (primo!= 0){  /*Determina que es número primo, ya que es diferente del no (0)*/
       		primo=1;
       		printf("El numero %d es primo\n\n", num);    
	   	}
	}
}
/**********Actividad 2: Funcion****************/
long int potencia(int num, int exp) /*Función global ya estabecida que regresa un valor específico*/
{
	int numero; /*Declaración de la nueva variables que dará como resultado*/
	numero=pow(num, exp); /*expresión matemática para elevar a un exponente x un número y*/
	printf("\n\nEl numero %d elevado a la potencia %d es %d", num, exp, numero);
}
