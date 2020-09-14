#include<stdio.h>

int main(void){

    char nombre[100];

    printf("Hola Mundo.\n");
    printf("Inserte su nombre: \n");
    fgets(nombre, sizeof(nombre),stdin);

    printf("Hola <<%s>>\n",nombre);

    return 0;
}