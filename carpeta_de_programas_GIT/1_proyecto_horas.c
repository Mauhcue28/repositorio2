#include <stdio.h>

int main()
{
	int h;

	printf("ingrese una hora en formato de 24 horas");
	scanf("%d", &h);
	if (h<12)
	{
    printf("buenos días\n");
    }
    if (h>12)
    {
    printf("buenas tardes\n");
    }
    if (h>19)
    {
    printf("buenas noches\n");
    }
    return 0; 
}
