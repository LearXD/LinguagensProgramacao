#include <stdio.h>

void main () {
    char string[80];

    // A = 0
    // E = 1
    // I = 2
    // O = 3
    // U = 4
    int vowels_count[5] = {0,0,0,0,0};
    char vowels[5] = "aeiou";

    printf("Digite seu texto:\n");
    fgets(string, sizeof(string), stdin);

    for (int i=0; string[i] != '\0'; i++) {
        for(int n = 0; n <= 4; n++) {
            if(string[i] == vowels[n]) {
                vowels_count[n]++;
            }
        }
    }

    for(int n = 0; n <= 4; n++) {
        printf("\n* Existem %d vogais \"%c\"...", vowels_count[n], vowels[n]);
    }
}
