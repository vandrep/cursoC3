#include <stdio.h>
#include <stdlib.h>
#include "mapa.h"

void andaNoMapa(MAPA *m, POSICAO *origem, POSICAO destino, char personagem)
{
    m->matriz[origem->x][origem->y] = VAZIO;

    if (m->matriz[destino.x][destino.y] == VAZIO)
    {
        origem->x = destino.x;
        origem->y = destino.y;
    }

    m->matriz[origem->x][origem->y] = personagem;
}

void encontraFantasmas(MAPA *m, POSICAO *p)
{
    // int cont = 0;
    // for(int i = 0; i < p.; i++)
    // {
    //     /* code */
    // }
}

void encontraMapa(MAPA *m, POSICAO *p, char personagem)
{
    for (int i = 0; i < m->linhas; i++)
    {
        for (int j = 0; j < m->colunas; j++)
        {
            if (m->matriz[i][j] == personagem)
            {
                p->x = i;
                p->y = j;
                break;
            }
        }
    }
}

void liberaMapa(MAPA *m)
{
    for (int i = 0; i < m->linhas; i++)
    {
        free(m->matriz[i]);
    }
    free(m->matriz);
}

void alocaMapa(MAPA *m)
{
    m->matriz = malloc(sizeof(char *) * m->linhas);
    for (int i = 0; i < m->linhas; i++)
    {
        m->matriz[i] = malloc(sizeof(char) * (m->colunas + 1));
    }
}

void imprimeMapa(MAPA *m)
{

    for (int i = 0; i <= 4; i++)
    {
        printf("%s\n", m->matriz[i]);
    }
}

void leMapa(MAPA *m)
{
    FILE *f;
    f = fopen("mapa.txt", "r");
    if (f == 0)
    {
        printf("Erro na leitura do m.matriz\n");
        exit(1);
    }

    fscanf(f, "%d %d", &(m->linhas), &(m->colunas));

    alocaMapa(m);

    for (int i = 0; i <= m->linhas; i++)
    {
        fscanf(f, "%s", m->matriz[i]);
    }
}