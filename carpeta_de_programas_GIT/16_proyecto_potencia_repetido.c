#include <stdio.h>

int main()
{
	int n, p, po=1;
	printf("ingresa un numero\n");
	scanf("%d", &n);
	printf("ingresa una potencia\n");
	scanf( "%d", &p);
	for (int i = 1 ; i <= p ; i++) {
		po*=n;	
	}
	printf("el resultado es:%d", po);
	return 0;
}