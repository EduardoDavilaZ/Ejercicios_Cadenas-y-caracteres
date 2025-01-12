//Hacer un programa que pida caracteres hasta entrar una mayúscula.
#include <stdio.h>

void introducir(void);
int esMayuscula(char);

main(){
	introducir();
}

void introducir(void){
	char l;
	do {
		printf("Introduce: ");
		scanf("%c", &l);
		fflush(stdin);
	} while(esMayuscula(l) == 0);
}

int esMayuscula(char l) {
    return l >= 'A' && l <= 'Z' ? 1 : 0;
}