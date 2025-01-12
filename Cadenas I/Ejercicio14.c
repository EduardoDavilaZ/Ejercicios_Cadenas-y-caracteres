/*Hacer un programa que pida caracteres hasta entrar un punto; el programa ha de dejar 
entrar un máximo de 5 vocales.*/
#include <stdio.h>

void introducir(int*);
int esVocal(char);

main(){
	int vocales=0;
	introducir(&vocales);
}

void introducir(int* vocales){
	char l;
	do {
		printf("Introduce: ");
		scanf("%c", &l);
		fflush(stdin);
		if (esVocal(l) == 1) (*vocales)++;
	} while(l != '.' && (*vocales) <= 4);
}

int esVocal(char l) {
    char vocales[] = {'a', 'e', 'i', 'o', 'u'};
    for (int i = 0; i < 5; i++) if (l == vocales[i]) return 1;
    return 0;
}