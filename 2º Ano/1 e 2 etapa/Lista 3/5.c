#include <stdio.h>
#include <math.h> // USEI A FUNCAO POW e SQRT!!

void calc (float a, float b, float c, float *x1, float *x2) {
    float delta = pow(b, 2) - (4 * a * c);

    if(delta == 0) { // QUANDO O DELTA � 0 X1 e X2 S�O IGUAIS!
        // DUPLA DEFINI��O DE VARIAVEL, BASICAMENTE EU TO DEFINIDO QUE A VARIAVEL X1 � IGUAL a X2 que � IGUAL AO RESULTADO DA EQUA��O
        *x1 = *x2 = -b/2*a;
    } else if(delta > 0) { // DELTA MAIOR QUE 0...
        *x1 = (-b + sqrt(delta)) / 2*a;
        *x2 = (-b - sqrt(delta)) / 2*a;
    }

    // QUANDO O DELTA � MENOR QUE 0 N�O TEMOS UM VALOR REAL PARA O x1 e x2
    // LOGO ELE NAO VAI SE ENQUADRAR EM NENHUMA CONDI��O ACIMA, ENT�O O VALOR
    // DE x1 e x2 PERMANECER� 0!!

}

void main () {
    float x1 = 0, x2 = 0;
    float a, b, c;

    printf("Digite o valor do a, b, e c repesctivamente:\n");
    scanf("%f %f %f", &a, &b, &c);

    calc(a, b, c, &x1, &x2);

    // .2 para ter 2 numeros apenas antes da virgula
    printf("\nValor do X1: %.2f", x1);
    printf("\nValor do X2: %.2f", x2);

}
