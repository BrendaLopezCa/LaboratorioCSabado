#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* 
Autor: Brenda Montserrat L�pez Castro
Fecha: 26/Octubre/2019
Grupo: 08
Horario: S�bados 9-11 a.m.
Matr�cula: 1744884
*/
 
/**********************Actividad 1*****************/
void primo(int num); /*Funciones globales especificadas*/ 

long int potencia (int num, int exp);

int main() { /*Programa "main" donde se pedir�n todos los datos al usuario*/
	int num, exp; /*Declaraci�n de variables*/
	printf("Ingrese un numero entero o mayor a cero:\n"); /*Pedir y recibir los datos del usuario por teclado*/
	scanf("%d", &num);
	while (num<0) /*Ciclo while para determinar si el n�mero introducido es correcto para que el programa funcione*/
	{
		printf("El numero debe ser mayor a cero. \n"); /*Si el usuario da un n�mero err�neo, se encarga de pedirlo de nuevo*/
		scanf("%d", &num);
		fflush(stdin);
	}	
	primo (num); /*cuando tenga el dato correcto, se llama a la funci�n para que realice la operaci�n necesaria*/
	fflush(stdin);
	/****************Actividad 2*****************/
	printf("Ingrese un numero entero:\n"); /*Pedir y recibir los datos del usuario por teclado*/
	scanf("%d", &num);
	printf("Ingrese la potencia a la que desea elevar dicho numero:\n");
	scanf("%d", &exp);
	potencia (num, exp); /*cuando tenga el dato correcto, se llama a la funci�n para que realice la operaci�n necesaria*/
	return 0;
}

/***********Actividad 1: Funci�n*************/
void primo(int num) /*Funci�n global ya estabecida que no regresa ning�n valor*/
{
	int i, div, primo=1; 
	for (div=2; div<num; div++) /*Ciclo for para determinar si el n�mero introducido es n�mero primo*/ 
	{
       	if(num%div==0){ /*Determina que no es n�mero primo*/
	  		primo=0;
	  		printf("El numero %d no es primo\n\n", num); /*Determina que no es n�mero primo*/
	   	}
       	else if (primo!= 0){  /*Determina que es n�mero primo, ya que es diferente del no (0)*/
       		primo=1;
       		printf("El numero %d es primo\n\n", num);    
	   	}
	}
}
/**********Actividad 2: Funcion****************/
long int potencia(int num, int exp) /*Funci�n global ya estabecida que regresa un valor espec�fico*/
{
	int numero; /*Declaraci�n de la nueva variables que dar� como resultado*/
	numero=pow(num, exp); /*expresi�n matem�tica para elevar a un exponente x un n�mero y*/
	printf("\n\nEl numero %d elevado a la potencia %d es %d", num, exp, numero);
}
