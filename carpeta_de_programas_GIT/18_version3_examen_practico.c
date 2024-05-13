#include <stdio.h>
//version3 examen practico 13 05 2024.
int main()
{
    
	{
	printf("bienvenido al sistema\n");
  int n, c, a, s, p;
  printf ("introduzca un numero de sillas\n");
	scanf("%i", &n);
	while (n != 0)
	{
	printf ("su numero es:%i\n", n);
	printf ("introduzca un numero\n");
	scanf ("%i", &n);
	printf("introduzca el precio");
	scanf("%i", &p);
	c=c + 1;
	a=a + n;
	s=s*n;
	}
	printf ("Finalizado: se ha introducido 0\n");
	printf ("veces vendidas: %i\n", c);
	printf ("suma de numeros de sillas:%i\n", a);
	printf("vendio un total de $:%i\n", s ,"sillas");
	} 

}
printf("\nmayoria de intentos aceso denengado\n");

   return 0;
}