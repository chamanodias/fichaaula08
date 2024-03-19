#include <stdio.h>

void numnat(int n) {
    if (n >= 0) {
        printf("%d ", n); 
        numnat(n - 1); 
    }
}
int main() {
    int n;
    printf("Digite um número: ");
    scanf("%d", &n);

    if (n < 0)
        printf("número negativo nn pode\n");
    else {
        numnat(n);
    }

    return 0;
}

