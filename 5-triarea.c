#include <stdio.h>

main() {
    int b, h;
    float area;
    printf("Enter the value for b and h ");
    scanf("%d %d", &b, &h);
    area = 0.5*b*h;
    printf("Area is %f\n", area);
    getchar();
}