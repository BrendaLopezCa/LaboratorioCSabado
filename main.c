#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/*
Autor: Brenda Montserrat L�pez Castro
Fecha: 02/Nov/2019
Grupo: 08
Horario: s�bados 9-11 a.m.
Matr�cula: 1744884 
*/

int main() 
{
   int a, b, c; /*Declaraci{on de variables y punteros*/
   int *p1, *p2, *p3;
   printf("Ingrese el valor de a:\n");
   scanf("%d", &a);
   printf("Ingrese el valor de b:\n");
   scanf("%d", &b);
   c=a+b;
   printf("a+b=%d\n", c); /*asignamos las direcciones a los punteros correspondientes*/
   p1=&a;
   p2=&b;
   p3=&c;
   printf("*p1 + *p2=%d\n", *p1+*p2);
   printf(" Direcci�n de a es %p\n Direcci�n de b es %p\n Y la de c es %p\n\n", p1, p2, p3);
   getch();
   return 0;
}
