#include <stdio.h>
#include "ponto.h"

int main() {
    //exemplo usando vetores

    Ponto* pontos[3];
    pontos[0] = cria_ponto(1.0, 2.0);
    pontos[1] = cria_ponto(3.0, 4.0);
    pontos[2] = cria_ponto(5.0, 6.0);
    for (int i = 0; i < 3; i++) {
        imprime_ponto(pontos[i]);
    }
    printf("Distância entre ponto 1 e ponto 2: %.2f\n", distancia(pontos[0], pontos[1]));
    printf("Distância entre ponto 2 e ponto 3: %.2f\n", distancia(pontos[1], pontos[2]));
    printf("Distância entre ponto 1 e ponto 3: %.2f\n", distancia(pontos[0], pontos[2]));
    move_ponto(pontos[0], 1.0, 1.0);
    printf("Após mover ponto 1:\n");
    imprime_ponto(pontos[0]);
    printf("Distância entre ponto 1 e ponto 2: %.2f\n", distancia(pontos[0], pontos[1]));
    printf("Distância entre ponto 2 e ponto 3: %.2f\n", distancia(pontos[1], pontos[2]));
    printf("Distância entre ponto 1 e ponto 3: %.2f\n", distancia(pontos[0], pontos[2]));
    for (int i = 0; i < 3; i++) {
        libera_ponto(pontos[i]);
    }


    
    // Ponto* p1 = cria_ponto(1.0, 2.0);
    // Ponto* p2 = cria_ponto(4.0, 6.0);

    // imprime_ponto(p1);
    // imprime_ponto(p2);

    // float d = distancia(p1, p2);
    // printf("Distância entre os pontos: %.2f\n", d);

    // move_ponto(p1, 1.0, -1.0);
    // imprime_ponto(p1);

    // libera_ponto(p1);
    // libera_ponto(p2);

    return 0;
}
