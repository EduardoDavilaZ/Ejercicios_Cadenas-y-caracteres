/*Hacer un programa que permita entrar un texto, contar el número de palabras que hay. No debe limitarse a
contar los espacios en blanco ya que entre palabra y palabra puede haber más de uno.*/

#include <stdio.h>

void introducir(char[]);
void contar(char[]);

main(){
	char texto[50];
	introducir(texto);
	contar(texto);
}

void introducir(char* texto){
	printf("Introduce: ");
	scanf("%[^\n]", texto);
}

void contar(char* texto){
	int c = 1;
	int i = 0;
	if (texto[0] == ' ') c = 0;
	while (texto[i] != '\0'){
		if (texto[i] != ' ' && texto[i-1] == ' '){ //Si a una palabra le antecede un espacio, se considera palabra.
			c++;
		}
		i++;
	}
	printf("Contador de palabras: %d", c);
}