#include <stdio.h>
#include <stdlib.h>

/* 
Autor: Brenda Montserrat L�pez Castro
Fecha: 08/Octubre/2019
Grupo: 08
Horario: S�bados 09-11 hrs
Matr�cula: 1744884
*/

/****************Actividad 1*****************/
int main(){
	int ventasEmpleadoOficinaEdificio[6][10][2];
	ventasEmpleadoOficinaEdificio[3][7][2] = 4234;
	printf("El empleado numero 3 de la oficina numero 7 del edificio numero 2 ha vendido %d\n\n", ventasEmpleadoOficinaEdificio[3][7][2]);
	fflush (stdin);
	
/***************Actividad 2*****************/
	ventasEmpleadoOficinaEdificio[3][7][2] = ventasEmpleadoOficinaEdificio[3][7][2]+10;
	printf("El empleado numero 3 de la oficina numero 7 del edificio numero 2 ha vendido %d", ventasEmpleadoOficinaEdificio[3][7][2]);
	return 0;
}

/* Preguntas de actividad 1

1. �Cu�ntos elementos componen el array multidimensional?
    R = 120 elementos
	
2. �Qu� ocurre si intentamos mostrar por pantalla un valor con un �ndice que est� definido para ese array multidimensional?
    R = el programa almacena y arroja valores basura o valores aleatorios si no se definen con un valor espec�fico

*/


