//Leer dos caracteres y deducir si están en orden alfabético.
#include <stdio.h>
void introducir(char*);
void deducir(char, char);

main(){
	char a, b;
	introducir(&a);
	fflush(stdin);
	introducir(&b);
	deducir(a, b);
}

void introducir(char* c){
	printf("Introducir: ");
	scanf("%c", c);
}

void deducir(char a, char b){
	a < b ? printf("\nSi") : printf("\nNo");
	printf(" estan ordenados.");
}