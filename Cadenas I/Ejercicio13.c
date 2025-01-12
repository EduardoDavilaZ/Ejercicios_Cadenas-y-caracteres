/*Realizar la búsqueda de un determinado nombre en una lista de nombres, de modo que el algoritmo
visualice los siguientes mensajes según el resultado:
a) 'Nombre encontrado', si el nombre existe.
b) 'Nombre no existe', si el nombre no está en la lista.*/
#include <stdio.h>
#include <string.h>

void introducir(FILE*, char[]);
void buscar(FILE*, char[]);

main(){
	FILE* fichero;
	char nombre[40];
	introducir(fichero, nombre);
	buscar(fichero, nombre);
}

void introducir(FILE* fichero, char* nombre){
	fichero = fopen("nombres.dat", "wb+");
	while (strcmp(nombre, "0") != 0){
		printf("Nombre: ");
		scanf(" %[^\n]", nombre);
		if (strcmp(nombre, "0") != 0){
			fprintf(fichero, "%s\n", nombre);
		}
	}
	fclose(fichero);
}

void buscar(FILE* fichero, char* nombre){
	fichero = fopen("nombres.dat", "rb");
	char buscarNombre[40];
	printf("Buscar: ");
	scanf(" %[^\n]", buscarNombre);
	
	while (!feof(fichero)){
		fscanf(fichero, " %[^\n]", nombre);
		nombre[strcspn(nombre, "\n")] = '\0'; 		// Borrar salto de linea
		if (strcmp(nombre, buscarNombre) == 0){
			printf("\nNombre encontrado");
			fclose(fichero);
			return;
		}
	}
	printf("\nNombre no existe");
}