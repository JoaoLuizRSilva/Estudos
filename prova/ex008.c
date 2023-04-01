#include <stdio.h>
#include <string.h>
#include <ctype.h>

void cadastroGabarito(char gabarito[]) {
    printf("PASSO 1 - Cadastro de Gabarito\n");
    printf("-------------------------------\n");
    for (int c = 0; c < 5; c++) {
        printf("Questao %d: ", c + 1);
        scanf(" %c", &gabarito[c]);
    }
}

float cadastraProva(char gabarito[]) {
    char resposta[5];
    float notaFinal = 0;
    printf("RESPOSTAS DADAS\n");
    for (int c = 0; c < 5; c++) {
        printf("Questao %d: ", c + 1);
        scanf(" %c", &resposta[c]);
        if (toupper(resposta[c]) == toupper(gabarito[c])) {
            notaFinal += 2;
        }
    }
    return notaFinal;
}

int main() {
    char gabarito[5];
    char nome[3][30];
    float nota[3], s = 0, media;

    cadastroGabarito(gabarito);

    for (int a = 0; a < 3; a++) {
        system("cls"); // para windows
        printf("------------------------\n");
        printf("ALUNO %d\n", a + 1);
        printf("------------------------\n");
        printf("Nome: ");
        scanf(" %[^\n]", nome[a]);
        nota[a] = cadastraProva(gabarito);
        s += nota[a];
    }

    system("cls"); // para windows
    printf("NOTAS FINAIS\n");
    printf("-----------------------------\n");
    for (int a = 0; a < 3; a++) {
        printf("%-10s %4.1f\n", nome[a], nota[a]);
    }
    printf("-----------------------------\n");
    media = s / 3;
    printf("Media da Turma: %.1f\n", media);

    return 0;
}
