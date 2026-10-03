#include <stdio.h>

void update(int *a, int *b) {
    int sum = *a + *b;
    int difference = *a - *b;

    printf("%d %d\n", sum, difference);
}

void updateFloat(float *a, float *b) {
    float sum = *a + *b;
    float difference = *a - *b;

    printf("%.1f %.1f\n", sum, difference);
}

int main() {
    int a, b;
    float c, d;

    scanf("%d %d", &a, &b);
    scanf("%f %f", &c, &d);

    update(&a, &b);
    updateFloat(&c, &d);

    return 0;
}
