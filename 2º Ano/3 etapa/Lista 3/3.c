#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
    
    FILE *file;
    char frase[50];
    
    int i, j;
    
    file = fopen("arquivo.txt", "wb");

    for (i = 0; i < 3; i++) {
        printf("Digite a frase %d: ", i+1);
        
        // esse [^\n] é um regex (pesquisa no google) para não bugar o trem do \n e salvar mais de uma string
        scanf(" %[^\n]s", frase); 

        for (j = 0; j < strlen(frase); j++) {
            frase[j] = toupper(frase[j]);
        }

        int size = strlen(frase);
        fwrite(&size, sizeof(int), 1, file);
        fwrite(frase, sizeof(char), size, file);
    }

    fclose(file);
    file = fopen("arquivo.txt", "rb");

    printf("\nFrases convertidas:\n");
    
    for (i = 0; i < 3; i++) {
        int size;
        fread(&size, sizeof(int), 1, file);
        
        char frase_lida[size];
        
        fread(frase_lida, sizeof(char), size, file);
        printf("%s\n", frase_lida);
    }

    fclose(file);

    return 0;
}