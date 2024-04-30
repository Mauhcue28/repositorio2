#include <stdio.h>

int main() 
{
    char caracter;

    printf("Ingrese un carácter: ");
    scanf("%c", &caracter);

    switch (caracter) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("El carácter ingresado es una vocal.\n");
            break;
        default:
            printf("El carácter ingresado no es una vocal.\n");
            break;
    }

    return 0;
}