#include<stdio.h>

int main(void){

    char nombre[100];
    unsigned int edad;

    printf("Hola mundo :D\n");
    
    printf("Nombre:    ");
    fgets(nombre, sizeof(nombre), stdin);
    printf("\nHola \t<<%s>>\n", nombre);

    printf("Que edad tienes?    ");
    scanf("%u",&edad);
    printf("\nVas a cumplir \t<%u>\t", edad + 1);

    return 0;
}