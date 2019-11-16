#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/* Autor: Brenda Montserrat López Castro
Fecha: 16/11/2019
Grupo:08
Horario: 9-11 a.m.
Matrícula: 1744884
*/


char invertir (char c[11]);

//*********************Actividad 1******************************
int main()
{ 	char c[11]= "Hola mundo"; /*Declaración de variables, punteros y arreglos*/
	FILE *A,*B;
	A=fopen("archivo.txt","r"); /*abre el archivo en modo lectura con el comando r*/
    B=fopen("archivo_alrevez.txt","w");  /*abre el archivo en modo escritura con el comando w*/
	if((A == NULL) || (B == NULL)) /*verifica si el archivo está correctamente invertido*/
		printf("Error.");
	else
	{
		fgets(c,11,A); /*lee archivo A*/
		while(!feof(A)) /*mientras no sea fin del archivo, se aplica la función de invertir*/
		{
			invertir(c[11]); /*función a aplicar*/
			fprintf(B,"%s",c); /*se muestra el archivo b en pantalla*/
			fgets(c,11,A);  
		}
	}
	fflush(stdin);
	/************************************ACTIVIDAD 2***************************************************/
	FILE *pfp,*fpf; /*declaración de variables y punteros*/
	int a,b; 
	pfp=fopen("Numeros_a_y_b.txt","w"); /*se abren los archivos correspondientes*/
	printf("\n\nIngrese valor para a: "); /*se piden los valores*/
	scanf("%d",&a);
	printf("Ingrese valor para b: ");
	scanf("%d",&b);
	fprintf(pfp,"A= %d\nB= %d",a,b); /*se añaden los valores al archivo*/
	pfp=freopen("Numeros_a_y_b.txt","r",pfp);/*se vuelven a abrir los archivos paraleer los valores*/
	fpf=fopen("Suma_de_a_y_b.txt","w"); /*se crea el archivo de la suma*/	
	fprintf(fpf,"\nLa suma de a y b es = %d",a+b); /*se imprimen los valores de la suma*/
	fpf=freopen("Suma_de_a_y_b.txt","r",pfp); 
	fclose(fpf); /*se cierran los archivos*/
	fclose (pfp);
	return 0; /*fin del programa*/
}

void invertir (char c[11]) /*función para invertir la cadena*/ 
{ 
	int i, j; /*Declaración de variables*/
	char a;
	for(i=0, j=strlen(c)-1; i<strlen(c)/2; i++,j--) /*se invierte la cadena con la función*/
	{
		a=c[i];
		c[i]=c[j];
		c[j]=a;
	}
}

