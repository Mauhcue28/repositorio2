#include <stdio.h>
#include <math.h>
int main()
{
	int r, a, b, B, h;

	printf ("CALCULO DE AREAS\n");
	printf("===================================\n");
	printf("1.-Calcular el area de un triangulo\n");
	printf("2.-Calcular el areas de un trapecio\n");
	printf("3.-Calcular el area de un rectangulo\n");
    printf ("¿Que area desea calcular?\n");
    scanf ("%i", &r);
if (r==1)
{
	printf ("ingrese la base del triangulo\n");
	scanf ("%i", &b);
	printf ("ingrese la altura del triangulo\n");
	scanf ("%i", &h);
	a=b*h/2;
	
}
else if (r==2)
{
	printf ("ingrese la base menor del trapecio\n");
	scanf ("%i", &b);
	printf ("ingrese la base mayor del trapecio\n");
	scanf ("%i", &B);
	printf("ingresa la altura del trapecio\n");
	scanf ("%i", &h);
	a=B+b/2*h;
}
else 
{
	printf ("ingrese la base del rectangulo\n");
	scanf ("%i", &b);
	printf ("ingrese la altura del rectangulo\n");
	scanf ("%i", &h);
	a=b*h;
	
}
printf ("el area de la figura es:%i\n", a);

  return 0;
}