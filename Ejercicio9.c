/*9) El usuario ingresará una palabra de hasta 10 letras. Se desea mostrarla en pantalla pero encriptada según el "Código César".
Esto consiste en reemplazar cada letra con la tercera consecutiva en el abecedario. Por ejemplo, "CASA" se convierte en "FDVD".
Tener en cuenta que las últimas letras deben volver al inicio, por ejemplo la Y se convierte B.
Este mecanismo se utilizaba en el Imperio Romano.*/

#include <stdio.h>
#include <string.h>

int main()
{
    char palabra[30];		// declaracion de variables locales
    int i,j,z;
	
	printf("Encriptado a Codigo Cesar\n\n\n");
	printf("Ingresar texto a encriptar: ");
    gets(palabra);    //guardado de la palabra 
    printf("\n\nEl texto encriptado en Codigo Cesar es: ");
    
    for (i=0; i<strlen(palabra); i++){   //recorro la palabra
        for(j=65; j<91; j++){
            if(palabra[i] == j){   //algoritmo de encriptacion
				z = (j+3);    
				if(z>=90){
					z=z-90;
					z=65+z;}
                printf("%c", z);  //escritura de caracteres 
                break;
            }
        }
    }

     
    printf("\n\n\n\n Pulse cualquier tecla para salir...");
    getch();
	return 0;
}