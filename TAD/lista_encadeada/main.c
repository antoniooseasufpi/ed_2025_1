#include <stdlib.h>
#include <stdio.h>
#include "lista.h"


int main(){
    
    No *lista;
    lista = criarLista();
    lista = inserirElementoInicio(lista);
    lista = inserirElementoInicio(lista);
    lista = inserirElementoInicio(lista);
    mostrarLista(lista);
    
    return 0;
}