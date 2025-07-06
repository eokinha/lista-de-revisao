// Coleta de dados de sensores com validação

#include <stdio.h>
#include <stdlib.h>

int main() {
    int dado;
    int soma = 0;
    int contador = 0;
    float media;
    
    printf("=== COLETA DE DADOS DE SENSORES ===\n");
    printf("Sistema de monitoramento de sensores\n");
    printf("Digite -1 para finalizar a coleta de dados\n\n");
    
    // Laço do...while para ler dados até receber -1
    do {
        printf("Digite o valor do sensor %d: ", contador + 1);
        scanf("%d", &dado);
        
        // Verifica se não é o sinal de parada
        if (dado != -1) {
            soma += dado;
            contador++;
            
            // Mostra o dado coletado
            printf("Dado coletado: %d (Total: %d, Contador: %d)\n", dado, soma, contador);
        }
        
    } while (dado != -1);
    
    // Cálculo da média
    if (contador > 0) {
        media = (float)soma / contador;
        
        printf("\n=== RESULTADO DA COLETA ===\n");
        printf("Total de dados coletados: %d\n", contador);
        printf("Soma total dos dados: %d\n", soma);
        printf("Média dos dados: %.2f\n", media);
        
    }
    
    
    return 0;
}
