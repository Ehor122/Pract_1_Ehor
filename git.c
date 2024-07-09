#include <stdio.h>

int main() {
    double t1, t2, t3;
    printf("Enter three values: ");
    scanf("%lf %lf %lf", &t1, &t2, &t3);

    double total_time = 1.0 / (1.0/t1 + 1.0/t2 + 1.0/t3);

    printf("Time required to eat the cake: %.2f h\n", total_time);

    return 0;
}
