#include<stdio.h>

int main(void){

    char nombre[100];

    printf("Hola mundo :D\n");
    
    printf("Nombre: ");
    scanf("%s",&nombre);

    printf("\nHola \t<<%s>>\n",nombre);

    return 0;
}