#include <stdio.h>

int main() {
    FILE *file;
    file = fopen("arquivo.txt", "w");

    printf("Digite os caracteres que deseja salvar (ou 0 para parar):\n");
    
    while (1) {
        char character = getchar();
        if(character == '0') {
            break;
        }
        fputc(character, file);
    } 

    fclose(file);
    
    file = fopen("arquivo.txt", "r");

    printf("\nDados salvos no arquivo:\n");
    
    while (1) {
        char character = fgetc(file);
        if(character == EOF) {
            break;
        }
        printf("%c", character);
    }

    fclose(file);
    
    printf("FIM...");

    return 0;
}