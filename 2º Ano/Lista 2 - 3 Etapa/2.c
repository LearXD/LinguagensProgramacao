#include <stdio.h>
#include <Math.h>

typedef struct {
    int x;
    int y;
    int z;
} Vector3;

float distance(Vector3 v1, Vector3 v2) {
    // TRANSCRITO DO SOFTWARE DE MINECRAFT
    // https://github.com/PocketMine/PocketMine-MP/blob/master/src/pocketmine/math/Vector3.php#L184
    return pow(v1.x - v2.x, 2) + pow(v1.y - v2.y, 2) + pow(v1.z - v2.z, 2);
}

void main () {

    Vector3 v1, v2;

    printf("Digite as posicoes X, Y e Z do vetor 1 repectivamente: \n");
    scanf("%d %d %d", &v1.x, &v1.y, &v1.z);

    printf("Digite as posicoes X, Y e Z do vetor 2 repectivamente: \n");    
    scanf("%d %d %d", &v2.x, &v2.y, &v2.z);

    printf("A distancia entre os dois vetores e: %.2f !", distance(v1, v2));

}

