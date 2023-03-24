#include <stdlib.h>
#include <stdio.h>

int main(){
    int num;
    
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);
    
    if (num % 2 == 0) 
    {
        printf("O numero eh par");
    }
    else
	{
        printf("O numero eh impar");
	}
	
	return 0;
}
