#define HEROI '@'
#define VAZIO '.'

typedef struct mapa MAPA;
typedef struct posicao POSICAO;

void andaNoMapa(MAPA *m, POSICAO *origem, POSICAO destino, char personagem);
void encontraMapa(MAPA *m, POSICAO *p, char c);
void encontraFantasmas(MAPA *m, POSICAO *p);
void imprimeMapa(MAPA *m);
void alocaMapa(MAPA *m);
void liberaMapa(MAPA *m);
void leMapa(MAPA *m);
struct mapa
{
    char **matriz;
    int linhas;
    int colunas;
};

struct posicao
{
    int x;
    int y;
};
