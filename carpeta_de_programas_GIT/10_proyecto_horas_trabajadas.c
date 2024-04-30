#include <stdio.h>

int main()
{
	int pago, h, salario;
printf ("ingrese su pago por hora\n");
scanf ("%i", &pago);
printf ("ingrese sus horas trabajadas\n");
scanf ("%i", &h);
if (h<=40)
{
	salario=pago*h;
	printf("su salario es de $:%i\n", salario);
}
if (h<50 , h>40)
{
	salario= pago * h + 0.50;
    printf("su salario es de $:%i\n", salario);bb
}
if (h>=50)
{
	salario=(pago*h)*2;
	printf("su salario es de $:%i\n", salario);
}
 
  return 0;
}