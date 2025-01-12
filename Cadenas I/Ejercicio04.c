/*Se desea contar el número de las letras 'a' y el número de las letras 'b' de una frase terminada
en un punto. Se supone que es posible leer los caracteres independientemente.*/
#include <stdio.h>
void introducir(char[]);
void contar(char[]);

main(){
	char cadena[50];
	introducir(cadena);
	contar(cadena);
}

void introducir(char cadena[]){
	int i=0;
	char c;
	printf("Introduce: ");
	while (c != '.' && i < 49){
		scanf("%c", &c);
		if (c != '.'){
			cadena[i] = c;
			i++;
		}
	}
}
		
void contar(char cadena[]){
	int a = 0, b = 0;
	for (int i=0; i<=49; i++){
		if (cadena[i] == 'a') a++;
		if (cadena[i] == 'b') b++;
	}
	printf("\nContador de 'a': %d", a);
	printf("\nContador de 'b': %d", b);
}