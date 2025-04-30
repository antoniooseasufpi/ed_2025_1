#ifndef LISTA_H
#define LISTA_H

typedef struct no No;

No *criarLista();
No *inserirElementoInicio(No* lista);
No *inserirElementoFinal(No* lista);
No *inserirElementoOrdenado(No* lista);
void mostrarLista(No *lista);

#endif
