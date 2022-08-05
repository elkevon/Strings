/*4) El usuario ingresa una palabra. Mostrar en pantalla cuántas letras A minúsculas contiene.*/

#include <stdio.h>

int main () {

	char palabra[20];		//declaracion de variables
	int i,j,x=0;

	printf("Detector de letras A minuscula\n\n\n");
	printf("Ingresar una palabra de 20 letras max.: ");
	gets(palabra);   //guardado de palabra
	
	
	for(i=0;i<21 && palabra[i]!='\0';i++);   //conteo de letras
	 	                               
	for(j=0;j<i;j++){                  //algoritrmo de comparacion de las letras de la palabra con 'a'
		    if(palabra[j]=='a'){	
		    x=x+1;	
			}
		}
	
	
    if(x==0)
	printf("\nLa palabra '%s' no tiene letras A minuscula",palabra);     //Escritura de que no tiene 'a' la palabra 
	
	else
	printf("\nLa palabra '%s' tiene %d letra/s A minuscula",palabra,x);       //Escritura de cuantas 'a' tiene la palabra 
    
	printf("\n\n\n\n Pulse cualquier tecla para salir...");
	getch();
	return 0;
}