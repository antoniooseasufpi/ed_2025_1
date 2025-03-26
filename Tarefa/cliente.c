#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CLIENTES 1000
#define TAM_LINHA 256

typedef struct {
    int id;
    char nome[100];
    char email[100];
    int idade;
} Cliente;

void carregarClientes(const char *nomeArquivo, Cliente clientes[], int *quantidade) {
    FILE *arquivo = fopen(nomeArquivo, "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo %s\n", nomeArquivo);
        *quantidade = 0;
        return;
    }

    char linha[TAM_LINHA];
    *quantidade = 0;

    while (fgets(linha, sizeof(linha), arquivo)) {
        if (*quantidade >= MAX_CLIENTES) {
            printf("Limite máximo de clientes atingido.\n");
            break;
        }

        linha[strcspn(linha, "\n")] = '\0';

        // Separar os dados por ";"
        char *token = strtok(linha, ";");
        if (token == NULL) continue;
        clientes[*quantidade].id = atoi(token);

        token = strtok(NULL, ";");
        if (token == NULL) continue;
        strncpy(clientes[*quantidade].nome, token, sizeof(clientes[*quantidade].nome));
        clientes[*quantidade].nome[sizeof(clientes[*quantidade].nome) - 1] = '\0';

        token = strtok(NULL, ";");
        if (token == NULL) continue;
        strncpy(clientes[*quantidade].email, token, sizeof(clientes[*quantidade].email));
        clientes[*quantidade].email[sizeof(clientes[*quantidade].email) - 1] = '\0';

        token = strtok(NULL, ";");
        if (token == NULL) continue;
        clientes[*quantidade].idade = atoi(token);

        (*quantidade)++;
    }

    fclose(arquivo);
}


// funcoes que deverao ser implementadas. Usem os parametros que acharem necessário

// 1 - buscarClientePorId() 
// 2 - imprimirCliente()
// 3 - removerCliente()
// 4 - alterarDadosCliente()
// 5 - salvar dados dos clientes() - salvar no mesmo formato que o de leitura


// metodo main para testar
int main() {
    Cliente clientes[MAX_CLIENTES];
    int quantidade;

    // chamada inicial para preencher os dados no vetor de clientes
    carregarClientes("clientes.txt", clientes, &quantidade);

    return 0;
}


