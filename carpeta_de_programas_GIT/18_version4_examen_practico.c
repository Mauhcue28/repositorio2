#include <stdio.h>
#include <string.h>
//version4 examen practico 13 05 2024.
int main()
{
	int i;
    char contr[20], nom[20];
    do {
     printf("\ningrese su nombre\n");
    scanf("%s", &nom);
    printf("\ningrese su contraseña\n");
    scanf("%s", &contr);
	if (strcmp(nom, "Mauricio") == 0 && strcmp(contr, "2bmpg7") == 0) 
	{
	printf("bienvenido al sistema\n");
	break;
	int precio, cantidad, total;
	do {
		printf("introduzca el precio del articulo\n");
		scanf("%d", &precio);
		printf("introduzca la cantidad del articulo\n");
		scanf("%d", &cantidad);

		if (precio> 0 && cantidad>0) {
			total= total + precio * cantidad;
			printf("desea agregar otro articulo\n");
			int r;
			scanf("%d", &r);
			if (respuesta == 0){
				break;
			} else {
				printf("precio o cantidad invalidos, intentelo denuevo.\n")
			}
			} 
		}while (precio > 0 && cantidad > 0);
	} 
	printf("el importe total de la factura es: %d\n", total);

	} else {
		printf("aceso denengado\n");
   }
} while (i < 3);
if(i==3);
{
printf("\nmayoria de intentos aceso denengado\n");
}

   return 0;
}