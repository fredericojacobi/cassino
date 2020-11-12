
#include <stdio.h>
#include <string.h>
#include "jogador.h"

typedef struct jogador {
    char nome[20];
    int saldo;
};

void registrar(struct Jogador *jogador1){
    printf("Insira seu nome:");
    scanf("%c", &jogador1->nome);
    printf("%c", jogador1->nome);

};
