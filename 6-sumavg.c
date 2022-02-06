#include <stdio.h>

main() {
    int a, b, c, sum;
    float average;
    printf("Enter three numbers ");
    scanf("%d %d %d", &a, &b, &c);
    sum = a+b+c;
    average = sum/3;
    printf("Sum is %d\n", sum);
    printf("Average is %f\n", average);
    getchar();
}