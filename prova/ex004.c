#include <stdio.h>

int main() {
    char sexo, resp;
    int idade, cabelo, TotH18 = 0, TotM25 = 0;

    do {
        printf("==========================\n");
        printf("    SELETOR DE PESSOAS    \n");
        printf("==========================\n");
        printf("Qual o Sexo? [M/F] ");
        scanf(" %c", &sexo);
        printf("Qual a idade? ");
        scanf("%d", &idade);
        printf("---------------------\n");
        printf("[1] Preto\n");
        printf("[2] Castanho\n");
        printf("[3] Loiro\n");
        printf("[4] Ruivo\n");
        printf("Qual a cor do Cabelo? ");
        scanf("%d", &cabelo);
        if (sexo == 'M' && idade > 18 && cabelo == 2) {
            TotH18++;
        }
        if (sexo == 'F' && idade >= 25 && idade <= 30 && cabelo == 3) {
            TotM25++;
        }
        printf("Quer continuar? [S/N] ");
        scanf(" %c", &resp);
    } while (resp == 'S' || resp == 's');

    printf("------------------------------------\n");
    printf(" RESULTADO FINAL \n");
    printf("------------------------------------\n");
    printf("Total de homens com mais de 18 e cabelos castanhos: %d\n", TotH18);
    printf("Total de mulheres entre 25 e 30 e cabelos loiros: %d\n", TotM25);

    return 0;
}
