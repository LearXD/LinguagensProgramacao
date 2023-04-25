#include <stdio.h>

void main () {
    char string[90], reversed_string[90];

    printf("\nDigite a palavra:");
    fgets(string, sizeof(string), stdin);

    int stringSize = 0;
    while (string[stringSize] != '\0') ++stringSize;
    stringSize--;

    for (int i = (stringSize - 1); i >= 0; i--) {
        printf("%c", string[i]);
    }

}
