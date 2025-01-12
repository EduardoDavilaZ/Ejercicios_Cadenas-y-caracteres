/*Hacer un programa que permita entrar dos palabras, cada una en un array diferente, y que después diga si
son iguales o no lo son.*/
#include <stdio.h>
#include <string.h>
void introducir(char*);
void visualizar(char*, char*);

main(){
	char palabra1[20];
	char palabra2[20];
	introducir(palabra1);
	introducir(palabra2);
	visualizar(palabra1, palabra2);
}

void introducir(char* palabra){
	printf("Introduce: ");
	scanf("%[^\n]", palabra);
	fflush(stdin);
}

void visualizar(char* palabra1, char* palabra2){
	strcmp(palabra1, palabra2) == 0 ? printf("Si") : printf("No"); printf(" son iguales");
}