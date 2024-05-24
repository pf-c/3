#include <stdio.h>

void fibonacciSeries(int range) {
    int a = 0, b = 1, next;
    
    printf("Fibonacci Series up to %d: \n", range);
    printf("%d, %d", a, b);

    next = a + b;
    while (next <= range) {
        printf(", %d", next);
        a = b;
        b = next;
        next = a + b;
    }
    printf("\n");
}

int main() {
    int range;
    printf("Enter the range: ");
    scanf("%d", &range);
    fibonacciSeries(range);
    return 0;
}
