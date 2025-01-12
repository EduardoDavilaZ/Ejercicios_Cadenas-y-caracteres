/*Hacer un programa que pida un carácter y diga si es una letra mayúscula. Dentro del 
código ASCII los caracteres mayúscula están comprendidos entre el 65(A), y el 90(Z).*/
#include <stdio.h>
void esMayuscula(char);

main(){
	char l;
	printf("Introduce: ");
	scanf("%c", &l);
	esMayuscula(l);
}

void esMayuscula(char l){
	l >= 65 && l <= 90 ? printf("Si") : printf("No");
	printf(" es mayuscula");
}