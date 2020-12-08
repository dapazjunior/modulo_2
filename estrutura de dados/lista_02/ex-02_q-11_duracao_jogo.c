#include <stdio.h>

int main(){
    int hora_inicio, hora_fim, minuto_inicio, minuto_fim, duracao, tempo_inicio, tempo_fim, hora_dur, minuto_dur;
    printf("Qual o horario de inicio do jogo? (HH:MM)\nHoras: ");
    scanf("%i", &hora_inicio);
    printf("Minutos: ");
    scanf("%i", &minuto_inicio);

    printf("Qual o horario do fim do jogo? (HH:MM)\nHoras: ");
    scanf("%i", &hora_fim);
    printf("Minutos: ");
    scanf("%i", &minuto_fim);

    tempo_inicio = hora_inicio * 60 + minuto_inicio;
    tempo_fim = hora_fim * 60 + minuto_fim;

    if(tempo_fim < tempo_inicio){
        duracao = 24 * 60 - tempo_inicio + tempo_fim;
    } else if (tempo_inicio < tempo_fim)
    {
        duracao = tempo_fim - tempo_inicio;
    }

    hora_dur = duracao / 60;
    minuto_dur = duracao % 60;

    printf("O jogo durou %i:%i\n\n", hora_dur, minuto_dur);

    system("PAUSE");
}
