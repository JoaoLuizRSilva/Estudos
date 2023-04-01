#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
   float m, a, imc;
   printf("Massa (Kg): ");
   scanf("%f", &m);
   printf("Altura (m): ");
   scanf("%f", &a);
   imc = m / pow(a, 2);
   printf("IMC: %.2f\n", imc);
   if (imc < 17) {
      printf("Muito abaixo do Peso\n");
   } else if (imc >= 17 && imc < 18.5) {
      printf("Abaixo do Peso\n");
   } else if (imc >= 18.5 && imc < 25) {
      printf("Peso ideal\n");
   } else if (imc >= 25 && imc < 30) {
      printf("Sobrepeso\n");
   } else if (imc >= 30 && imc < 35) {
      printf("Obesidade\n");
   } else if (imc >= 35 && imc < 40) {
      printf("Obesidade Severa\n");
   } else {
      printf("Obesidade Morbida\n");
   }
   return 0;
}
