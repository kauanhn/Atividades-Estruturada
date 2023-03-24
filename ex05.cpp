#include <stdio.h>
#include <math.h>

int main() {
    float num;

    printf("Digite o numero: ");
    scanf("%f", &num);

    if (num > 0) {
        printf("O numero ao quadrado eh: %.2f\n", num * num);
        printf("A raiz quadrada do numero eh: %.2f\n", sqrt(num));
    } else {
        printf("O numero não é positivo.\n");
    }

    return 0;
}
