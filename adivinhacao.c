#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUMERO_DE_TENTATIVA 5

// int main() {
//     //Imprime o cabeçalho do jogo
//     printf("\n");
//     printf("************************************\n");
//     printf("* Bem-Vindo ao Jogo da Adivinhacao *\n");
//     printf("************************************\n");
//     printf("\n");

//     int segundos = time(0);
//     srand(segundos);

//     int numerogrande = rand();

//     int numerosecreto = numerogrande % 100;
//     int chute;
//     int tentativas = 1;
//     double pontos = 1000;

//    while (1) {
        
//         printf("\n");
//         printf("Tentativa %d\n", tentativas);
//         printf("*****************\n");
//         printf("\n");

//         printf("Qual o seu chute: ");
//         scanf("%d", &chute);
//         printf("Seu chute foi %d\n", chute);
//         printf("\n");

//         if (chute < 0){
//             printf("Voce nao pode chutar numeros negativos!\n");
//             continue;
//         }

//         int acertou = chute == numerosecreto;
//         int maior = chute > numerosecreto;

//         if(acertou) {
//             printf("Parabens! Voce acertou\n");

//             break;
//         } 

//         else if (maior) {
//             printf("Seu chute e maior que o Numero Secreto\n");
//             } 
            
//         else {
//             printf("Seu chute e menor que o Numero Secreto\n");
//             }

//             tentativas++;

//             double pontosperdidos = abs(chute - numerosecreto) / (double)2;
//             pontos = pontos - pontosperdidos;
//         }
//         printf("\n");
//         printf("Fim de Jogo\n");
//         printf("Voce acertou em %d tentativa(s).\n", tentativas);
//         printf("Total de pontos: %.1f", pontos);
//     }
    
int main(){

    //imprime cabecalho do jogo
    
    printf("\n\n");
    printf("          P  /_\\  P                              \n");
    printf("         /_\\_|_|_/_\\                            \n");
    printf("     n_n | ||. .|| | n_n          Bem vindo ao    \n");
    printf("     |_|_|nnnn nnnn|_|_|      Jogo de Adivinhacao!\n");
    printf("    |" "  |  |_|  |"  " |                         \n");
    printf("    |_____| ' _ ' |_____|                         \n");
    printf("          \\__|_|__/                              \n");
    printf("\n\n");

    int segundos = time(0);
    srand(segundos);

    int numerogrande = rand();

    int numerosecreto = numerogrande % 100;
    int chute;
    int tentativas = 1;
    double pontos = 1000;

    int acertou = 0;

    int nivel;


    printf("Qual o nivel de dificuldade?\n");
    printf("(1) FACIL (2) MEDIO (3) DIFICIL\n\n");
    printf("Escolha: ");
    scanf("%d", &nivel);

    int numerodetentativas;

    switch(nivel) {
        case 1:
            numerodetentativas = 20;
            break;

        case 2:
            numerodetentativas = 15;
            break;

        default:
            numerodetentativas = 6;
            break;
    }

    for(int i = 1; i <= numerodetentativas; i++) {

        printf("Tentativa %d\n", tentativas);
        printf("Qual e o seu chute? ");

        scanf("%d", &chute);
        printf("Seu chute foi %d\n", chute);

        if(chute < 0) {
            printf("Voce não pode chutar numeros negativos!\n");
            continue;
        }

        acertou = (chute == numerosecreto);
        int maior = chute > numerosecreto;

        if(acertou){
            break;
        }

        else if(maior) {
            printf("Seu chute foi maior que o numero secreto\n");
        }

        else {
            printf("Seu chute foi menor que o numero secreto\n");
        }

        tentativas++;

        double pontosperdidos = abs(chute - numerosecreto) / (double)2;
        pontos = pontos - pontosperdidos;

    }

    printf("Fim de jogo!\n");

    if(acertou) {
        
        printf("             OOOOOOOOOOO               \n");
        printf("         OOOOOOOOOOOOOOOOOOO           \n");
        printf("      OOOOOO  OOOOOOOOO  OOOOOO        \n");
        printf("    OOOOOO      OOOOO      OOOOOO      \n");
        printf("  OOOOOOOO  #   OOOOO  #   OOOOOOOO    \n");
        printf(" OOOOOOOOOO    OOOOOOO    OOOOOOOOOO   \n");
        printf("OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO  \n");
        printf("OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO  \n");
        printf("OOOO  OOOOOOOOOOOOOOOOOOOOOOOOO  OOOO  \n");
        printf(" OOOO  OOOOOOOOOOOOOOOOOOOOOOO  OOOO   \n");
        printf("  OOOO   OOOOOOOOOOOOOOOOOOOO  OOOO    \n");
        printf("    OOOOO   OOOOOOOOOOOOOOO   OOOO     \n");
        printf("      OOOOOO   OOOOOOOOO   OOOOOO      \n");
        printf("         OOOOOO         OOOOOO         \n");
        printf("             OOOOOOOOOOOO              \n");
        printf("\n\n");

        printf("Voce acertou em %d tentativas!\n", tentativas);
        printf("Total de pontos: %.1f\n", pontos);
    } else {
        printf("Voce perdeu! Tente de novo!\n");

        printf("       \\|/ ____ \\|/    \n");
        printf("        @~/ ,. \\~@      \n");
        printf("       /_( \\__/ )_\\    \n");
        printf("          \\__U_/        \n");
    }
}