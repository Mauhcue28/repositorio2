#include <stdio.h>
#include <string.h>
//version2 examen practico 13 05 2024.
int main()
{
	int i;
    char contr[20], nom[20];
    for (int i = 0; i < 3; i++) {
     printf("\ningrese su nombre\n");
    scanf("%c", &nom);
    printf("\ningrese su contraseña\n");
    scanf("%c", &contr);
	if (strcmp(nom, "Mauricio") == 0 && strcmp(contr, "2bmpg7") == 0) 
	{
	printf("bienvenido al sistema\n");
	break;
	} else {
		printf("aceso denengado\n");
}
}
if(i==3)
{
printf("\nmayoria de intentos aceso denengado\n");
}
   return 1;
}