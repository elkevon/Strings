/*1) Permitir que el usuario ingrese una palabra de hasta 20 letras. Mostrar en pantalla cuántas letras tiene la palabra ingresada.
Por ejemplo "CASA" debe indicar 4 letras.
*/

#include <stdio.h>
 
int main()
{
	char palabra[21];   //declaracion de variables locales
	int i=0;

	printf("Conteo de letras en una palabra\n\n\n");
	printf("Ingresar palabra de 20 letras max.: ");
	gets(palabra);   //guardado del string

	for(i=0;i<21 && palabra[i]!='\0';i++);   //Sumatoria de i recoriendo la palabra 
	printf("\nLa palabra %s tiene %d letras",palabra,i);  //Escritura de la cantidad de letras 
	printf("\n\n\nPulse cualquier tecla para salir...");
	getchar();
	return 0;
}