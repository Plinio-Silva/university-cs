#include <stdio.h>
#include <time.h>

#ifdef _WIN32
#include <windows.h>
#else
#include <unistd.h>
#endif

// Definição de uma estrutura para representar um relógio.
struct Relogio {
    int horas;
    int minutos;
    int segundos;
};

// Função que imprime o horário no formato HH:MM:SS.
void imprimeRelogio(struct Relogio relogio) {
    printf("\rHorario: %02d:%02d:%02d", relogio.horas, relogio.minutos, relogio.segundos);
    fflush(stdout);
}

int main() {
    struct Relogio relogio;
    time_t horarioAtual;
    struct tm *tempoLocal;

    printf("Relogio em tempo real (pressione Ctrl+C para sair)\n");

    while (1) {
        horarioAtual = time(NULL);
        tempoLocal = localtime(&horarioAtual);

        relogio.horas = tempoLocal->tm_hour;
        relogio.minutos = tempoLocal->tm_min;
        relogio.segundos = tempoLocal->tm_sec;

        imprimeRelogio(relogio);

#ifdef _WIN32
        Sleep(1000);
#else
        sleep(1);
#endif
    }

    return 0;
}