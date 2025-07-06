// Conversor de temperatura para sensores internacionais
// Este programa converte temperaturas de Celsius para Fahrenheit

#include <stdio.h>
#include <stdlib.h>

// Função para converter Celsius para Fahrenheit
// Parâmetro: float celsius
// Retorno: float fahrenheit
float converterCelsiusParaFahrenheit(float celsius) {
    return (celsius * 9.0 / 5.0) + 32.0;
}

int main() {
    float celsius, fahrenheit;
    
    printf("=== CONVERSOR DE TEMPERATURA ===\n");
    
    // Entrada da temperatura em Celsius
    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &celsius);
    
    // Conversão usando a função
    fahrenheit = converterCelsiusParaFahrenheit(celsius);
    
    // Saída dos resultados
    printf("\n=== RESULTADO DA CONVERSAO ===\n");
    printf("Temperatura em Celsius: %.2f°C\n", celsius);
    printf("Temperatura em Fahrenheit: %.2f°F\n", fahrenheit);
       
    return 0;
}