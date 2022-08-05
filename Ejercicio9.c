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
    gets(palabra);
    printf("\n\nEl texto encriptado en Codigo Cesar es: ");
    
    for (i=0; i<strlen(palabra); i++){
        for(j=65; j<90; j++ ){
            if(palabra[i] == j){
                z = (j+3)%26; 
                palabra[i] = z;
                printf("%c",palabra[i]);
                break;
            }
        }
    }

    //printf("\n\nEl texto encriptado en Codigo Cesar es: %s", palabra);
     
    printf("\n\n\n\n Pulse cualquier tecla para salir...");
	getch();
	return 0;
}