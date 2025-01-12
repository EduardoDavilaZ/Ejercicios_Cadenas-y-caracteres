/*Escribir un algoritmo para contar el número de ocurrencias de cada una de las palabras 'y', 'el’ y 'una' en las
diferentes líneas de texto.*/
#include <stdio.h>
#include <string.h>

void introducir(char*, int*, int*, int*);
void contar(char[], int*, int*, int*);
void visualizar(int, int, int);

main() {
    char frase[60];
    int y=0, el=0, una=0;
    introducir(frase, &y, &el, &una);
    visualizar(y, el, una);
}

void introducir(char* frase, int* y, int* el, int* una) {
    printf("Introducir (Finalizar: 0):\n");
    do {
        fgets(frase, 60, stdin);
        frase[strcspn(frase, "\n")] = '\0';
        if (strcmp(frase, "0") != 0) {
            contar(frase, y, el, una);
        }
    } while (strcmp(frase, "0") != 0);
}

void contar(char* frase, int* y, int* el, int* una) { // No lo cuenta por palabra
    for (int i = 0; frase[i] != '\0'; i++) {
        if (frase[i] == 'y') (*y)++;
        if (frase[i] == 'e' && frase[i + 1] == 'l') (*el)++;
        if (frase[i] == 'u' && frase[i + 1] == 'n' && frase[i + 2] == 'a') (*una)++;
    }
}

void visualizar(int y, int el, int una) {
    printf("\nNumero de veces que se repitio:");
    printf("\n- 'y': %d", y);
    printf("\n- 'el': %d", el);
    printf("\n- 'una': %d\n", una);
}
