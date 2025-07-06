// Visualização de dificuldades no app de aprendizado (triângulo)

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    
    printf("=== VISUALIZACAO DE DIFICULDADES ===\n");
    printf("App de aprendizado - Grafico de progresso\n\n");
    
    // Entrada do número de linhas
    printf("Digite o numero de linhas para o grafico (n): ");
    scanf("%d", &n);
    
    // Validação da entrada
    if (n <= 0) {
        printf("\nERRO: O numero de linhas deve ser positivo!\n");
        return 1;
    }
    
    if (n > 50) {
        printf("\nAVISO: Numero muito grande pode causar problemas de visualizacao.\n");
        printf("Continuando mesmo assim...\n\n");
    }
    
    printf("\n=== GRAFICO DE PROGRESSO ===\n");
    printf("Altura: %d linhas\n\n", n);
    
    // Laços aninhados para criar o triângulo de asteriscos
    for (int linha = 1; linha <= n; linha++) {
        // Imprime espaços para centralizar (opcional)
        for (int espaco = 1; espaco <= n - linha; espaco++) {
            printf(" ");
        }
        
        // Imprime asteriscos para a linha atual
        for (int asterisco = 1; asterisco <= linha; asterisco++) {
            printf("*");
        }
        
        printf("\n");
    }
    
    return 0;
}
