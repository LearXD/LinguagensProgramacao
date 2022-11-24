#include <stdio.h>

int isCharacter(char ch) {
    return ((ch >= 'a' && ch <= 'z') ||
            (ch >= '0' && ch <= '9'));
}

int isSpace(char ch) {
    return (ch == ' ');
}

void main () {
    char string[90];

    printf("\nDigite sua frase:");
    fgets(string, sizeof(string), stdin);

    int hasSpaced = 1;

    for (int i = 0; string[i] != '\0'; i++) {
        if(!hasSpaced && isSpace(string[i])) {
            printf("\n");
            continue;
        }

        hasSpaced = 0;
        printf("%c", string[i]);
    }
}


