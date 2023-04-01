#include <stdio.h>

void mostraMatriz(int list[3][3]){
    system("clear || cls");
    int l, c;
    for(l=0; l<3; l++){
        for(c=0; c<3; c++){
            printf("|%d|", list[l][c]);
        }
        printf("\n");
    }
}

void diagonalPrincipal(int list[3][3], int coluna){
    system("clear || cls");
    int l, c;
    for(l=0; l<3; l++){
        for(c=0; c<3; c++){
            if(c==coluna-1){
                printf("|%d|", list[l][c]);
            }else{
                printf("|*|");
            }
        }
        printf("\n");
    }
}

void linhaPrincipal(int list[3][3], int linha){
    system("clear || cls");
    for(int l=0; l<3; l++){
        for(int c=0; c<3; c++){
            if(linha == l+1){
                printf("|%d|", list[l][c]);
            }else{
                printf("|*|");
            }
        }
        printf("\n");
    }
}

int main(){
    int list[3][3], num, op;

    for(int l=0; l<3; l++){
        for(int c=0; c<3; c++){
            printf("[%d, %d]", l+1, c+1);
            scanf("%d", &list[l][c]);
        }
    }

    do{
            printf("\n");
            printf("==========================\n");
            printf("[1] Mostrar Matriz inteira\n");
            printf("[2] Mostrar Colunas\n");
            printf("[3] Mostrar Linhas\n");
            printf("[4] Sair do Programa\n");
            do{
                printf("Escolha uma opcao: ");
                scanf("%d", &op);
            }while(op<1 || op>4);
            switch(op){
            case 1:
                mostraMatriz(list);
                break;
            case 2:
                printf("Qual coluna voce quer visualizar?");
                scanf("%d", &num);
                diagonalPrincipal(list, num);
                break;
            case 3:
                printf("Qual linha voce quer visualizar?");
                scanf("%d", &num);
                linhaPrincipal(list, num);
                break;
            case 4:
                printf("Encerrando...");
                break;
            }
    }while(op!=4);

    return 0;
}
