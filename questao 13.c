
#include <stdio.h>
#include <stdlib.h>
float somarPrecos(float *preco1, float *preco2) {
    return *preco1 + *preco2;
}

void mostrarPreco(float preco) {
    printf("R$ %.2f", preco);
}

int main() {
    float preco1, preco2;
    
    printf("=== SISTEMA DE VENDAS - CALCULADORA DE PREÇOS ===\n");
    printf("Calculadora de soma de preços com ponteiros\n\n");
    
    printf("Digite o primeiro preço: R$ ");
    scanf("%f", &preco1);
    
    printf("Digite o segundo preço: R$ ");
    scanf("%f", &preco2);
    
    if (preco1 < 0 || preco2 < 0) {
        printf("\nERRO: Preços não podem ser negativos!\n");
        return 1;
    }
    
      float soma = somarPrecos(&preco1, &preco2);
    
    printf("Soma dos preços: ");
    mostrarPreco(soma);
    printf("\n");
    
    return 0;
}
