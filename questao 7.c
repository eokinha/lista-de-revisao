// Soma de consumo de energia em horários pares 

#include <stdio.h>
#include <stdlib.h>

int main() {
    int horario = 2;
    int somaConsumo = 0;
    int contador = 0;
    
    printf("=== SOMA DE CONSUMO DE ENERGIA EM HORARIOS PARES ===\n");
    
    while (horario <= 50) {
        int consumo = horario * 10;
        
        somaConsumo += consumo;
        contador++;
        
        printf("Horário %02d: %d kWh", horario, consumo);

        printf("\n");
        horario += 2;
    }
    
    printf("\n=== RESULTADO ===\n");
    printf("Total de horários pares: %d\n", contador);
    printf("Soma total do consumo: %d\n", somaConsumo);
    
    return 0;
}
