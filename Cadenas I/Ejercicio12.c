/*Diseñar un algoritmo que elimine todos los caracteres de una cadena dada a partir de otra 
cadena. Las dos cadenas son:
a) CADENA1 es la cadena de donde deben eliminarse caracteres.
b) LISTA es la cadena que proporciona los caracteres que deben eliminarse.
i. CADENA = 'EL EZNZZXTX'
ii. LISTA = 'YZ'
la cadena resultante será ‘EL ENXTX'. Han desaparecido todos los caracteres ‘YZ’ de la 
primera cadena.*/

#include <stdio.h>
#include <string.h>

void introducir(char[]);
void eliminar(char[], char[]);
void visualizar(char[]);

main(){
	char cadena[50];
	char lista[10];
	introducir(cadena);
	introducir(lista);
	eliminar(cadena, lista);
	visualizar(cadena);
}

void introducir(char s[]){
	printf("Introduce: ");
	scanf("%[^\n]", s);
	fflush(stdin);
}

void eliminar(char cadena[], char lista[]){
	char aux[50];
	int k = 0, sw;
	for (int i=0; cadena[i] != '\0'; i++){
		sw = 1;
		for (int j=0; lista[j] != '\0'; j++) if (cadena[i] == lista[j]) sw = 0;
		if (sw == 1 ){
			aux[k] = cadena[i]; 
			k++;
		}
	}
	aux[k] = '\0';
	strcpy(cadena, aux);
}

void visualizar(char cadena[]){
	printf("%s", cadena);
}