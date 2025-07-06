// Configuração remota de dispositivo via ponteiro
// Este programa altera o valor do volume de um dispositivo remotamente usando ponteiros

#include <stdio.h>
#include <stdlib.h>

void alterarVolume(int *volume) {
    int novoVolume;
    
    printf("=== CONFIGURACAO REMOTA DE VOLUME ===\n");
    printf("Volume atual: %d\n", *volume);
    
    printf("Digite o novo volume (0-100): ");
    scanf("%d", &novoVolume);
    
    if (novoVolume < 0) {
        printf("AVISO: Volume negativo detectado. Definindo como 0.\n");
        novoVolume = 0;
    } else if (novoVolume > 100) {
        printf("AVISO: Volume muito alto detectado. Definindo como 100.\n");
        novoVolume = 100;
    }
    
    *volume = novoVolume;
    
    printf("Volume alterado com sucesso!\n");
}

void mostrarStatus(int volume) {
    printf("\n=== STATUS DO DISPOSITIVO ===\n");
    printf("Volume atual: %d\n", volume);
    
    if (volume == 0) {
        printf("Status: Mudo\n");
    } else if (volume <= 25) {
        printf("Status: Volume baixo\n");
    } else if (volume <= 50) {
        printf("Status: Volume médio\n");
    } else if (volume <= 75) {
        printf("Status: Volume alto\n");
    } else {
        printf("Status: Volume máximo\n");
    }
    
    printf("Visualização: [");
    for (int i = 0; i < 20; i++) {
        if (i < (volume * 20 / 100)) {
            printf("#");
        } else {
            printf("-");
        }
    }
    printf("] %d%%\n", volume);
}

int main() {
    int volumeDispositivo = 50;
    
    printf("=== SISTEMA DE CONFIGURACAO REMOTA ===\n");
    printf("Dispositivo de áudio - Controle remoto\n\n");
    
    mostrarStatus(volumeDispositivo);
    
    alterarVolume(&volumeDispositivo);
    
    mostrarStatus(volumeDispositivo);
    
    return 0;
}
