#ifndef LISTA_H
#define LISTA_H

typedef struct no No;

No *criarLista();
No *inserirElementoInicio(No* lista);
No *inserirElementoFinal(No* lista);
No *inserirElementoOrdenado(No* lista);
No *removerElemento(No* lista, int valor);
void liberarLista(No *lista);
No *buscarElemento(No *lista, int valor);
void mostrarLista(No *lista);

#endif
