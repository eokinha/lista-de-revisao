// Verificador de qualidade de senhas (numero primo)
// Este programa valida senhas como fortes se forem números primos

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Função para verificar se um número é primo
// Retorna 1 se for primo, 0 se não for primo
int ehPrimo(int numero) {
    // Casos especiais
    if (numero <= 1) {
        return 0;  // 0 e 1 não são primos
    }
    if (numero == 2) {
        return 1;  // 2 é primo
    }
    if (numero % 2 == 0) {
        return 0;  // Números pares maiores que 2 não são primos
    }
    
    return 1;  // É primo
}

int main() {
    int senha;
    
    printf("=== VERIFICADOR DE QUALIDADE DE SENHAS ===\n");
    
    // Entrada da senha
    printf("Digite a senha numerica: ");
    scanf("%d", &senha);
    
    // Validação da entrada
    if (senha < 0) {
        printf("\nERRO: A senha nao pode ser negativa!\n");
        return 1;
    }
    
    // Verificação se é primo
    int resultado = ehPrimo(senha);
    
    // Saída dos resultados
    
    if (resultado == 1) {
        printf("Status: FORTE\n");
        printf("Motivo: %d e um numero primo\n", senha);
    } else {
        printf("Status: FRACA\n");
        printf("Motivo: %d nao e um numero primo\n", senha);
        

    // Informações adicionais
    printf("\n=== INFORMACOES ===\n");
    printf("• Numeros primos sao divisiveis apenas por 1 e por si mesmos\n");
    printf("• Senhas primas sao mais seguras pois sao menos previsiveis\n");
    printf("• Exemplos de senhas fortes: 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31...\n");
    
    return 0;
}
