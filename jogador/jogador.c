#include <stdlib.h>
#include <stdio.h>
#include "jogador.h"

void registrar(struct Jogador *jogador) {
    printf("Insira seu nome:");
    jogador = malloc(sizeof(jogador));
    scanf("%s", jogador->nome);
    printf("%s", jogador->nome);
};

void removerJogador(int idJogador) {
    /*
     * Aguardando pela leitura do arquivo .txt
     */
}

