#include <stdio.h>

int main()
{
    float sala, prest, porc;

    printf("Digite o valor do salario: ");
    scanf("%f", &sala);

    printf("Digite o valor da prestacao do emprestimo: ");
    scanf("%f", &prest);

    porc = (prest / sala) * 100;

    if (porc > 20) {
        printf("Emprestimo nao concedido.\n");
    }
    else {
        printf("Emprestimo concedido.\n");
    }

    return 0;
}
