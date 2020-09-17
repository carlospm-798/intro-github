/*Carlos Paredes Márquez.
Actividad n.4 seminario de algoritmia.
16/09/2020.*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<windows.h>
#define c 5
#define t 100

//struct personaje.
struct personaje{
	char nombre[t];
	char tipo[t];
	float fuerza;
	float salud;
}proto[c];

//función mostrar.
//void show(int n, float arreglo[]);

//función principal.
int main(void){
	
	char res=0;
	
	do{
		int i;
		int op;
		int reg=0;
		
		float arreglo[5];
		float suma=0;
		float promedio=0;
		
	    printf("Actividad #4 seminario de algoritmia:\n\n\n");
	    printf("Ingresar arreglo: [1]\nMostrar arreglo: [2]\nStruct de personajes: [3]\n\n\n");
	    scanf("%i",&op); system("cls");
	    
	    switch(op){
	    	
			case 1:
				printf("Ingresar arreglo de 5 digitos:\n\n\n");
			
			default: printf("Error.\n");
		}
	    
	    printf("Volver a repetir programa: [s]\n");
	    fflush(stdin); scanf("%c",&res);
	    
	}while(res=='s'||res=='S');
	
	return 0;
}
