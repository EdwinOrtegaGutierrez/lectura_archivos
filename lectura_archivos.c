#include <stdio.h>
#include <stdlib.h>

void main()
{
	FILE *ARCHIVO;
	char Fichero[20];
	char ficheros;
    	printf("Lectura de archivos existentes\n");

	printf("Archivo: ");
	scanf("%s",Fichero);

	ARCHIVO = fopen (Fichero, "r");

	if (ARCHIVO == NULL)
	{
		printf("Hubo un error al intentar abrir el archivo\n");
		exit(0);
	}

	printf(" El contenido del archivo %s es:\n",Fichero);
	ficheros = fgetc(ARCHIVO);

	while (ficheros != EOF)
		{
			printf (" %c", ficheros);
			ficheros = fgetc(ARCHIVO);
		}
 
	fclose(ARCHIVO);
    	printf("\n\n");
    
	system("pause");
}

