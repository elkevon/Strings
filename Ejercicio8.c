/*8) El usuario ingresará nombres de personas hasta que ingrese la palabra "FIN". No sabemos cuántos nombres ingresará.
Luego de finalizar el ingreso, mostrar en pantalla cuál es el primer nombre en orden alfabético de todos los ingresados.*/

#include <stdio.h>
#include <string.h>

int main () {
	
	int i=1;
	char nombre1[50];  //declaracion de variables locales
	char nombre2[50];
	char detector[5]= "FIN\n";
	
	printf("Ingresar una lista de nombres hasta ingresar 'FIN'. Luego, mostrar el primer nombre alfabeticamente\n\n\n");

	printf("Nombre %d: ",i);
	fgets(nombre1,50,stdin); 	//guardado de nombre1
	i++;
    
	if(strcmp(nombre1,detector) == 0){       //en el caso de que al principio ingrese 'FIN' no puedo ingresar ningun nombre
		printf("\nNo se ingreso ningun nombre");    
		goto A;
	}
    		
	while(1){                                        
	
		printf("Nombre %d: ",i);
		fgets(nombre2,50,stdin);		//guardado de nombre2
		i++;
		
		if(strcmp(nombre2,detector) == 0)     //compara si el texto ingresado es 'FIN' para terminar la lista de nombres
		break;
			
        if(strcmp (nombre1, nombre2) > 0 )    //ordena alfabeticamente los nombres
			strcpy (nombre1, nombre2);        //guarda el primer nombre alfabeticamente		
			
	}
	
	
	printf("\nEl primer nombre en orden alfabetico de todos los ingresados es: %s", nombre1);      //escribe el primer nombre alfabeticamente
		
	A:
	printf("\n\n\n\n Pulse cualquier tecla para salir...");
	getch();
	return 0;
}