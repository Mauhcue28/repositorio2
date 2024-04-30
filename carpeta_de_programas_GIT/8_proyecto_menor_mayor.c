#include <stdio.h>

int main()
{
int n1, n2, n3;

printf ("ingrese 3 digitos");
scanf("%i  %i  %i", &n1, &n2, &n3);
if(n1<n2)
{
if (n1<n3)
{
if (n2<n3)
{printf("Los valores ordenados de menor a mayor son: %d %d %d\n\n", n1,n2,n3);}
else
{printf("Los valores ordenados de menor a mayor son: %d %d %d\n\n", n1,n3,n2);}
}
else
{printf("Los valores ordenados de menor a mayor son: %d %d %d\n\n", n3,n1,n2);}
}
else
{
if (n1<n3)
{printf("Los valores ordenados de menor a mayor son: %d %d %d\n\n", n2,n1,n3);}
else
{if (n3<n2)
{printf("Los valores ordenados de menor a mayor son: %d %d %d\n\n", n3,n2,n1);}
else
{printf("Los valores ordenados de menor a mayor son: %d %d %d\n\n", n2,n3,n1);}}
}
return 0;
}