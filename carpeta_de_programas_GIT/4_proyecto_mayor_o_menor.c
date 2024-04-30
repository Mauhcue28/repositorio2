#include <stdio.h>

int main()
{
	int num1,num2;

	printf("ingrese dos numeros");
	scanf("%d",&num1);
	scanf("%d",&num2);
	if (num1<num2)
	{
	printf("es mayor que:%d\n",num1);
    }
	if (num1==num2)
	{
	printf("son iguales");
	}

	if (num1>num2)
	{
	printf("es mayor que:%d\n",num2);
	}
	
	return 0;
}