#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int numero_aleatorio, chute;

    srand(time(NULL));
    numero_aleatorio = rand() % 10;

    int *ponteiro = &numero_aleatorio;

    printf("Bem-vindo ao jogo de adivinhacao!\n");

    int chutes[10];
    int cont = 0;

    do{

        printf("Digite um numero entre 1 e 10: ");
        scanf("%d", &chute);
        chutes[cont] = chute;
        cont ++;

        if (chute < *ponteiro) {

          printf("Esta Baixo. Tente Novamente!\n");

        } else if (chute > *ponteiro) {

          printf("Esta Alto. Tente Novamente!\n");

        } else {

            printf("Parabens, voce acertou com %i tentativas, o numero sorteado foi %d\n",cont,numero_aleatorio);


            printf("Chutes Realizados: ");
            for(int c = 0;c < cont; c++) {
                printf("%d ",chutes[c]);
            }
            printf("\n");
            break;
        }

    }while(1);

      return 0;
}
