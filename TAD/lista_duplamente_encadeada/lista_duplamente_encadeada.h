#ifndef LISTA_DUPLAMENTE_ENCADEADA_H
#define LISTA_DUPLAMENTE_ENCADEADA_H

typedef struct no No;

No *criarLista();
No *inserirElementoInicio(No* lista);
No * inserirElementoFinal(No* lista);
No *inserirElementoOrdenado(No* lista);
No *removerElemento(No* lista, int valor);
No *buscarElemento(No* lista, int valor);
No *buscarElementoComVizinhos(No* lista, int valor); // funcao para buscar o elemento na lista e mostrar os vizinhos caso o elemento exista, isto é, anterior e o proximo
void mostrarLista(No *lista);
void liberarLista(No *lista);

#endif