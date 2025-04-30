// ponto.h

// include guard - impede que o conteúdo de um arquivo .h seja incluído mais de uma vez no mesmo arquivo de código durante a compilação.
#ifndef PONTO_H
#define PONTO_H

// Definição da struct como "opaco" (ou seja, não revelando sua implementação)
typedef struct Ponto Ponto;

// Funções do TAD
Ponto* cria_ponto(float x, float y);
void move_ponto(Ponto* p, float dx, float dy);
float distancia(Ponto* p1, Ponto* p2);
void imprime_ponto(Ponto* p);
void libera_ponto(Ponto* p);

#endif
