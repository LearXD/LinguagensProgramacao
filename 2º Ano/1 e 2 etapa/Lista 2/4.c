#include <stdio.h>

float getIncreacePercentage (float beforePrice, float laterPrice) {
    return ((laterPrice - beforePrice) / beforePrice) * 100;
}

void main () {
    float beforePrice, laterPrice;
    printf("Digite o preco anterior e posterior do produto:\n");
    scanf("%f %f", &beforePrice, &laterPrice);
    printf("O aumento foi de %.2f%%", getIncreacePercentage(beforePrice, laterPrice));
}
