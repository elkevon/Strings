/*5) El usuario ingresa una palabra. Mostrar en pantalla cuántas vocales minúsculas y mayúsculas contiene.*/

#include <stdio.h>

int main () {

	char palabra[20];		//declaracion de variables
	int i,j,x=0,z=0;

	printf("Detector de vocales minusculas y mayusculas\n\n\n");
	printf("Ingresar una palabra de 20 letras max.: ");
	gets(palabra);   //guardado de palabra
	
	
	for(i=0;i<21 && palabra[i]!='\0';i++);   //conteo de letras
	 	                               
	for(j=0;j<i;j++){                  //algoritrmo de comparacion de las letras de la palabra con vocales minusculas y mayusculas
		    if(palabra[j]=='a' ||palabra[j]=='e' || palabra[j]=='i' || palabra[j]=='o' || palabra[j]=='u' ){	
		    x=x+1;	
			}
			if(palabra[j]=='A' ||palabra[j]=='E' || palabra[j]=='I' || palabra[j]=='O' || palabra[j]=='U' ){	
		    z=z+1;	
			}
		}
	
	
    if(x==0)
	printf("\nLa palabra '%s' no tiene vocales minusculas",palabra);     //Escritura de que no tiene vocales minusculas la palabra 
	
	else
	printf("\nLa palabra '%s' tiene %d vocal/es minusculas",palabra,x);       //Escritura de cuantas vocales minusculas tiene la palabra 
	
	if(z==0)
	printf("\nLa palabra '%s' no tiene vocales mayusculas",palabra);     //Escritura de que no tiene vocales mayusculas la palabra 
	
	else
	printf("\nLa palabra '%s' tiene %d vocal/es mayusculas",palabra,z);       //Escritura de cuantas vocales mayusculas tiene la palabra 
	
    
	printf("\n\n\n\n Pulse cualquier tecla para salir...");
	getch();
	return 0;
}