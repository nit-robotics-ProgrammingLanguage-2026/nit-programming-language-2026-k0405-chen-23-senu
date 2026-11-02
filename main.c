#include <stdio.h>

int main(void) {
    double r = 4.0;
    double pi = 3.141592;
    double x;
    double a;

    scanf("%lf", &x);
    a = x / (pi * r) * 360.0;
    printf("%f", a);

    return 0;
}