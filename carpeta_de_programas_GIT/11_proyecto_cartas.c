#include <stdio.h>

int main()
{
	int num;

	printf("ingrese el numero de una carta de la baraja española\n");
	scanf("%i", &num);
	if (num== 1)
	{
	printf("As\n");
	}
	else if (num== 10)
	{
	printf("Sota\n");
	}
    else if (num== 11)
	{
	printf("Caballo\n");
	}
    else if (num== 12)
	{
	printf("Rey\n");
	}
    else if (num>=2 && num<=9)
	{
	  printf("No es figura ni tampoco As\n");
	} 
	else 
	{
	   printf("Este no es número de una carta de la baraja española\n");
	}

  return 0;
}