#include <stdio.h>

main() {
    int l, b, area;
    printf("Enter the length ");
    scanf("%d", &l);
    printf("Enter the breadth ");
    scanf("%d", &b);
    area = l*b;
    printf("Area is %d\n", area);
    getchar();
}