#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char *rua[20], bairro[20];
    int numero;
}Endereco;

typedef struct
{
    char nome[20];
    int idade;
    Endereco endereco;
}Pessoa;

typedef struct
{
    char nome_dpto[20];
    Pessoa funcionarios[2];
}Departamento;

void mostrarDadosDepato(Departamento *deptos){
    // percorrer os deptos
    for (int i = 0; i < 2; i++){
        printf("Depato: %s", deptos[i].nome_dpto);
        for (int j = 0; j < 2; j++){
            printf("\nNome do funcionario: %s", deptos[i].funcionarios[j].nome);
            printf("\nIdade: %d", deptos[i].funcionarios[j].idade);
            printf("\nRua: %s", deptos[i].funcionarios[j].endereco.rua);
            printf("\nBairro: %s", deptos[i].funcionarios[j].endereco.bairro);
            printf("\nNumero: %d", deptos[i].funcionarios[j].endereco.numero);
        }
    }
}
int main(){
    
    Departamento deptos[2];
    for (int i = 0; i < 2; i++)
    {
        // cadastrar os nomes dos departamentos
        printf("Informe o nome do depatarmento %d", i+1);
        scanf("%s", deptos[i].nome_dpto);
        // cadastrar os funcionarios do departmaento
        for (int j = 0; j < 2; j++){
            printf("Nome do funcionario: "); scanf("%s", deptos[i].funcionarios[j].nome);
            printf("Idade: "); scanf("%d", &deptos[i].funcionarios[j].idade);
            printf("Rua: "); scanf("%s", deptos[i].funcionarios[j].endereco.rua);
            printf("Bairro: "); scanf("%s", deptos[i].funcionarios[j].endereco.bairro);
            printf("Numero: "); scanf("%d", &deptos[i].funcionarios[j].endereco.numero);
        }
    }

    printf("\n-----PRINT DADOS DO DEPTO----------");
    mostrarDadosDepato(deptos);
    return 0;
}