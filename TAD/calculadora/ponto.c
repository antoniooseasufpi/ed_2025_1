#include <stdlib.h>
#include <stdio.h>

#include "ponto.h"

struct ponto{
    int x, y;
};
Ponto* criarPonto(int x, int y){
    Ponto *p1 = (Ponto *) malloc(sizeof(Ponto));
    p1->x = x;
    p1->y = y;
    return p1;
}

void printPonto(Ponto *p){
    printf("X -> %d ", p->x);
    printf("Y -> %d ", p->y);
}

