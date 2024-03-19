#include <stdio.h>

int fibo(int n) {
    if (n <= 1)
        return n;
    else
        return fibo(n - 1) + fibo(n - 2);
}

int main() {
    int n;
    printf("Digite o valor de N: ");
    scanf("%d", &n);
    if (n < 0)
        printf("número negativo.\n");
    else
        printf("O tal termo da sequência de Fibonacci é: %d\n", fibo(n));
    return 0;
}
