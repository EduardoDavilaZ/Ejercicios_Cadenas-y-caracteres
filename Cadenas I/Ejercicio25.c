/*Hacer un programa que permita entrar texto hasta que se teclee la secuencia STOP; controlar que no es
pueda entrar más caracteres de los que quepan.*/
#include <stdio.h>
#include <string.h>

void introducir(char*);

main() {
    char texto[50];
    introducir(texto);
}

void introducir(char* texto) {
    int sw = 1;
    do {
        printf("Texto: ");
        scanf(" %[^\n]", texto);
        if (strcmp(texto, "STOP") == 0) {
            sw = 0;
        }
    } while (sw == 1);
}

