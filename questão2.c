#include <stdio.h>

int fatorial(int n) {
    if (n == 0)
        return 1;
    else
        return n * fatorial(n - 1);
}

int main() {
    int numero;
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    if (numero < 0)
        printf("número negativo.\n");
    else
        printf("fatorial de %d é: %d\n", numero, fatorial(numero));

    return 0;
}
