#include <stdio.h>
#include <math.h>
int main()
{
	int n, p, po;

	printf("ingresa un numero\n");
	scanf("%i", &n);
	printf("ingresa su potencia\n");
	scanf ("%i", &p);
	po=pow(n,p);
	printf("el resultado con potencia es %i\n", po);
return 0;
}