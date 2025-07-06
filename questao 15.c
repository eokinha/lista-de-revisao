
#include <stdio.h>
#include <stdlib.h>

float calcularMedia(float *pedidos, int quantidade) {
    float soma = 0;
    
    for (int i = 0; i < quantidade; i++) {
        soma += pedidos[i];
    }
    
    return soma / quantidade;
}

void mostrarPedidos(float *pedidos, int quantidade) {
    printf("\n=== LISTA DE PEDIDOS ===\n");
    printf("Quantidade de pedidos: %d\n\n", quantidade);
    
    for (int i = 0; i < quantidade; i++) {
        printf("Pedido %d: R$ %.2f", i + 1, pedidos[i]);
        
        if (pedidos[i] < 50) {
            printf(" (Pequeno)");
        } else if (pedidos[i] < 200) {
            printf(" (Médio)");
        } else if (pedidos[i] < 500) {
            printf(" (Grande)");
        } else {
            printf(" (Extra grande)");
        }
        
        if ((i + 1) % 3 == 0) {
            printf("\n");
        } else {
            printf("\t");
        }
    }
    printf("\n");
}

int main() {
    int quantidade;
    float *pedidos = NULL;
    
    printf("=== SISTEMA DE GESTÃO DE PEDIDOS ===\n");
    printf("Alocação dinâmica com malloc\n\n");
    
    printf("Digite a quantidade de pedidos: ");
    scanf("%d", &quantidade);
    
    if (quantidade <= 0) {
        printf("\nERRO: Quantidade deve ser maior que zero!\n");
        return 1;
    }
    
    if (quantidade > 1000) {
        printf("\nAVISO: Quantidade muito grande pode consumir muita memória.\n");
        printf("Continuando mesmo assim...\n\n");
    }
    
    printf("=== ALOCANDO MEMÓRIA ===\n");
    pedidos = (float*)malloc(quantidade * sizeof(float));
    
    if (pedidos == NULL) {
        printf("ERRO: Falha na alocação de memória!\n");
        return 1;
    }
    
    printf("Memória alocada com sucesso!\n");
    printf("Tamanho alocado: %d bytes\n", quantidade * sizeof(float));
    printf("Endereço inicial: %p\n\n", (void*)pedidos);
    
    printf("=== PREENCHENDO PEDIDOS ===\n");
    for (int i = 0; i < quantidade; i++) {
        printf("Digite o valor do pedido %d: R$ ", i + 1);
        scanf("%f", &pedidos[i]);
        if (pedidos[i] < 0) {
            printf("AVISO: Valor negativo detectado. Definindo como 0.\n");
            pedidos[i] = 0;
        }
    }
    
    mostrarPedidos(pedidos, quantidade);
    
    printf("=== CÁLCULO DA MÉDIA ===\n");
    float media = calcularMedia(pedidos, quantidade);
    printf("Média dos pedidos: R$ %.2f\n", media);
    
    printf("\n=== ANÁLISE DOS DADOS ===\n");
    float soma = 0, maximo = pedidos[0], minimo = pedidos[0];
    
    for (int i = 0; i < quantidade; i++) {
        soma += pedidos[i];
        if (pedidos[i] > maximo) maximo = pedidos[i];
        if (pedidos[i] < minimo) minimo = pedidos[i];
    }
    
    printf("Valor total dos pedidos: R$ %.2f\n", soma);
    printf("Pedido de maior valor: R$ %.2f\n", maximo);
    printf("Pedido de menor valor: R$ %.2f\n", minimo);
    printf("Variação: R$ %.2f\n", maximo - minimo);
        
    return 0;
}
