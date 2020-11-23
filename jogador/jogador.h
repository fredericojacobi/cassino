
typedef struct Jogador {
    int id;
    char nome[20];
    int saldo;
} jogador;
#ifndef CASINOV2_JOGADOR_H
#define CASINOV2_JOGADOR_H

void registrar(struct Jogador *jogador);

void removerJogador(int idJogador);

#endif //CASINOV2_JOGADOR_H
