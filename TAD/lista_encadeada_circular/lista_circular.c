#include <stdlib.h>
#include <stdio.h>
#include "lista_circular.h"

struct no
{
    int info;
    struct no *prox;
};

No *criarListaCircular(){
    return NULL;
}

// inserir elemento no inicio da lista circular 
No *inserirElementoInicio(No* lista){
    No *novo = (No *) malloc(sizeof(No));
    printf("Informe o valor: ");
    scanf("%d", &novo->info);
    if (lista == NULL) {
        novo->prox = novo;
        return novo;
    } else {
        No *aux = lista;
        while (aux->prox != lista) {
            aux = aux->prox;
        }
        aux->prox = novo;
        novo->prox = lista;
        return novo;
    }
}