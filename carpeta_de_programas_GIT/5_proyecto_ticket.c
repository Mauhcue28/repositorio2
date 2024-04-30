#include <stdio.h>

#define pr 70

int main()
{
	int pr, edad, pres60;
     
     printf("el precio de un ticket de cine vale $:%i",pr);
     printf("ingrese su edad para darle un descuento");
     scanf("%i", &edad);
     if (edad<=5)
     {
     pres60=(pr*0.60);
     printf("su precio con descuento de %60 es de:%i", pres60);
     }
     else (edad>=60)
     {
     pres60=(pr*0.55);
     printf("su precio con descuento de %55 es de:%i", pres60);
     }
     printf("gracias por venir, disfrute de su película");
     return 0;
}