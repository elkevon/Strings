/*3) El usuario ingresa dos strings. Mostrar en pantalla si son iguales o no, es decir,
si tienen las mismas letras en las mismas posiciones.*/

#include <stdio.h>

int main () {

	char palabra1[100];		//declaracion de variables locales
	char palabra2[100];  
	int i,j,x=0;
	
	printf("Comparacion de palabras/frases\n\n\n");
	printf("Ingresar la primera palabra/frase de 100 caracteres max.: ");
	scanf("%[^\n]", &palabra1);   //guardado de palabra1
	fflush(stdin);  //Limpio la memoria
	printf("Ingresar la segunda palabra/frase de 100 caracteres max.: ");
	scanf("%[^\n]", &palabra2);   //guardado de palabra2
	
	for(i=0;i<101 && palabra1[i]!='\0';i++);   //conteo de letras de la palabra1
	for(j=0;j<101 && palabra2[j]!='\0';j++);   //conteo de letras de la palabra2
	
	if(i==j){                                  //comparacion de los caracteres si son iguales y en las mismas posisiones 
		
		for(i=0;i<j;i++){
		    if(palabra1[i]==palabra2[i]){	
		    x=x+1;	
			}
		}
	}
	
	else
	printf("\n\nLas palabras/frases son diferentes");     //Escritura de si son diferentes strings
	
	if(x==j)
	printf("\n\nLas palabras/frases son iguales");       //Escritura de si son strings iguales
    
	printf("\n\n\n Pulse cualquier tecla para salir...");
	getch();
	return 0;
}