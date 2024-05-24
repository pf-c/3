#include <stdio.h>

int factorial(int n) {
    if (n == 0) return 1;
    int fact = 1;
    for (int i = 1; i <= n; ++i) {
        fact *= i;
    }
    return fact;
}

int nPr(int n, int r) {
    return factorial(n) / factorial(n - r);
}

int nCr(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main() {
    int n, r;
    printf("Enter n and r: ");
    scanf("%d %d", &n, &r);
    printf("nPr = %d\n", nPr(n, r));
    printf("nCr = %d\n", nCr(n, r));
    return 0;
}
