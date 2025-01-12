/*Hacer un programa que permita entrar un texto. Después el programa ha de localizar la palabra más larga,
decir en que posición empieza, y cuantos caracteres tiene.*/
#include <stdio.h>
#include <string.h>
void introducir(char*);
void localizarPalabra(char*, char*);
void visualizar(char*, int, int);

main(){
	char texto[50];
	char palabra[20];
	introducir(texto);
	localizarPalabra(texto, palabra);
}

void introducir(char* texto){
	printf("Introduce: ");
	scanf("%[^\n]", texto);
}

void localizarPalabra(char* texto, char* palabra){
    int max=0, c=0, pos=0, j=0;
    char aux[20];

    for (int i = 0; texto[i] != '\0'; i++) {
        if ((texto[i] != ' ' && (i == 0 || texto[i-1] == ' '))) {
            if (c > max) { // Guardar la palabra si es la más larga
                max = c;
                strcpy(palabra, aux);
                pos = i - c;  // Posición
            }
            c = 1; // Empezar nueva palabra
            aux[0] = texto[i]; 
            j = 1;
        } else if (texto[i] != ' ') {
            aux[j++] = texto[i];
            c++;
        }
    }

    if (c > max) {
        max = c;
        strcpy(palabra, aux);
        pos = strlen(texto) - c;
    }
	
	visualizar(palabra, pos, max);
}

void visualizar(char* palabra, int pos, int max){
	printf("Palabra mas larga: %s\n", palabra);
    printf("Posicion: %d\n", pos);
    printf("Numero de caracteres: %d\n", max);
}

