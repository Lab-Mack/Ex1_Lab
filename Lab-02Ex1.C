#include <stdio.h>

int main() {
    int a, b;

    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &a);
    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &b);

    printf("Soma:            %d + %d = %d\n", a, b, a + b);
    printf("Subtracao:       %d - %d = %d\n", a, b, a - b);
    printf("Multiplicacao:   %d * %d = %d\n", a, b, a * b);

    if (b != 0)
        printf("Divisao inteira: %d / %d = %d\n", a, b, a / b);
    else
        printf("Divisao inteira: divisao por zero nao permitida.\n");

    return 0;
}
