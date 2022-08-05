/*7) El usuario ingresará 5 nombres de personas y sus edades (número entero). 
Luego de finalizar el ingreso, muestre en pantalla el nombre de la persona más joven.
El ingreso se realiza de este modo: nombre y edad de la primera persona, luego nombre y edad de la segunda, etc...
Nota: no hay que almacenar todos los nombres y todas las notas.*/

#include <stdio.h>
#include <conio.h>
#include <string.h>


int main () {
	 
	char nombre[30];     //declaracion de variables locales
	char menor[30];
	int i,edad,comparador;
	
	printf("Determinar que persona es mas joven\n\n");
	
	for(i=1;i<6;i++){
		printf("\nPersona %d\n", i);
		printf("Nombre: ");
		scanf("%s", nombre);	//guardado de nombre
		printf("Edad: ");
		scanf("%d", &edad);		//guardado de edad
		
		if(i==1)                     //para poder siempre comparar y que el primero sea el mas chico 
			comparador=edad++;    
		
		if(edad < comparador){      //algoritmo de comparacion de edades 
			comparador=edad;
			strcpy(menor,nombre);           //guardado de nombre del mas joven
		}
		
	}
	
	printf("\n\nLa persona mas joven es '%s' con una edad de %d.", menor, comparador);	 //escritura de la persona mas joven                              
    
	
	printf("\n\n\n\n Pulse cualquier tecla para salir...");
	getch();
	return 0;
}
