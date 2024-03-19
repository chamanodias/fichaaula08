#include <stdio.h>

void numnat(int n) {
    if (n >= 0) {
        numnat(n - 1); 
        printf("%d ", n); 
    }
}
int main() {
    int n;
    printf("Digite um número inteiro N: ");
    scanf("%d", &n);
    if (n < 0)
        printf("Número negativo não pode.\n");
    else {
        numnat(n);
    }
    return 0;
}
