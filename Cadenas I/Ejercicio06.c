/*Escribir un algoritmo para determinar si dentro una cadena especificada existe otra
cadena dada, y, si es así, sustituir el carácter por un asterisco (*) en la primera
posición de cada cadena.*/
#include <stdio.h>

void introducir(char[]);
void comprobar(char[], char[]);
int validar(char[], char[], int);
void visualizar(char[]);

main(){
	char c1[80];
	char c2[20];
	introducir(c1);
	introducir(c2);
	comprobar(c1, c2);
	visualizar(c1);
	visualizar(c2);
}

void introducir(char c[]){
	printf("Introducir: ");
    scanf("%[^\n]", c);
	fflush(stdin);
}

void comprobar(char c1[], char c2[]){
	for (int i = 0; i < 50; i++) {
		if (c1[i] == c2[0] && validar(c1, c2, i)) {
			c2[0] = '*'; 
			c1[i] = '*';
			return;
		}
	}
}

int validar(char c1[], char c2[], int i) {
	int j = 0;
	while (c1[i + j] != '\0' && c2[j] != '\0' && c1[i + j] == c2[j]) {
		j++;
	}
	j++;
	return c2[j] == '\0' && c1[i+j-1] == ' ' ? 1 : 0;
}

void visualizar(char c[]){
	printf("\n%s", c);
}