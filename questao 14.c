
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void imprimirDados(float *dados, int tamanho) {
    printf("=== DADOS DOS SENSORES DE UMIDADE ===\n");
    printf("Total de leituras: %d\n\n", tamanho);
    
    float *ptr = dados;
    
    for (int i = 0; i < tamanho; i++) {
        printf("Sensor %d: %.1f%%", i + 1, *ptr);
        
      
        if ((i + 1) % 3 == 0) {
            printf("\n");
        } else {
            printf("\t");
        }
        
        ptr++;
    }
    printf("\n");
}

int main() {
    const int NUM_SENSORES = 12;
    float dadosUmidade[NUM_SENSORES];
    
    printf("=== SISTEMA DE MONITORAMENTO DE UMIDADE ===\n");
    printf("Leitura de dados de sensores usando ponteiros\n\n");
    
    srand(time(NULL));
    
    printf("=== SIMULANDO LEITURA DOS SENSORES ===\n");
    for (int i = 0; i < NUM_SENSORES; i++) {
        dadosUmidade[i] = 20 + (rand() % 76);
        printf("Lendo sensor %d: %.1f%%\n", i + 1, dadosUmidade[i]);
    }
    
    printf("\n=== PROCESSANDO DADOS COM PONTEIROS ===\n");
    
    imprimirDados(dadosUmidade, NUM_SENSORES);
    
    
    printf("\n=== DEMONSTRAÇÃO COM PONTEIROS ===\n");
    float *ptr = dadosUmidade;
    printf("Primeiro valor: %.1f%% (endereço: %p)\n", *ptr, (void*)ptr);
    printf("Último valor: %.1f%% (endereço: %p)\n", *(ptr + NUM_SENSORES - 1), (void*)(ptr + NUM_SENSORES - 1));
    
    printf("Valor do meio: %.1f%%\n", *(ptr + NUM_SENSORES/2));
    printf("Quarto valor: %.1f%%\n", *(ptr + 3));
    
    
    return 0;
}
