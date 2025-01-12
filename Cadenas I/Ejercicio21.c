/*Entrar una serie de caracteres en una tabla, y mirar si esta es una "palíndromo" o no lo es. Un palíndromo
son aquellas palabras que se leen igual de izquierda a derecha que de derecha a izquierda, por ejemplo
ALLA.*/
#include <stdio.h>

void introducir(char*);
int esPalindromo(char*);
void visualizar(char*);
void eliminarEspacios(char*);

main(){
	char tabla[40];
	introducir(tabla);
	visualizar(tabla);
}

void introducir(char* tabla){
	printf("Introduce: ");
	scanf("%[^\n]", tabla);
}

void eliminarEspacios(char* tabla) { // Por si la cadena es una frase palíndroma: "la ruta natural".
    int i=0, j=0;
    while (tabla[i] != '\0') {
        if (tabla[i] != ' ') {
            tabla[j] = tabla[i];
            j++;
        }
        i++;
    }
    tabla[j] = '\0'; 
}

int esPalindromo(char* tabla){
	int i=0, j;
	eliminarEspacios(tabla);
	for (j=0; tabla[j]!='\0'; j++); j--; // Posicionar j en el último caracter válido
	while (tabla[i] == tabla[j] && i <= j){
		i++;
		j--;
	}
	return i >= j ? 1 : 0;
}

void visualizar(char* tabla){
	esPalindromo(tabla) == 1 ? printf("Es") : printf("No es");
	printf(" palindromo");
}