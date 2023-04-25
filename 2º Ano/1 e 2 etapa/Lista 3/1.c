#include <stdio.h>

void change (int *a, int *b) {
    /*
     BEM, AQUI TEMOS UM "PROBLEMA", POIS SE EU DEFINIR O VALOR DA VARIAVEL "A" PARA O
     VALOR DA VARIAVEL "B" QUANDO EU FOR DEFINIR A VARIAVEL "B" PARA O VALOR DA "A", O VALOR DA VARIAVEL "A" VAI SER IGUAL AO DELA MESMA.

     PARA RESOLVERMOS ISSO, PODEMOS CRIAR UMA VARIAVEL TEMPORARIA (NOME APENAS SIMBOLICO). E SALVAR O VALOR DE "A" PARA DEPOIS EU USA-LO NA B
    */
    int temp = *a;
    *a = *b;
    *b = temp;
}

void main () {
    int a, b;
    printf("Digite o valor da variavel A e respectivamente o da B:\n");
    scanf("%d %d", &a, &b);
    change(&a, &b); // ATENÇÃO: A PARTIR DAQUI O VALOR DAS VARIAVEIS "a" e "b" SERÁ ALTERADO
    printf("\nValor da variavel a: %d", a);
    printf("\nValor da variavel b: %d", b);
}
