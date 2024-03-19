#include <stdio.h>
int soma(int n) {
    if (n == 1) {
        return 1;
    }
    
    else {
        return n + soma(n - 1);
    }
}
int main() {
    int num, resultado;
    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    resultado = soma(num);
    printf("A soma dos números de 1 até %d é: %d\n", num, resultado);

    return 0;
}
