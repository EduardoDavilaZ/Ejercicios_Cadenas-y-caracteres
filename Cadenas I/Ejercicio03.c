//Leer una letra. Deducir si est� o no comprendidas entre las letras may�sculas I-M inclusive.
#include <stdio.h>
void introducir(char*);
void deducir(char);

main(){
	char c;
	introducir(&c);
	deducir(c);
}

void introducir(char* c){
	printf("Introduce la letra: ");
	scanf("%c", c);
}

void deducir(char c){
	c > 'I' && c < 'M' ? printf("\nSi") : printf("\nNo");
	printf(" esta comprendido entre I y M"); 
}