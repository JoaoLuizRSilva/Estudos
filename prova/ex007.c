#include <stdio.h>

int main() {
    int c = 1, n, contDiv = 0;
    printf("Digite um numero: ");
    scanf("%d", &n);
    while (c <= n) {
        if (n % c == 0) {
            contDiv++;
        }
        c++;
    }
    if (contDiv > 2) {
        printf("O valor %d nao e primo!\n", n);
    } else {
        printf("O valor %d e primo!\n", n);
    }
    return 0;
}
