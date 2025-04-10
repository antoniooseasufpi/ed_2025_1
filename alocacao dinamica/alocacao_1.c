#include <stdlib.h>
#include <stdio.h>

int main(){
	int *vet, x, soma = 0;
	float m;
	
	scanf("%d", &x);
	
	// alocando memoria
	vet = (int *) malloc(sizeof(int) * x);
	
	// verificando se a alocacao deu certo
	if (!vet){
		printf("Alocacao falhou \n");
	}

	// fazendo leitura dos dados
	for (int i = 0; i < x; i++)
	{
		printf("Informe o %d valor ", i);
		scanf("%d", &vet[i]);
	}

	// Calculando a soma
	for (int i = 0; i < x; i++)
		soma += vet[i];

	// calculando e mostrando a media
	m = (float) soma / x;
	printf("%.2f \n", m);
	// print valores
	for (int i = 0; i < x; i++)
		printf("%d ", vet[i]);

	// liberar memoria
	free(vet);

	return 0;
}