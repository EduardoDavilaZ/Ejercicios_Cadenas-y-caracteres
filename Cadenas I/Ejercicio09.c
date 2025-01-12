//Contar el número de palabras de una cadena especificada en diferentes líneas de texto.
#include <stdio.h>
#include <string.h>
void introducir(char[]);
void contar(char[]);

main(){
	char frase[50];
	contar(frase);
}

void introducir(char* frase){
	frase[0] = '\0';
	printf("Introduce: ");
	scanf(" %[^\n]", frase);
	fflush(stdin);
}

void contar(char* frase){
	int c, p = 0;
	int i;
	do{
		introducir(frase);
		i = 0;
		c = 1;
		if (frase[0] == ' ') c = 0;
		while (frase[i] != '\0'){
			if (frase[i] != ' ' && frase[i-1] == ' '){
				c++;
			}
			i++;
		}
		p+=c;
	} while (strcmp(frase, "fin") != 0);
		
	printf("Contador de palabras: %d", p-1);
}