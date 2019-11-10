#include <stdio.h>
#include <stdlib.h>
#define SIZE_NAME 50
#define SIZE 3
#define SIZE_D 4

/*
*Autor: Brenda Montserrat López Castro
*Fecha: 09/nov/2019
*Grupo: 08
*Horario: sábados 9-11am
*Matricula: 1744884
*/

int main() {

/*****************Actividad 1*******************/

struct picture_info { /*Se declara el arreglo de estructuras*/
	char name[SIZE_NAME];
	int date_time;
} pictures[SIZE];

struct picture_info *ptr_pic[SIZE]; /*Declaracion del arreglo de punteros a estructuras*/

	int i; 
	for(i=0; i<SIZE; i++) /*Se guardan las direcciones de memoria de las estructuras en el arreglo*/
		ptr_pic[i] = &pictures[i];

	for(i=0; i<SIZE; i++) /*Se obtienen y almacenan los datos de los respectivos punteros*/
	{ 
		struct picture_info *element = ptr_pic[i];
		fflush(stdin);
		printf("Datos de la fotografia %d: \n", i+1);
		printf("Nombre: ");
		scanf("%s", element->name);
		printf("Fecha: ");
		fflush(stdin);
		scanf("%d", &element->date_time);
	}
	for(i=0; i<SIZE; i++) { /*Se imprimen en pantalla los valores*/
		struct picture_info *element = ptr_pic[i];
		printf("\n Foto %d \n", i+1);
		printf("Nombre: %s, Fecha: %d \n", element->name, element->date_time);
	}
	system("pause");
	system("cls");

/*****************Actividad 2*******************/

	struct coordinates { /*se declara la estructura que almacena las variables*/
		int latitude;
		int longitude;
	} places[SIZE_D];

	places[0].latitude = 200;
	places[0].longitude = 300;
	places[1].latitude = 400;
	places[1].longitude = 100;
	places[2].latitude = 100;
	places[2].longitude = 400;
	places[3].latitude = 300;
	places[3].longitude = 200;
	
	struct coordinates *ar_ptr_coordinates_sort_latitude[SIZE_D] = { /*se guardan los datos en base a su latitud*/
		&places[2],
		&places[0],
		&places[3],
		&places[1]
	};

	struct coordinates *ar_ptr_coordinates_sort_longitude[SIZE_D] = { /*se guardan los datos en base a su latitud*/
		&places[1],
		&places[3],
		&places[0],
		&places[2]
	};

	printf("\nObtenidos por orden:\n"); /*Los datos se muestran en pantalla de la misma forma en la que se obtuvieron, o sea, la estructura misma*/
	for(i=0; i<SIZE_D; i++)
		printf("Latitude: %d, Longitude: %d \n", places[i].latitude, places[i].longitude);
		
	printf("\nOrdenados de forma ascendente por latitud:\n"); /*Los datos se muestran de forma ascendente en cuanto a resultados de latitud*/
	for(i=0; i<SIZE_D; i++){
		struct coordinates *element = ar_ptr_coordinates_sort_latitude[i];
		printf("Latitude: %d, Longitude: %d \n", element->latitude, element->longitude);
	}
	printf("\nOrdenados de forma ascendente por longitud:\n"); /*Los datos se muestran de forma ascendente en cuanto a resultados de longitud*/
	for(i=0; i<SIZE_D; i++){
		struct coordinates *element = ar_ptr_coordinates_sort_longitude[i];
		printf("Latitude: %d, Longitude: %d \n", element->latitude, element->longitude);
	}
	return 0;
}
