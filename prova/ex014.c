# include <stdio.h>

int main(){
    float peso, altura, imc;

    printf("Peso: ");
    scanf("%f", &peso);
    printf("Altura: ");
    scanf("%f", &altura);

    imc = peso / (altura*altura);

    printf("Seu imc e de %.2f\n", imc);

    if (imc< 18.5){
        printf("Voce esta abaixo do seu peso ideal.\n");
    }else if (imc <= 24.9){
        printf("Voce esta no seu peso ideal.\n");
    }else if (imc <= 29.9){
        printf("Voce esta acima do peso.\n");
    } else{
        printf("Voce esta obeso.\n");
    }

    return 0;
}
