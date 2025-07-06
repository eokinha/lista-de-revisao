// Cálculo de produção em linha de montagem (fatorial)

#include <stdio.h>
#include <stdlib.h>

// Função para calcular o fatorial de um número
int calcularFatorial(int n) {
    if (n <= 1) {
        return 1;
    }
    
    int resultado_fatorial = 1;
    for (int i = 2; i <= n; i++) {
        resultado_fatorial *= i;
    }
    return resultado_fatorial;
}

int main() {
    int n;
    
    printf("=== CALCULADORA DE PRODUCAO EM LINHA DE MONTAGEM ===\n");
    
    // Entrada do usuário
    printf("Digite o numero de pecas: ");
    scanf("%d", &n);
    
    // Validação da entrada
    if (n < 0) {
        printf("\nERRO: O numero de pecas nao pode ser negativo!\n");
        return 1;
    }
    
    // Cálculo do fatorial
    int formas = calcularFatorial(n);
    
    // Saída dos resultados
    printf("\n=== RESULTADO ===\n");
    printf("Existem %d formas diferentes de organizar %d pecas\n", formas, n);
    
    return 0;
}

