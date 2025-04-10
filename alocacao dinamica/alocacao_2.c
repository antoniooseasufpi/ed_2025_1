#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// srand(time(NULL));
int **alocarMatriz(int linha, int coluna){
    int **mat;
    mat = (int **) calloc(linha, sizeof(int*));
    if (!mat)
    {
        printf("Falhou");
        exit(1);
    }
    for (int i = 0; i < linha; i++)
        mat[i] = (int *) calloc(coluna, sizeof(int));

    for (int i = 0; i < linha; i++)
        for (int j = 0; j < coluna; j++)
            mat[i][j] = rand() % 256;
    return mat;
}   

int *ocorrencias(int **mat, int linha, int coluna){
    int *oco;
    oco = (int *)calloc(256 - 0, sizeof(int));
     for (int i = 0; i < linha; i++)
        for (int j = 0; j < coluna; j++)
            oco[mat[i][j]]++;
    return oco;
}

void mostrarOcorrencias(int *oco, int tamanho){
    for (int i = 0; i < tamanho; i++){
        if (oco[i] > 0)
            printf("O valor %d ocorreu %d vez(es)\n", i, oco[i]);
    }
}
void mostrarMatriz(int **mat, int linha, int coluna){
    for (int i = 0; i < linha; i++){
        for (int j = 0; j < coluna; j++)
            printf("%d ", mat[i][j]);
        printf("\n ");
    }
}   

int main(){
    int **m, *oco, linha = 10, coluna = 5;
    m = alocarMatriz(linha, coluna);
    mostrarMatriz(m, linha, coluna);
    oco = ocorrencias(m, linha, coluna);
    printf("\n");
    mostrarOcorrencias(oco, 256);
    // liberar a memeoria
    return 0;
}