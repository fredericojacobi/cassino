#include <stdlib.h>
#include <stdio.h>
#include "../menu/menu.h"
#include "../jogador/jogador.h"

void rodarroleta() {
    while (getchar() != '\n');
}

int roleta(int saldo) {
    char resposta;
    int numero = 1;
    int aposta;

    printf("Olá, fulano, informe quanto você quer apostar: ");
    scanf("%i", &aposta);
    if (aposta <= 0) {
        printf("Aposta mínima é de $1");
        roleta(saldo);
    } else {
        printf("Saldo excedido.");
        menu(saldo);
    }

    rodarroleta();
    do {
        if (numero % 2 == 0) {
            printf("\nVocê acertou um número par, venceu, e tem direito a uma nova jogada... \n");
            saldo += aposta;
            printf("Saldo atual: %d", saldo);
            printf("Deseja jogar novamente? (s/n)");
            scanf("%c", &resposta);
            checarResposta(resposta, saldo);
        }
        numero = 1 + rand() % 35;
        if (numero == 7) {
            printf("\nVOCÊ GANHOU O MAIOR PRÊMIO!, acertou o número %d\n", numero);
            saldo = aposta * 10;
            printf("Deseja jogar novamente? (s/n)");
            scanf("%c", &resposta);
            checarResposta(resposta, saldo);
        } else {
            printf("Você tirou o número %d e perdeu!\n", numero);
            printf("Jogar novamente? (s/n)\n");
            scanf("%c", &resposta);
            checarResposta(resposta, saldo);
        }
    } while (numero % 2 == 0 && saldo > 0);
    printf("\n\nFIM\n\n");
}
