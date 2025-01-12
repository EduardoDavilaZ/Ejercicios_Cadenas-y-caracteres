/*Diseñar un algoritmo cuya entrada sea una cadena S y un factor de multiplicación N, cuya función sea
generar la cadena dada N veces. Por ejemplo: '¡Hey!', 3; se convertirá en '¡Hey! ¡Hey! ¡Hey!'*/

#include <stdio.h>

void introducir(char[]);
void visualizar(char[]);

main(){
	char s[30];
	introducir(s);
	visualizar(s);
}

void introducir(char s[]){
	printf("Introduce: ");
	scanf("%[^\n]", s);
}

void visualizar(char s[]){
	int n;
	printf("N de veces: ");
	scanf("%d", &n);
	for (int i=0; i<=n; i++) printf("%s ", s);
}