#include <stdio.h>

int main()
{
	int num;

	printf("ingrese un numero");
	scanf("%d", &num);
	if (num%2==0)
	{
	 printf("el numero es par \n" );
	if (num %3==0)
		printf("ademas es multiplo de 3\n");
	}
	else
	{
		printf("el numero es impar\n");
		if (num%3==0)
			printf("es multiplo de 3");
		return 0;
	}
}













