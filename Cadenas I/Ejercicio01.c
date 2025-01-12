//Leer un carácter y deducir si está situado antes o después de la letra 'm' en orden alfabético.
#include <stdio.h>
void introducir(char*);
void posicion(char, const char);

main(){
	char c;
	const char letra = 'm';
	introducir(&c);
	posicion(c, letra);
}

void introducir(char* c){
	printf("Introduce un caracter: ");
	scanf("%c", c);
}

void posicion(char c, const char letra){
	c > letra ? printf("\nEsta situado despues") : c < letra ? printf("\nEsta situado antes.") : printf("\nEsta situado en la misma posicion.");
}