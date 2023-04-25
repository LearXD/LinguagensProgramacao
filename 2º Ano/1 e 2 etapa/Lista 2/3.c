#include <stdio.h>

void getClock(int seconds, int *clock) {
    clock[0] = (seconds / 60 / 24);
    clock[1] = (seconds - (clock[0] * 60 * 24)) / 60;
    clock[2] = seconds - (clock[1] * 60);
}

void main () {
    int seconds, clock[3];
    printf("Digite os segundos:\n");
    scanf("%d", &seconds);
    getClock(seconds, &clock);
    printf("Horario: [%d:%d:%d]", clock[0], clock[1], clock[2]);
}
