#include <stdio.h>
#include "menu/menu.h"
#include "jogador/jogador.h"
#include "roleta/roleta.h"

int main() {
    struct Jogador jogador;
    jogador.saldo = 100;
    menu(jogador.saldo);
    return 0;
}
