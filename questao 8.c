// Sistema educacional com tabuada personalizada

#include <stdio.h>
#include <stdlib.h>

int main() {
    int numero;
    
    printf("=== SISTEMA EDUCACIONAL - TABUADA PERSONALIZADA ===\n");
    printf("Plataforma de reforço escolar\n\n");
    
    // Entrada do número escolhido pelo usuário
    printf("Digite o número para gerar sua tabuada: ");
    scanf("%d", &numero);
    
    // Validação da entrada
    if (numero < 0) {
        printf("\nAVISO: Número negativo detectado. Continuando mesmo assim...\n\n");
    }
    
    printf("\n=== TABUADA DO %d ===\n", numero);
    printf("Vamos aprender a tabuada do %d:\n\n", numero);
    
    // Laço for para imprimir a tabuada de 1 a 10
    for (int multiplicador = 1; multiplicador <= 10; multiplicador++) {
        int resultado = numero * multiplicador;
        
        printf("%d x %2d = %3d", numero, multiplicador, resultado);
            
        printf("\n");
    }
    
    printf("\nParabéns! Você aprendeu a tabuada do %d!\n", numero);
    
    return 0;
}
