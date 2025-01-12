/*Se tiene una lista de 15 nombres de alumnos. Escribir un algoritmo que solicite el nombre de un alumno,
busque en la lista (array) si el nombre está en la lista.*/
#include <stdio.h>
#include <string.h>
void introducir(char[][40]);
void buscar(char[][40]);

main(){
	char alumnos[15][40];
	introducir(alumnos);
	buscar(alumnos);
}

void introducir(char alumnos[][40]){
	for (int i=0; i<=14; i++){
		printf("Alumno[%d]: ", i);
		scanf(" %[^\n]", alumnos[i]);
	}
}

void buscar(char alumnos[][40]){
	char buscarNombre[40];
	int sw=0;
	printf("\nBuscar: ");
	scanf(" %[^\n]", buscarNombre);
	
	for (int i=0; i<=14; i++){
		if (strcmpi(alumnos[i], buscarNombre) == 0) sw = 1;
	}
	
	sw = 1 ? printf("\nEncontrado") : printf("\nNo encontrado");
}