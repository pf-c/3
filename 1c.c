#include <stdio.h>
#include <stdbool.h>

void nonFibonacciSeries(int range) {
    int a = 0, b = 1, next = a + b;
    
    printf("Non-Fibonacci Series up to %d: \n", range);
    for (int i = 1; i <= range; ++i) {
        if (i == next) {
            a = b;
            b = next;
            next = a + b;
        } else {
            printf("%d, ", i);
        }
    }
    printf("\n");
}

int main() {
    int range;
    printf("Enter the range: ");
    scanf("%d", &range);
    nonFibonacciSeries(range);
    return 0;
}
