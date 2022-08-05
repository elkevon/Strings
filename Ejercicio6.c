/*6) El usuario ingresa una palabra. Determinar qué letra aparece mayor cantidad de veces. Para simplificar el problema, trabaje solo con mayúsculas.*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main () {

	char palabra[20];		//declaracion de variables
	int i,j,z,x,letra;
	int contador=0,comparador=0;

	printf("Determinar que letra aparece mayor cantidad de veces\n\n\n");
	printf("Ingresar una palabra de 20 letras max.: ");
	gets(palabra);   //guardado de palabra
	
	
	for(i=0;i<21 && palabra[i]!='\0';i++);   //conteo de letras
	 	                               
	for(z=65;z<=90;z++){     //Recorro todo el abecedario mediante el codigo ASCII
		
		for(j=0;j<i;j++){                  //cuento cuantas veces se repite la letra en codigo ASCII
			
			if(palabra[j] == z)
			contador++;
 	
		}
	       if(contador==0)
		   continue;
		   
	       else{
	       	
	       	for(j=0;j<i;j++){
	       			
		   		if(contador>comparador){         //algoritrmo de comparacion de las letras de la palabra con el abecedario
		   		comparador=contador;
		   		letra=z;
				}
		    }
		   	contador=0;  
		    }   
	}
	
    
    
	printf("\nLa letra '%c' es la que mas se repite: %d veces",letra,comparador);        //Escritura de la letra que mas se repite
	
	
	printf("\n\n\n\n Pulse cualquier tecla para salir...");
	getch();
	return 0;
}
