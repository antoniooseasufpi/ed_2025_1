#ifndef LISTA_CIRCULAR_H
#define LISTA_CIRCULAR_H

typedef struct no No;

No *criarListaCircular();
No *inserirElemento(No* lista);
No *buscarElemento(No *lista, int valor);
No *inserirElementoOrdenado(No* lista);
No *removerElemento(No* lista, int valor);
void mostrarLista(No *lista);
void liberarLista(No *lista);
void mostrarElementoInicio(No *lista);
void mostrarElementoFim(No *lista);

#endif
