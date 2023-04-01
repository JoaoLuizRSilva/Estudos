#include <stdio.h>
#include <stdlib.h>

int main() {
   char nome[5][30];
   float nota1[5], nota2[5], media[5], SMed = 0, MTurma = 0;
   int i;

   for (i = 0; i < 5; i++) {
      printf("--------------------\n");
      printf("DADOS DO ALUNO %d\n", i+1);
      printf("--------------------\n");
      printf("Nome: ");
      scanf("%s", nome[i]);
      printf("Nota 1: ");
      scanf("%f", &nota1[i]);
      printf("Nota 2: ");
      scanf("%f", &nota2[i]);
      media[i] = (nota1[i] + nota2[i])/2;
      printf("Media: %.1f\n", media[i]);
      SMed += media[i];
   }

   // ----- HORA DE CALCULAR A SAIDA -----
   system("cls");
   MTurma = SMed / 5;
   printf("A media da turma e %.1f\n", MTurma);
   printf("-----------------------------------\n");
   printf("Alunos que ficaram acima da media\n");
   printf("-----------------------------------\n");
   for (i = 0; i < 5; i++) {
      if (media[i] > MTurma) {
         printf("%-20s %.1f\n", nome[i], media[i]);
      }
   }
   return 0;
}
