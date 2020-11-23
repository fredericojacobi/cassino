#include <stdio.h>
#include "../roleta/roleta.h"
#include "../jogador/jogador.h"

void fichasBasico(){

}

void fichasAltas(){

}

void fichasMedio(){

}

void sacar() {

}

int sair() {
    return 0;
};

void menu(int saldo) {
    int continuar = 1;

    do {
        printf("\n\tCassino TP\n\n");
        printf("1. Pacote de fichas Basico\n");
        printf("2. Pacote de fichas Medio\n");
        printf("3. Pacote de fichas Alta\n");
        printf("4. Jogar Bingo\n");
        printf("5. Jogar Roleta\n");
        printf("6. Sacar o Saldo\n");
        printf("0. Sair\n");

        scanf("%d", &continuar);

        switch (continuar) {
            case 1:
                printf("Em desenvolvimento...");
                menu(saldo);
//                fichasBasico();

                break;

            case 2:
                printf("Em desenvolvimento...");
                menu(saldo);
//                fichasMedio();

                break;

            case 3:
                printf("Em desenvolvimento...");
                menu(saldo);
//                fichasAltas();

                break;

            case 4:
                printf("Em desenvolvimento...");
                menu(saldo);
//                bingo();

                break;

            case 5:

                roleta(saldo);

                break;
            case 6:
                printf("Em desenvolvimento...");
                menu(saldo);
//                sacar();

                break;

            case 0:

                sair();

                break;

            default:
                printf("Digite uma opcao valida\n");
        }
    } while (continuar);
}


/*
 * Utilizado para verificar a resposta do usuário para repetir a jogada
 */

int checarResposta(char resposta, int saldo) {
    if(resposta == 's') {
        roleta(saldo);
    } else if(resposta == 'n'){
        menu(saldo);
    } else {
        printf("Opção inválida");
        printf("Deseja jogar novamente?");
        checarResposta(resposta, saldo);
    }
}