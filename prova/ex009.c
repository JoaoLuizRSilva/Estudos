#include <stdio.h>

#define MAX_LUGARES 19

void mostraFileira(char lugares[]) {
    for (int i = 0; i < 10; i++) {
        if (lugares[i] == '\0') {
            printf("[ B%02d ]", i + 1);
        } else {
            printf("[ --- ]");
        }
    }
    printf("\n");
    printf("------------------------------------------------------------------------\n");
}

int main() {
    char lugares[MAX_LUGARES] = "";
    int cadeira;
    char resposta;

    do {
        system("cls");
        mostraFileira(lugares);
        printf("Reservar a cadeira: B");
        scanf("%d", &cadeira);
        if (cadeira < 1 || cadeira > MAX_LUGARES) {
            printf("ERRO: Cadeira invalida!\n");
        } else if (lugares[cadeira - 1] == '\0') {
            lugares[cadeira - 1] = 'X';
            printf("Cadeira B%02d RESERVADA!\n", cadeira);
        } else {
            printf("ERRO: Lugar Ocupado!\n");
        }
        printf("Quer reservar outro? [S/N] ");
        scanf(" %c", &resposta);
    } while (resposta == 'S' || resposta == 's');

    return 0;
}
