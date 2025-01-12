/*Hacer un programa que pida un carácter, diga si es una letra mayúscula (ASCII del 65 al 90), 
una letra minúscula (ASCII del 97 al 122),o bien otro carácter.*/
#include <stdio.h>
int tipo(char);

main(){
	char l;
	printf("Introduce: ");
	scanf("%c", &l);
	switch (tipo(l)){
		case 0: printf("Es otro caracter"); break;
		case 1: printf("Es minuscula"); break;
		case 2: printf("Es mayuscula"); break;
	}
}

int tipo(char l){
	return l >= 65 && l <= 90 ? 2 : l >= 97 && l <= 122 ? 1 : 0;
}