#include <stdio.h>
#include <math.h>

void decimalToBinary(int n) {
    printf("Binary representation of %d is: ", n);
    if (n == 0) {
        printf("0\n");
        return;
    }
    int binary[32];
    int index = 0;
    while (n > 0) {
        binary[index++] = n % 2;
        n = n / 2;
    }
    for (int i = index - 1; i >= 0; i--)
        printf("%d", binary[i]);
    printf("\n");
}

int binaryToDecimal(int n) {
    int decimal = 0, base = 1, rem;
    while (n > 0) {
        rem = n % 10;
        decimal = decimal + rem * base;
        base = base * 2;
        n = n / 10;
    }
    return decimal;
}

int main() {
    int choice, num;
    printf("Enter 1 to convert decimal to binary\n");
    printf("Enter 2 to convert binary to decimal\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    if (choice == 1) {
        printf("Enter a decimal number: ");
        scanf("%d", &num);
        decimalToBinary(num);
    } else if (choice == 2) {
        printf("Enter a binary number: ");
        scanf("%d", &num);
        printf("Decimal representation of %d is: %d\n", num, binaryToDecimal(num));
    } else {
        printf("Invalid choice.\n");
    }
    return 0;
}
