/*Hacer un programa para entrar un texto en una tabla, y después contar cuantas palabras hay de 1, 2, 3, 4, 5,
y más de cinco caracteres. Se tiene que declarar un array de 6 elementos tipo int para guardar
respectivamente, en cada posición la cantidad de palabras de 1 letra, 2, 3, etc.*/
#include <stdio.h>
#include <string.h>
void introducir(char*);
void contar(char*, int*);
void visualizar(int*);
void clasificar(int*, int);

main(){
	char texto[50];
	int contador[6] = {0};
	introducir(texto);
	contar(texto, contador);
	visualizar(contador);
}

void introducir(char* texto){
	printf("Introduce: ");
	scanf("%[^\n]", texto);
}

void contar(char* texto, int* contador){
    int c=0;
	for (int i = 0; texto[i] != '\0'; i++) {
        if (texto[i] != ' ') c++;
        if (texto[i] == ' ' || texto[i+1] == '\0') {
            if (c > 0) {
                clasificar(contador, c);
                c = 0;
            }
        }
    }
}

void clasificar(int* contador, int c){
	c <= 5 ? contador[c-1]++ : contador[5]++;
}

void visualizar(int* contador){
	for (int i=0; i<=5; i++){
		if (i != 5){
			printf("\nContador de %d: %d", i+1, contador[i]);
		} else {
			printf("\nContador de >%d: %d", i, contador[i]);
		}
	}
}