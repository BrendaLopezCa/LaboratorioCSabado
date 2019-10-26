#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* 
Autor: Brenda Montserrat López Castro
Fecha: 26/Octubre/2019
Grupo: 
Horario: Sábados 9-11 a.m.
Matrícula: 1744884
*/
 
/**********************Actividad 1*****************/
void primo(int num); /*Funciones 

long int potencia (int num, int exp);

int main() {
	int num, exp;
	printf("Ingrese un numero entero o mayor a cero:\n");
	scanf("%d", &num);
	while (num<0)
	{
		printf("El numero debe ser mayor a cero. \n");
		scanf("%d", &num);
		fflush(stdin);
	}	
	primo (num);
	fflush(stdin);
	/****************Actividad 2*****************/
	printf("Ingrese un numero entero:\n");
	scanf("%d", &num);
	printf("Ingrese la potencia a la que desea elevar dicho numero:\n");
	scanf("%d", &exp);
	potencia (num, exp);
	return 0;
}

/***********Actividad 1: Función*************/
void primo(int num)
{
	int div, primo=1;
	for (div=2; div<num; div++)
	{
       if(num/div==0){
	  	primo=0;
	  	printf("El numero %d no es primo\n\n", num);
	  }
       else if (primo!= 0){
       	primo=1;
       	printf("El numero %d es primo\n\n", num);    
	  }
	}
}
/**********Actividad 2: Funcion****************/
long int potencia(int num, int exp)
{
	int numero;
	numero=pow(num, exp);
	printf("\n\nEl numero %d elevado a la potencia %d es %d", num, exp, numero);
}
