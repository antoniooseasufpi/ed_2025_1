// ponto.c
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "ponto.h"

struct Ponto {
    float x;
    float y;
};

Ponto* cria_ponto(float x, float y) {
    Ponto* p = (Ponto*) malloc(sizeof(Ponto));
    if (p != NULL) {
        p->x = x;
        p->y = y;
    }
    return p;
}

void move_ponto(Ponto* p, float dx, float dy) {
    if (p != NULL) {
        p->x += dx;
        p->y += dy;
    }
}

float distancia(Ponto* p1, Ponto* p2) {
    if (p1 == NULL || p2 == NULL) return -1;
    float dx = p1->x - p2->x;
    float dy = p1->y - p2->y;
    return sqrt(dx * dx + dy * dy);
}

void imprime_ponto(Ponto* p) {
    if (p != NULL)
        printf("Ponto: (%.2f, %.2f)\n", p->x, p->y);
}

void libera_ponto(Ponto* p) {
    free(p);
}
