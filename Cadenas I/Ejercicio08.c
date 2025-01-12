/*Escribir un algoritmo que permite la entrada de un nombre consistente en un nombre, un primer apellido y
un segundo apellido, en ese orden y que imprima a continuación el último apellido, seguido del primer
apellido y el nombre. Por ejemplo: Luis García Parra producirá: Parra García Luis.*/
#include <stdio.h>
#include <string.h>

void introducir(char[]);
void ordenar(char[]);
void visualizar(char[]);
void unirApellido(char[]);
void separarApellido(char[]);

main() {
    char nombre[40];
    introducir(nombre);
    unirApellido(nombre);
    ordenar(nombre);
    separarApellido(nombre);
    visualizar(nombre);
}

void introducir(char* nombre) {
    printf("Introducir: ");
    scanf(" %[^\n]", nombre);
}
//Luis García Parra producirá: Parra García Luis.
//Juan Pablo de Las Mercedes Del Castillo producirá Del Castillo de Las Mercedes Juan Pablo
void ordenar(char* nombre) {
    char aux[40];
    int i, j = 0, ipa, isa;
    
	for (ipa = strlen(nombre) - 1; nombre[ipa] != ' '; ipa--); // Situarse en el inicio del primer apellido
    printf("%c\n", nombre[ipa+1]);
	for (i = ipa + 1; nombre[i] != '\0'; i++) aux[j++] = nombre[i];
	aux[j++] = ' ';
    
	for (isa = ipa - 1; nombre[isa] != ' '; isa--); // Situarse en el inicio del segundo apellido
	printf("%c\n", nombre[isa+1]); 
	for (i = isa + 1; i < ipa; i++) aux[j++] = nombre[i];
    aux[j++] = ' ';
	
	for (i = 0; i < isa+1; i++) aux[j++] = nombre[i];
	aux[j] = '\0';
	strcpy(nombre, aux);
}

void visualizar(char* nombre) {
    printf("Resultado: %s\n", nombre);
}

void unirApellido(char* nombre){
	char articulos[6][5] = {"el", "la", "los", "las", "de", "del"};
    char aux[5];
    int i=0, j=0;
    while (nombre[i] != '\0'){
    	if (nombre[i] != ' ' && nombre[i] != '\0') {
            aux[j++] = nombre[i];
        } else {
            aux[j] = '\0';
            for (int k=0; k<=5; k++){
            	if (strcmpi(aux, articulos[k]) == 0) { //Independiente a mayusculas y minusculas. Ej. "del" = "Del".
	                nombre[i] = '*';
	            }
			} 
            j = 0;
        }
        i++;
	}
	printf("Union: %s\n", nombre); // Visualizar la unión de nombres compuestos
}

void separarApellido(char* nombre){
	for (int i=0; nombre[i] != '\0'; i++){
		if (nombre[i] == '*'){
			nombre[i] = ' ';
		}
	}
}