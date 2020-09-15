#include<stdio.h>

int main(void){

    char nombre[100];
    int year=0;

    printf("Hola Mundo.\n");
    printf("Inserte su nombre: \n");
    fgets(nombre, sizeof(nombre),stdin);
    printf("Hola <<%s>>\n",nombre);
    printf("Cuantos años tienes actualmente <<%s>>?\n");
    scanf("%i",&year);
    printf("<<%s>>, vas a cumplir [%i] años\n",nombre,year);

    return 0;
}