#include <stdio.h>

void main () {
    char string[80];
    printf("\nDigite a palavra:");
    fgets(string, sizeof(string), stdin);

    int stringSize = 0;
    while (string[stringSize] != '\0') ++stringSize;
    stringSize--;

    int isPalindrome = 1;

    for (int i = 0; string[i] != '\0' && string[i] != '\n'; i++) {

        if(string[i] != string[stringSize - i -1]) {
            isPalindrome = 0;
        }
    }

    (isPalindrome) ?
        printf("O texto e um palindromo!") :
        printf("O texto nao e um palindromo!");
}
