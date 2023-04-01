#include <stdio.h>

int quantidadeDeDigitosDeUmInteiro(int n)
{
  int i, r = 0;
  if (n == 0) return 1; // Se o n�mero � o zero, h� apenas um d�gito.
  else while (n != 0)
       {                //Caso contr�rio,
         n = n / 10;    //verificamos por quantas vezes conseguimos dividir o n�mero por 10.
         r = r + 1;     //Cada divis�o consome um d�gito do n�mero.
       }
  return r;
}

int digitoDeUmInteiro(int n, int pos)
{
  int i;
  int digito, tam = quantidadeDeDigitosDeUmInteiro(n); //Determinando a quantidade de d�gitos que existem no n�mero
  //As posi��es dos d�gitos do n�mero come�am em zero e v�o at� a quantidade de d�gitos presentes nesse n�mero, subtra�da de uma unidade.
  if (pos >= tam) return -1; //Assim, basta tentar descobrir um digito na posi��o igual ao tamanho do n�mero para a fun��o retornar um erro. O valor -1 indica esse erro.
  else
  {
    for (i = 0; i <= pos; i++)
    {
      digito = n % 10; //Ao calcularmos o resto da divis�o de um n�mero por 10, estamos o seu d�gito menos significativo.
      n = n /10; //Ao dividir o n�mero por 10, passamos a trabalhar com um n�mero menor, sem aquele menor d�gito significativo descoberto no passo anterior.
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
