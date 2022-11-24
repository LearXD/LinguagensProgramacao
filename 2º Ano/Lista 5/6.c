#include <stdio.h>

char encoded_pattern[] = "2345623456";
char decoded_pattern[] = "aeiouAEIOU";

char getCorrespondent(char ch, int encoded) {
    int size = (sizeof(decoded_pattern) / sizeof(decoded_pattern[0]));
    for(int i = 0; i <= size; i++) {
        if(encoded) {
            if(ch == decoded_pattern[i]) {
                return encoded_pattern[i];
            }
            continue;
        }
        if(ch == encoded_pattern[i]) {
            return decoded_pattern[i];
        }
    }
    return ch;
}

char * encode(char * string, int size) {
    for (int i = 0; string[i] != '\0'; i++) {
        string[i] = getCorrespondent(string[i], 1);
    }
    return *string;
}

char * decode(char * string, int size) {
    for (int i = 0; string[i] != '\0'; i++) {
        string[i] = getCorrespondent(string[i], 0);
    }
    return *string;
}

void main () {
    char string[60];
    printf("\nDigite a frase que deseja criptografar:");
    fgets(string, sizeof(string), stdin);

    *string = encode(string, sizeof(string));

    printf("\nTexto criptografado:");
    printf("\n>> %s", string);

    *string = decode(string, sizeof(string));

    printf("\nTexto descriptografado:");
    printf("\n>> %s", string);
}


