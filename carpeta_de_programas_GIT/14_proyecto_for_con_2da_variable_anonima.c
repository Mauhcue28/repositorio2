#include <stdio.h>
int main()
{
	int i,t;
	printf ("cuantos terminos quiere mostrar\n");
	scanf ("%i", &t);
	for ( i=5; i<=t*5; i= i + 5)
	{
	printf ("num:%i\n", i);
	}
	return 0;
}