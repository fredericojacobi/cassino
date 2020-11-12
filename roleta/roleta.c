#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "../menu/menu.h"
#include "../jogador/jogador.h"

typedef struct roleta {
    int numero;
    char preto, branco, vermelho;
} maquinaroleta;


void rodarroleta() {

    printf("\nPara girar a roleta, pressione ENTER\n");

    while (getchar() != '\n');

}

int roleta(int saldo) {
    char resposta;
    int numero = 1;
    int aposta;

    printf("Informe quanto voce quer apostar: ");
    scanf("%i", &aposta);
    if (aposta <= 0 || aposta >= saldo) {
        printf("Valor insuficiente");
        roleta(saldo);
    }

    rodarroleta();
    do {
        if (numero % 2 == 0) {
            printf("\nVocê acertou um número par, venceu, e tem direito a uma nova jogada... \n");
            saldo += aposta;
            printf("Saldo atual: %d", saldo);
            rodarroleta();
        }
        numero = 1 + rand() % 35;
        if (numero == 7) {
            printf("\nVOCÊ GANHOU O MAIOR PRÊMIO!, acertou o número %d\n", numero);
            printf("Deseja jogar novamente? (s/n)");
            scanf("%c", &resposta);
            if(resposta == 's')
                rodarroleta();
            else
                menu();
            saldo = aposta * 10;
        } else {
            printf("Você tirou o número %d\n", numero);
        }
    } while (numero % 2 == 0 && saldo > 0);
    printf("\n\nFIM\n\n");
}
