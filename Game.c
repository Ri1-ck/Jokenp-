#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

int escolhaPLayer, escolhaBot;
srand(time(0));

printf("Jogo de Jokenpô\n");

printf("Escolha uma Opção:\n");
printf("1- Pedra\n");
printf("2- Papel\n");
printf("3- Tesoura\n");
printf("Escolha: ");
scanf("%d", &escolhaPLayer);


escolhaBot = rand() % 3 + 1;

switch (escolhaPLayer)
{
    case 1:
    printf("Jogador: Pedra - ");
    break;

    case 2:
    printf("Jogador: Papel - ");
    break;

    case 3:
    printf("Jogador: Tesoura - ");
    break;

    default:
    printf("Opção invalida!\n");
    break;
}

switch (escolhaBot)
{
    case 1:
    printf("Computador: Pedra\n");
    break;

    case 2:
    printf("Computador: Papel\n");
    break;

    case 3:
    printf("Computador: Tesoura\n");
    break;

}

if (escolhaBot == escolhaPLayer)
{
    printf("### Jogo empatou!! ###");
}   else if ((escolhaPLayer == 1) && (escolhaBot == 3) || (escolhaPLayer == 2) && (escolhaBot == 1) || (escolhaPLayer == 3) && (escolhaBot == 2))
{
    printf("### PARABENS!!!! VOCE GANHOU !!!! ###");
} else{
    printf(" ### VOCE PERDEU!! ###");
}


    return 0;
}
