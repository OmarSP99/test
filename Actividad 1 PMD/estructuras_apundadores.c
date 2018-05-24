#include<stdio.h>
#include<stdlib.h>

typedef struct
{
	int expediente;
	char nombre[50];
	char carrera[50];
	int edad;
}Alumno;

int main()
{
	setvbuf(stderr, NULL, _IONBF, 0);
	setvbuf(stdout, NULL, _IONBF, 0);

	int opcion;
	int i,j;
	static Alumno arreglo[30];
	Alumno* apuntador;
	apuntador=&arreglo;

	printf("****MENU****");
	printf("¿Que desea hacer?\n");
	printf("[1] Registrar un nuevo alumno\n");
	printf("[2] Imprimir los datos\n");
	printf("[3] Buscar alumno\n");
	printf("[4] Salir\n");
	scanf("%d",&opcion);
	while(opcion!=0 && opcion<4)
	{
		if(opcion==1)
		{
			j=1;
			printf("Ingrese el expediente\n");
			scanf("%d",&(*apuntador).expediente);
			printf("Ingrese el nombre\n");
			scanf("%s",(*apuntador).nombre);
			printf("Ingrese la carrera\n");
			scanf("%s",(*apuntador).carrera);
			printf("Ingrese la edad\n");
			scanf("%d",&(*apuntador).edad);
			apuntador+=j;
			j++;
		}
		else if(opcion==2)
		{
			j=1;
			for(i=0;i<30;i++)
			{
				printf("Expediente: %d",(*apuntador).expediente);
				printf("Nombre: %s",(*apuntador).nombre);
				printf("Carrera: %s",(*apuntador).carrera);
				printf("Edad: %d",(*apuntador).edad);
				apuntador+=j;
				j++;
			}
		}
		else
			return 0;

	}
	system("pause");
	return 0;
}
