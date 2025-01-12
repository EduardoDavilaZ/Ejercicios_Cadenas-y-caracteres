//Contar el número de palabras de una cadena especificada en diferentes líneas de texto.
#include <stdio.h>

void introducir(char[]);
void contar(char[]);

main(){
	char frase[50];
	introducir(frase);
	contar(frase);
}

void introducir(char* frase){
	printf("Introduce: ");
	scanf("%[^\n]", frase);
}

void contar(char* frase){
	int c = 1;
	int i = 0;
	if (texto[0] == ' ') c = 0;
	while (frase[i] != '\0'){
		if (frase[i] != ' ' && frase[i-1] == ' '){
			c++;
		}
		i++;
	}
	printf("Contador de palabras: %d", c);
}