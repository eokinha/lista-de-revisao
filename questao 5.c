// Leitura invertida de etiquetas de produtos

#include <stdio.h>
#include <stdlib.h>

// Função para inverter um número inteiro
int inverterNumero(int numero) {
    int numeroInvertido = 0;
    int temp = numero;
    
    // Extrai cada dígito e reconstrói o número invertido
    while (temp != 0) {
        int digito = temp % 10;  // Pega o último dígito
        numeroInvertido = numeroInvertido * 10 + digito;  // Adiciona à esquerda
        temp = temp / 10;  // Remove o último dígito
    }
    
    return numeroInvertido;
}

int main() {
    int codigoOriginal, codigoInvertido;
    
    printf("=== LEITURA INVERTIDA DE ETIQUETAS ===\n");
    printf("Sistema de escaneamento de codigos de barras\n");
    
    // Entrada do código de barras
    printf("Digite o codigo de barras: ");
    scanf("%d", &codigoOriginal);
    
    // Validação da entrada
    if (codigoOriginal < 0) {
        printf("\nERRO: O codigo nao pode ser negativo!\n");
        return 1;
    }
    
    // Inversão usando a função
    codigoInvertido = inverterNumero(codigoOriginal);
    
    // Saída dos resultados
    printf("\n=== RESULTADO ===\n");
    printf("Codigo de barras: %d\n", codigoOriginal);
    printf("Codigo invertido: %d\n", codigoInvertido);
    
    return 0;
}
