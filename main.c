#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
/*
Autor: Brenda Montserrat López Castro
Fecha: 02/Nov/2019
Grupo: 08
Horario: sábados 9-11 a.m.
Matrícula: 1744884 
*/

//                                Actividad 1
int main() 
{
	char c[30]; /*Declaración de la cadena de caracteres*/
	int va=0, ve=0, vi=0, vo=0, vu=0, i; /*Declaración de variables y punteros*/
	int *pA, *pE, *pI, *pO, *pU;
    int a, b, AB;
    int *p1, *p2, *p3;
    printf("Ingrese una cadena de caracteres:\n"); /*pide la cadena por teclado al usuario*/
    scanf("%[^\n]", c); /*escanea toda la cadena, incluyendo los espacios en ella, dejará de leer hasta que se realice un enter por teclado*/
    fflush(stdin);
    for (i=0;i<30;i++){ /*Ciclo for para contar las vocales mediante un switch, letra por letra*/
    	switch (c[i]){
    		case 'a': va++;
    			break;
    		case 'e': ve++;
    			break;
    		case 'i': vi++;
    			break;
    		case 'o': vo++;
    			break;
    		case 'u': vu++;
    			break;
    		default:
				break;
		}
	}
	pA=&va; /*se asignan los punteros con las variables asignadas a cada vocal*/
	pE=&ve;
	pI=&vi;
	pO=&vo;
	pU=&vu;
	printf("Total de vocales en la cadena escrita:\n"); /*se imprime el total de vocales en la cadena, una vez haya sido leída*/
	printf("Vocal a: %d\n", *pA); /*los valores a imprimir son los declarados dentro de los punteros*/
    printf("Vocal e: %d\n", *pE);
    printf("Vocal i: %d\n", *pI);
    printf("Vocal o: %d\n", *pO);
    printf("Vocal u: %d\n", *pU);
    fflush(stdin);
	
//                            Actividad 2
    printf("\n\nIngrese el valor de a:\n"); /*pedir los valores de a y b*/
    scanf("%d", &a);
    printf("Ingrese el valor de b:\n");
    scanf("%d", &b);
    AB=a+b; /*realizar la operación de la suma de números*/
    printf("a+b=%d\n", AB); /*asignamos las direcciones a los punteros correspondientes*/
    p1=&a; /*se declara el valor de los números pedidos a¡en los punteros*/
    p2=&b;
    p3=&AB;
    printf("*p1 + *p2=%d\n", *p1+*p2); /*se imprimen los resultados para que el usuario los visualice*/
    getch();
    return 0; /*termina el programa*/
}
