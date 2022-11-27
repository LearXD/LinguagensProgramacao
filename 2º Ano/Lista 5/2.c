#include <stdio.h>

void main () {
    char string1[100], string2[100];

    printf("Digite seu texto 1:\n");
    fgets(string1, sizeof(string1), stdin);
    fflush(stdin);

    printf("Digite seu texto 2:\n");
    fgets(string2, sizeof(string2), stdin);

    int similarity = 1;
    for(int i = 0; string1[i] != '\0'; i++) {
        if(string1[i] != string2[i]) {
            similarity = 0;
            break;
        }
    }

    (similarity) ?
        printf("Os dois textos sao iguais!") :
        printf("Os dois textos sao diferentes!");

}
