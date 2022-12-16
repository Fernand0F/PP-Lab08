#include <stdio.h>

struct vetor{
    float x, y, z;
};

void main() {
    struct vetor v1, v2, vs;

    printf("VETOR 1\n");
    printf("X: ");
    scanf("%f", &v1.x);
    printf("Y: ");
    scanf("%f", &v1.y);
    printf("Z: ");
    scanf("%f", &v1.z);

    printf("\nVETOR 2\n");
    printf("X: ");
    scanf("%f", &v2.x);
    printf("Y: ");
    scanf("%f", &v2.y);
    printf("Z: ");
    scanf("%f", &v2.z);

    vs.x = v1.x + v2.x;
    vs.y = v1.y + v2.y;
    vs.z = v1.z + v2.z;

    printf("\nVETOR SOMA");
    printf("\nX: %.2f   Y: %.2f   Z: %.2f", vs.x, vs.y, vs.z);
}