// Relatório de estoque diário

#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("=== RELATORIO DE ESTOQUE DIARIO ===\n");
    printf("Produtos disponíveis no estoque:\n");
    
    for (int id = 1; id <= 100; id++) {
        printf("Produto ID: %03d", id);
        
        if (id % 10 == 0) {
            printf("  <- Fim da linha %d", id / 10);
        }
        
    }
    
    printf("\n=== RESUMO ===\n");
    printf("Total de produtos no estoque: 100\n");
    printf("Faixa de IDs: 001 a 100\n");

    
    return 0;
}
