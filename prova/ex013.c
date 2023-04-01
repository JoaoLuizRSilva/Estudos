#include <stdio.h>

int main()
{
   int n, primeiro = 0, segundo = 1, proximo;

   printf("Digite o n�mero de termos da sequ�ncia de Fibonacci que deseja imprimir: ");
   scanf("%d", &n);

   printf("Sequ�ncia de Fibonacci:\n");

   for (int i = 0; i < n; i++)
   {
      if (i <= 1)
         proximo = i;
      else
      {
         proximo = primeiro + segundo;
         primeiro = segundo;
         segundo = proximo;
      }

      printf("%d ", proximo);
   }

   return 0;
}
