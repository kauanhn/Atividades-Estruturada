#include <stdio.h>

int main ()
{

    int num1,num2;

	printf("Digite o primeiro  numero: ");
	scanf("%d", &num1 );
	printf("Digite o segundo  numero: ");
	scanf("%d", &num2 );


	if (num1>num2)
	{
		printf("o primeiro numero eh maior");
	}
	else if (num1<num2)
	{	
		printf("o segundo numero eh maior");
	}
	else
	{
		printf("Os numeros sao iguais");
	}

    return 0;
}
