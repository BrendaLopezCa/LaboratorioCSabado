#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
/* 
Autor: Brenda Montserrat López Castro
Fecha: 28/09/19
Grupo: 08
Horario: Sábados 9:00-11:00 hrs
Matrícula: 1744884
*/

/*******************Activdad 1 *****************/

int main() {
	int numeroDeCoches[25] = {20};
	int a, b, R, r;
	R = 21;
	numeroDeCoches[R]= 57;
	printf("La hora R es %d \n", R);
	printf("El numero de coches en la hora %d fue de %d coches\n\n", R, numeroDeCoches[R]);
	fflush (stdin);
/************** Actividad 2 ***************/
	a = 8;
	b = 4;
	R = a/b;
	numeroDeCoches[R]= 57;
	printf("EL numero de coches en la hora %d fue de %d coches \n", R, numeroDeCoches[R]);
	return 0;
}
