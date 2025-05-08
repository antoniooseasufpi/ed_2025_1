#include <stdio.h>
#include <stdlib.h>
#include "lista_duplamente_encadeada.h"

struct no {
    int valor;
    struct no *proximo;
    struct no *anterior;
};


No *criarLista(){
    return NULL;
}

No *inserirElementoInicio(No* lista){
    No *novo = (No *) malloc(sizeof(No));
    printf("Informe o valor :");
    scanf("%d", &novo->valor);
    novo->proximo = lista;
    novo->anterior = NULL;
    if (lista != NULL) {
        lista->anterior = novo;
    }
    return novo;
}

No *inserirElementoFinal(No* lista){
    No *novo = (No *) malloc(sizeof(No));
    printf("Informe o valor :");
    scanf("%d", &novo->valor);
    novo->proximo = NULL;
    novo->anterior = NULL;

    if (lista == NULL) {
        return novo;
    }

    No *atual = lista;
    while (atual->proximo != NULL) {
        atual = atual->proximo;
    }
    atual->proximo = novo;
    novo->anterior = atual;

    return lista;
}
