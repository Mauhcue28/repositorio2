#include <stdio.h>
int main()
{
	int n, c, a;
	printf ("introduzca un numero\n");
	scanf("%i", &n);
	while (n != 0)
	{
	printf ("su numero es:%i\n", n);
	printf ("introduzca un numero\n");
	scanf ("%i", &n);
	c=c + 1;
	a=a + n;
	}
	printf ("Finalizado: se ha introducido 0\n");
	printf ("numeros ingresados: %i\n", c);
	printf ("suma de numeros:%i\n", a);

	return 0;
}