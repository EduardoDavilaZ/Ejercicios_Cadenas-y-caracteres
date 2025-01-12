//Leer 10 caracteres de un texto y leer el número de letras ‘b’.
#include <stdio.h>
void introducir(char[]);
void contar(char[]);

main(){
	char cadena[10];
	introducir(cadena);
	contar(cadena);
}

void introducir(char cadena[]){
	int i=0;
	printf("Introduce: ");
	while (i < 10){
		scanf("%c", &cadena[i]);
		i++;
	}
}
		
void contar(char cadena[]){
	int b = 0;
	for (int i=0; i<=9; i++){
		if (cadena[i] == 'b') b++;
	}
	printf("\nContador de 'b': %d", b);
}