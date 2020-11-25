#include <stdio.h>
#include <stdlib.h>
void resgate(unsigned int saldoJogo, unsigned int saldoDolares){
        unsigned int op;
        do {
            printf("-------------  Menu de Resgate  ---------------");
            printf("-- Que tipo de resgate gostaria de realizar? --");
            printf("1 - Resgate total  ----------------------------");
            printf("2 - Resgate personalizado  --------------------");
            printf("-----------------------------------------------");
            scanf("%d",&op);

            system("cls || clear");

            switch(op){
            case 1:
                unsigned int calculo = saldoDolares + saldoJogo;
                saldoDolares = calculo;
                saldoJogo = 0;
                printf("Saldo de jogo de U$$ %d regatado com sucesso!",saldoJogo);
                printf("Saldo total de U$$ %d",saldoDolares);
                printf("Saldo de jogo zerado, redirecionando você para o menu de compra...");
                //Direciona ao menu de compra de fichas.
                break;
            case 2:
                unsigned int valorResgate;
                printf("Qual valor deseja resgatar?");
                scanf("%d",&valorResgate); //Lê valor que deseja resgatar
                unsigned int atualiza = saldoJogo - valorResgate; //Atualiza valor de jogo
                saldoJogo = atualiza;
                int atualizadaDolares = saldoDolares + valorResgate;
                saldoDolares = atualizadaDolares;
                saldoDolares += valorResgate;//Atualiza o saldo em dolares
                printf("Saldo de jogo de U$$ %d regatado com sucesso!",valorResgate);
                printf("Saldo de jogo restante de U$$ %d",saldoJogo);
                printf("Saldo total de U$$ %d",saldoDolares);
                printf("Redirecionando você para o menu de compra de fichas...");
                //Direciona ao menu de compra de fichas
                break;

            }

        }while(op);
    }
void compraFichas(unsigned int saldo){
    unsigned int op;
        do {
            printf("----------------  Menu de Compra   -----------------");
            printf("----- Que tipo de ficha gostaria de comprar? -------");
            printf("1 - Ficha de U$$ 25,00  ----------------------------");
            printf("2 - Ficha de U$$ 50,00  ----------------------------");
            printf("3 - Ficha de U$$ 75,00  ----------------------------");
            printf("4 - Ficha de U$$ 100,00  ---------------------------");
            printf("5 - Ficha de U$$ 125,00  ---------------------------");
            printf("6 - Ficha de U$$ 150,00  ---------------------------");
            printf("7 - Ficha de U$$ 175,00  ---------------------------");
            printf("8 - Ficha de U$$ 200,00  ---------------------------");
            printf("9 - Encerrar compra e voltar ao menu principal  ----");
            printf("----------------------------------------------------");
            scanf("%d",&op);

            system("cls || clear");

            switch(op){
            case 1:
                if(saldo >= 25){
                    int temp = saldo;
                    saldo = temp - 25;
                    printf("Compra efetuada com sucesso.");
                    int opcoes;
                    do{
                        printf("Deseja comprar novamente?")
                        printf("1 - Sim");
                        printf("2 - Não");
                        scanf("%d",&opcoes);

                        switch(opcoes){
                        case 1:
                            compraFichas(saldo);
                            break;
                        case 2:
                            //Volta ao menu de jogo com o saldo atualizado
                            break;
                        }
                    }

                    printf("Deseja comprar novamente? ");

                }
                break;
            case 2:

                break;
            case 3:

                break;
            case 4:

                break;
            case 5:

                break;
            case 6:

                break;
            case 7:

                break;
            case 8:

                break;
            case 9:

                break;
            }

        }while(op);
}
int main(){
    int saldoTemp = 500;
    int saldoFinal = 250;

    resgate(saldoTemp, saldoFinal);

    return 0;
}

