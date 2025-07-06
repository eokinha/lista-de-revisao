
#include <stdio.h>
#include <stdlib.h>

void trocar(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void mostrarHorario(int horario) {
    int hora = horario / 100;
    int minuto = horario % 100;
    printf("%02d:%02d", hora, minuto);
}

int main() {
    int horarioPaciente1, horarioPaciente2;
    
    printf("=== SISTEMA DE TROCA DE HORARIOS ===\n");
    printf("Agendamento médico - Troca de horários\n\n");
    
    printf("Digite o horário do Paciente 1 (formato HHMM, ex: 1430): ");
    scanf("%d", &horarioPaciente1);
    
    printf("Digite o horário do Paciente 2 (formato HHMM, ex: 1600): ");
    scanf("%d", &horarioPaciente2); 
    
    if (horarioPaciente1 < 0 || horarioPaciente1 > 2359 || 
        horarioPaciente2 < 0 || horarioPaciente2 > 2359) {
        printf("\nERRO: Horários inválidos! Use formato HHMM (0000-2359)\n");
        return 1;
    }
    
    printf("\n=== HORARIOS ANTES DA TROCA ===\n");
    printf("Paciente 1: ");
    mostrarHorario(horarioPaciente1);
    printf(" (%d)\n", horarioPaciente1);
    
    printf("Paciente 2: ");
    mostrarHorario(horarioPaciente2);
    printf(" (%d)\n", horarioPaciente2);
    
    trocar(&horarioPaciente1, &horarioPaciente2);
    
    printf("\n=== HORARIOS APOS A TROCA ===\n");
    printf("Paciente 1: ");
    mostrarHorario(horarioPaciente1);
    printf(" (%d)\n", horarioPaciente1);
    
    printf("Paciente 2: ");
    mostrarHorario(horarioPaciente2);
    printf(" (%d)\n", horarioPaciente2);
    
    
    return 0;
}
