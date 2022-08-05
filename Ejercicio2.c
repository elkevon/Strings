/* 2) Permitir el ingreso de una palabra y mostrarla en pantalla al revés.
Por ejemplo, para "CASA" se debe mostrar "ASAC". */

#include <stdio.h>

int main (void) {

	char palabra[21];  //declaracion de variables
	int i,j;
	
	printf("Mostreo de palabra invertida\n\n\n");
	printf("Ingresar palabra de 20 letras max.: ");
	gets(palabra);   //guardado del string
	
	for(i=0;i<21 && palabra[i]!='\0';i++);     //conteo de letras
	printf("\n%s escrita/o al reves es:",palabra);
	
	
	for(j=i;j>=0;j--)    //recorido de el valor de i de atras hacia adelante
    printf("%c",palabra[j]);   //escritura de caracter por caracter de atras para adelante
    
	printf("\n\n\nPulse cualquier tecla para salir...");
	getch();
	return 0;
}
