#include <stdio.h>

int main() 
{
    char caracter;

    printf("Ingrese un carácter: ");
    scanf("%c", &caracter);

    if (caracter == 'a' || caracter == 'e' || caracter == 'i' || caracter == 'o' || caracter == 'u') {
        printf("El carácter ingresado es una vocal.\n");
    } else {
        printf("El carácter ingresado no es una vocal.\n");
    }

    return 0;
}