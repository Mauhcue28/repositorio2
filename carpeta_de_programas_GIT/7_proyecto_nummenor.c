#include <stdio.h>

int main() 
{
    int num, menor;

    printf("Ingrese 5 numeros enteros:\n");

    scanf("%d", &num);
    menor = num;

    for (int i = 1; i < 5; i++) {
        scanf("%d", &num);

        if (num < menor) {
            menor = num;
}
}

    printf("El numero menor es: %d\n", menor);

    return 0;
}