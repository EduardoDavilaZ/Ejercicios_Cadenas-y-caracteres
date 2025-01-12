/*Hacer un programa que pida caracteres hasta que se pulse un punto; el programa ha de pedir 
un mínimo de 10 caracteres. Contar la cantidad de minúsculas.*/
#include <stdio.h>

void introducir(int*, int);
int esMayuscula(char);
void visualizar(int);

main(){
	int m=0;
	introducir(&m, 0);
	visualizar(m);
}

void introducir(int* m, int c){
	char l;
	printf("Introduce: ");
	scanf("%c", &l);
	fflush(stdin);
	if (l == '.' || c > 9){
		return;
	}
	if (esMayuscula(l) == 0) (*m)++;
	return introducir(m, c+1); 
}

int esMayuscula(char l) {
    return l >= 'A' && l <= 'Z' ? 1 : 0;
}

void visualizar(int m){
	printf("\nCantidad de minusculas: %d", m);
}