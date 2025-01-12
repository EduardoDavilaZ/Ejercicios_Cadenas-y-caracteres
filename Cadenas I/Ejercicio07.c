/*Escribir un algoritmo que elimine todos los espacios finales en una cadena determinada. 
Por ejemplo: 'J. R. GARCIA ' se deberá transformar en 'J. R. GARCIA'.*/
#include <stdio.h>
#include <string.h>

void introducir(char[]);
void quitarEspacios(char[]);
void visualizar(char[]);

main() {
    char nombre[30];
    introducir(nombre);
    quitarEspacios(nombre);
    visualizar(nombre);
}

void introducir(char* nombre) {
    printf("Introducir: ");
    scanf("%[^\n]", nombre);
}

void quitarEspacios(char* nombre) {
	int i;
	for(i=0; nombre[i] != '\0'; i++);
	i--;
	while(nombre[i] == ' '){
		nombre[i] = '\0';
		i--;
	}
}
void visualizar(char* nombre) {
    printf("%s", nombre);
    printf("|");
}
