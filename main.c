#include "menu/menu.h"
#include "jogador/jogador.h"

int main() {
    // Mecanica do jogo: -> registrar/carregar jogador
    //                   -> executar menu
    //                   -> executar escolha do usuario

    /*
     * A funcao 'registrar' em jogador.c devera usar
     * um arquivo texto para salvar os dados do usuario
     */
    struct Jogador *jogador;
    registrar(jogador);

    /*
     * A funcao menu servira para gerenciar a mecanica do cassino
     * Comprar fichas, jogar e etc...
     */

    menu(jogador->saldo);


    return 1;
}

