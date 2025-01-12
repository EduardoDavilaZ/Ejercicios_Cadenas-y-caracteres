/*Hacer un programa que permita entrar una serie de caracteres en una tabla hasta que se pulse ENTER;
controlar que no se pueda entrar más caracteres que el número de elementos del array. Después recorre el
array y sustituir las vocales por asteriscos.*/
#include <stdio.h>
void introducir(char*);
void sustituir(char*);
int esVocal(char);
void visualizar(char*);

main(){
	char tabla[15];
	introducir(tabla);
	sustituir(tabla);
	visualizar(tabla);
}

void introducir(char* tabla){
	printf("Introduce: ");
	scanf("%[^\n]", tabla);
}

void sustituir(char* tabla){
	for (int i=0; i<=14; i++){
		if (esVocal(tabla[i]) == 1) tabla[i] = '*';
	}
}

int esVocal(char l) {
    char vocales[] = {'a', 'e', 'i', 'o', 'u'};
    for (int i = 0; i < 5; i++) if (l == vocales[i]) return 1;
    return 0;
}

void visualizar(char* tabla){
	printf("%s", tabla);
}