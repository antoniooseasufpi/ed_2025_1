#include <stdlib.h>
#include <stdio.h>
#include "lista.h"

struct no
{
    int info;
    struct no *prox;
};

No *criarLista(){
    return NULL;
}
No *inserirElementoInicio(No* lista){
    No *novo = (No *) malloc(sizeof(No));
    printf("Informe o valor :");
    scanf("%d", &novo->info);
    novo->prox = lista;
    return novo;
}
//funcao para inserir os dados no final da lista
No *inserirElementoFinal(No* lista){
    return lista;
}
// funcao para inserir os dados ordenados (crescente) na lista
No *inserirElementoOrdenado(No* lista){
    return lista;
}

No *removerElemento(No* lista, int valor){
    No *aux = lista;
    No *ant = NULL;
    while (aux != NULL && aux->info != valor)
    {
        ant = aux;
        aux = aux->prox;
    }
    if (aux == NULL)
    {
        printf("Elemento nao encontrado\n");
        return lista;
    }
    if (ant == NULL)
        lista = aux->prox;
    else
        ant->prox = aux->prox;
    free(aux);
    return lista;
}

void mostrarLista(No *lista){
    if (!lista){
        printf("Lista vazia");
    }
    else{
        No *aux = lista;
        while (aux != NULL)
        {
            printf("Valor %d \n", aux->info);
            aux = aux->prox;
        }
    }
}
