#include <stdio.h>
#include <stdlib.h>
#include "fogefoge.h"
#include "mapa.h"

MAPA m;
POSICAO posicaoHeroi;
POSICAO posicaoFantasma[2];

int x;

int main()
{
    leMapa(&m);
    encontraMapa(&m, &posicaoHeroi, HEROI);
    // encontraFantasmas(&m, posicaoFantasma);

    while (!acabou())
    {
        imprimeMapa(&m);

        char comando;
        scanf(" %c", &comando);
        move(comando);
    }

    liberaMapa(&m);
}

void fantasmas()
{

}

void move(char direcao)
{
    POSICAO proximo;
    proximo.x = posicaoHeroi.x;
    proximo.y = posicaoHeroi.y;

    switch (direcao)
    {
    case ESQUERDA:
        proximo.y--;
        break;
    case CIMA:
        proximo.x--;
        break;
    case BAIXO:
        proximo.x++;
        break;
    case DIREITA:
        proximo.y++;
        break;
    default:
        break;
    }

    andaNoMapa(&m, &posicaoHeroi, proximo, HEROI);
}

int acabou()
{
    return 0;
}
