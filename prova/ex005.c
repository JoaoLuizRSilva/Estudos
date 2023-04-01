#include <stdio.h>

int quantidadeDeDigitosDeUmInteiro(int n)
{
  int i, r = 0;
  if (n == 0) return 1; // Se o número é o zero, há apenas um dígito.
  else while (n != 0)
       {                //Caso contrário,
         n = n / 10;    //verificamos por quantas vezes conseguimos dividir o número por 10.
         r = r + 1;     //Cada divisão consome um dígito do número.
       }
  return r;
}

int digitoDeUmInteiro(int n, int pos)
{
  int i;
  int digito, tam = quantidadeDeDigitosDeUmInteiro(n); //Determinando a quantidade de dígitos que existem no número
  //As posições dos dígitos do número começam em zero e vão até a quantidade de dígitos presentes nesse número, subtraída de uma unidade.
  if (pos >= tam) return -1; //Assim, basta tentar descobrir um digito na posição igual ao tamanho do número para a função retornar um erro. O valor -1 indica esse erro.
  else
  {
    for (i = 0; i <= pos; i++)
    {
      digito = n % 10; //Ao calcularmos o resto da divisão de um número por 10, estamos o seu dígito menos significativo.
      n = n /10; //Ao dividir o número por 10, passamos a trabalhar com um número menor, sem aquele menor dígito significativo descoberto no passo anterior.
    }
    return digito;
  }
}

int numeroEspelhado(int num)
{
  int i, digito1, digito2, tam = quantidadeDeDigitosDeUmInteiro(num);
  for (i = 0; i < tam/2; i++)
  {
    digito1 = digitoDeUmInteiro(num, i);
    digito2 = digitoDeUmInteiro(num, tam-i-1);
    if ( digito1 != digito2 ) return 0;
  }

  return 1;
}

int main()
{
  int i, inicio, fim;

  printf("Este programa imprimie uma lista de numeros espelhados compreendidos\n");
  printf("dentro de um intervalo estabelecido pelo usuario...\n\n");

  printf("Indique o limite INICIAL dos numeros que serao testados: ");
  scanf("%d", &inicio);

  printf("Indique o limite FINAL dos numeros que serao testados: ");
  scanf("%d", &fim);

  printf("\nIMPRESSAO DOS NUMEROS ESPELHADOS:\n");
  if (inicio < fim)
  {
    for (i = inicio; i <= fim; i++)
      if (numeroEspelhado(i)) printf("%d\n", i);
  }
  else for (i = inicio; i >= fim; i--)
      if (numeroEspelhado(i)) printf("%d\n", i);

  return 0;
}
