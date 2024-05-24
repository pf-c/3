#include <stdio.h>

int nthFibonacci(int n) {
    if (n <= 1) return n;
    int a = 0, b = 1, next;
    for (int i = 2; i <= n; ++i) {
        next = a + b;
        a = b;
        b = next;
    }
    return b;
}

int main() {
    int n;
    printf("Enter the term number: ");
    scanf("%d", &n);
    printf("The %dth Fibonacci term is %d\n", n, nthFibonacci(n));
    return 0;
}
