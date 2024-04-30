#include <stdio.h>

int main()
{
	int num1,num2;

	printf("ingrese dos numeros");
	scanf("%d",&num1);
	scanf("%d",&num2);
	if (num1 != 0 && num1 % num2==0)
	{
	printf("la divicion es divicible");
	}
	else
    {
     printf(" la divicion no se puede divir");
	}
return 0;
}